#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <time.h> 

using std::cin;
using std::cout;

bool esCorrecto(int, int);

void main()
{
	srand(time(NULL));
	juegoPrincipal();

	_getch();
}

void juegoPrincipal()
{
	int numeroIngresado, numeroAdivinar;
	char respuesta;
	do
	{
		numeroAdivinar = 1 + rand() % 1000;
		cout << "Tengo un numero entre 1 y 1000. \n Te atreves a adivinarlo? \n Ingresa tu primera opcion:";
		cin >> numeroIngresado;
		while (!esCorrecto(numeroIngresado, numeroAdivinar))
			cin >> numeroIngresado;

	} while (respuesta == 'y');
}

bool esCorrecto(int _numeroAdivinar, int _numeroIngresado)
{

}