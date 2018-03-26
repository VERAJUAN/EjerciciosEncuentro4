// EjerciciosEncuentro4.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include "e3.h"
#include "nodo.h"
using namespace std;

int main()
{
	bool flag = true;
	listDouble list;
	do{
		int option, x = 1, y = 2;
		int *p1 = &x, *p2 = &y;
		int &p3 = x, &p4 = y;		
		int indice[] = { 1,2,3,4,5,6,7,8,9,10 };
		int *ptr = indice; //Faltó inicializar, en este caso por indice.

	
		cout << "\nMenu:\n1- Explicado en el ReadMe.txt\n2- Impresion de true.\n3- Funcion swap.\n4- Agregar elementos a la lista.\nIngresar opcion:\n";
		cin >> option;
		switch (option)
		{
		case 1:
			cout << "\nExplicado en ReadMe.txt\n";
			break;
		case 2:		
			ptr++;
			if ((*ptr * 5) == (*(ptr + 8))) //ptr apunta a 2, entonces el primer termino le multiplica por 5 y da 10, entonces al segundo término le falta sumarle 8 para dar 10.
			{
				printf("true");
			}
			else
			{
				printf("false");
			}
			break;
		case 3:
			swap_1(p1, p2);
			swap_2(p3, p4);
			break;
		case 4:
			cout << "\nIngresar numero entero no primo a agregar a la lista.\n";
			cin >> option;
			list.addElement(option);
			list.print();
			break;

		case 0:
			flag = false;
			break;
		default:
			break;
		}
	} while (flag);

    return 0;
}

