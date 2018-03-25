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
	void addElement(int pos, int x);
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

void listDouble::addElement(int pos, int x)
{
	if (pos <= cantidad() + 1)
	{
		Nodo *nuevo = new Nodo();
		nuevo->info = x;
		if (pos == 1)
		{
			nuevo->sig = raiz;
			if (raiz != NULL)
				raiz->ant = nuevo;
			raiz = nuevo;
		}
		else
			if (pos == cantidad() + 1)
			{
				Nodo *reco = raiz;
				while (reco->sig != NULL)
				{
					reco = reco->sig;
				}
				reco->sig = nuevo;
				nuevo->ant = reco;
				nuevo->sig = NULL;
			}
			else
			{
				Nodo *reco = raiz;
				for (int f = 1; f <= pos - 2; f++)
					reco = reco->sig;
				Nodo *siguiente = reco->sig;
				reco->sig = nuevo;
				nuevo->ant = reco;
				nuevo->sig = siguiente;
				siguiente->ant = nuevo;
			}
	}
}