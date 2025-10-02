#ifndef PERSONA_HPP
#define PERSONA_HPP
#include <iostream>
#include <random>
#include <stdio.h>

using namespace std;

class Persona
{
public:
	Persona(int e);
	~Persona();
	int getEdad() const;
	char getDni() const;
	bool getGenero() const;
	void setEdad(int e);
	void setDni(char dni);
	void setGenero(bool genero);
	void esMujer();
    void mostrar();
	
private:
	bool genero;
	int edad;
	char dni[10];
	
	void generarDni();

};

#endif // PERSONA_HPP
