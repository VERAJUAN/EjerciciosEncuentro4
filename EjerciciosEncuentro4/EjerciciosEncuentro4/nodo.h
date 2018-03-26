#ifndef NODO
#define NODO

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


#endif // !NODO
