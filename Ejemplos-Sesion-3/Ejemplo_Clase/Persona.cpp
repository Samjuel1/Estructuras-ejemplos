#include "Persona.hpp"

Persona::Persona(int e){
this-> edad = e;
genero = rand() % 2;
generarDni();
}

Persona::~Persona()
{
}

int Persona::getEdad() const { return edad; }
bool Persona::getGenero() const 
{ if (genero){
	return "Mujer";
} else {return "Hombre";}
}
char Persona::getDni() const { return dni[10]; }

void Persona::setEdad(int e) { this->edad = e; }
void Persona::setGenero(bool genero) { this->genero = genero;}
void Persona::setDni(char dni) { this->dni[10] = dni; }

void Persona::esMujer() {cout << (genero ? "Si": "No") << endl;}

void Persona::mostrar(){
	cout << "Edad: " << edad
	<< ", Genero: " << (genero ? "Mujer": "Hombre")
	<< ", DNI: " << dni << endl;
}

void Persona::generarDni()
{
	random_device rd;
    mt19937_64 gen(rd());                       
    uniform_int_distribution<long long> dist(10000000, 99999999);
	int numero = dist(gen);
	char letras[] = "TRWAGMYFPDXBNJZSQVHLCKE";
	char letra = letras[numero % 23];

	sprintf(dni,"%d%c", numero, letra);
}




