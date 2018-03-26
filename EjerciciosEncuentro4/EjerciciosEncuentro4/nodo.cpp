#include "stdafx.h"
#include <iostream>

using namespace std;

class listDouble {
private:
	class Nodo {
	public:
		int info;
		Nodo *sig;
		Nodo *ant;
	};

	Nodo *raiz;
public:
	listDouble();
	~listDouble();
	int cantidad();
	void addElement(int x);
	bool primo(int x);
	void listDouble::print();
};

listDouble::listDouble()
{
	raiz = NULL;
}

listDouble::~listDouble()
{
	Nodo *reco = raiz;
	Nodo *bor;
	while (reco != NULL)
	{
		bor = reco;
		reco = reco->sig;
		delete bor;
	}
}

int listDouble::cantidad()
{
	Nodo *reco = raiz;
	int cant = 0;
	while (reco != NULL)
	{
		cant++;
		reco = reco->sig;
	}
	return cant;
}

void listDouble::addElement(int x)
{
	if (primo(x)) {
		cout << "\nSolo se puede agregar numeros no primos.\n";
	}
	else {
		Nodo *nuevo = new Nodo();
		nuevo->info = x;
		nuevo->sig = raiz;
		if (raiz != NULL) {
			raiz->ant = nuevo;
		}
		raiz = nuevo;
	}
}

bool listDouble::primo(int x) {
	bool flag = false,flag2=false;
	int aux = x;
		if (x != 1)
		{
			aux = aux - 1;
		}
		do{
			if (x % aux != 0) {
				aux = aux - 1;
				flag2 = true;
			}
			else {
				if (aux==1)
				{
					flag = true;
				}
				else {
					flag = false;
				}
				flag2 = false;
			}
		} while (flag2);
	return flag;
}

void listDouble::print()
{
	Nodo *rec = raiz;
	cout << "\nListado completo.\n";
	while (rec != NULL)
	{
		cout << rec->info << "-";
		rec = rec->sig;
	}
	cout << "\n";
}
