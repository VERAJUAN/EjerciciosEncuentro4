
Ejercicio 1:

int var = 40;
int &ref = var;

//Este caso es válido porque ref referencia al valor contenido
en var. 



int &ref = 1;

//Este caso no es válido porque ref debe referenciar al
contenido de otra variable, en este caso referencia a una constante.


int var = 1;
int *ptr;
int &ref = var;
*ptr = ref;

//Este caso no es válido porque no se inicializó *ptr.



---------------------------------------------------------------
