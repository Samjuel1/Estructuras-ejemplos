#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <random>
#include <cstdlib>
#include <Persona.hpp>

using namespace std;

int generarEdad(int minimo, int tamano);
int generarDni();

int main(int argc, char **argv)
{
	srand(time(0));
	cout << "Personas generadas aletoriamente: " << endl;
	cout << endl;
	for (int i = 0; i < 10; i++){
		Persona p(18 + i);
		p.mostrar();
	}
/*	Persona p1(14);
	p1.mostrar();
	p1.esMujer();
	p1.mostrar();
	p1.setEdad(18);
	cout << "Nueva edad: " << p1.getEdad() << endl;
	
	p1.mostrar();
	generarEdad(17,10);*/
	return 0;
}
	


int generarEdad(int minimo, int tamano){
	
	vector<int> lista;
	for (int i = 0; i < tamano; i++){
		lista.push_back(minimo + i);
		}
	for (int n: lista)
	{
		cout << n << " ";
	}
	cout << endl;
	
	for (int i = 0; i < tamano; i++)
	{
	int indice = rand() % lista.size();
	int numero = lista[indice];
	lista.erase(lista.begin() + indice);
	cout << numero << " ";
}
cout << endl;
}



/*int generarDni(){
	int min = 10000000;
	int max = 99999999;
	for (int i = 0; i < 10; i++){
	int dni = min + rand() % (max - min + 1);
	cout << dni << endl;}
}*/

