#include <iostream>
using namespace std;

int cuadrado(int a){
	a = a*a;
	
	return a;
	}
	
void cuadradoPorInd(int* b)
{
	*b = (*b) * (*b);
	}
void cuadradoPorRef(int& c)
{
	c = c * c;
	}
	
int main(int argc, char **argv)
{
	int a = 5, b = 6, c = 7;
	cuadrado(a);
	cuadradoPorInd(&b);
	cuadradoPorRef(c);
	cout << "a = " << a << " b = " << b << " c = " << c << endl; 
	return 0;
}
