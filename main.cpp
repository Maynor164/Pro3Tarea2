#include "Evaluador.h"
#include <iostream>

//Trabajo realizado en Grupo con Kevin Lanza
using namespace std;

//Desrefencia ptr (dado) y devuelve su valor
int obtenerValor(int *ptr)
{
//Devolvemos el valor de nuestro apuntador *ptr.   
    return *ptr;
}

//Desreferencia a (dado) y b (dado) y devuelve la suma de ambos
int sumar(int* a, int* b)
{
//Solo retornamos el valor de la suma de nuestros 2 apuntadores *a y *b
    return *a+*b;
}

//Devuelve true si a (dado) y b (dado) apuntan al mismo espacio de memoria
bool compararApuntadores(string *a, string *b)
{
//Comparamos nuestras apuntadores pero aliminamos nuestro * para que apunten al mismo espacio dentro de la memoria
if (a == b)
//Si son iguales retorna verdadero.
return true;
else
//Caso contrario regresara falso.
return false;
}

//Desrefencia a (dado) y b (dado), devuelve true si ambos valores son iguales de lo contrario devuelve false
bool comparar(string *a, string *b)
{
//Comparamos las 2 variables pero ambas como apuntadores para poder saber si son de igual valor.
if (*a == *b)
//Si son iguales retorna verdadero.
    return true;
    else
//Caso contrario regresara falso.
    return false;
}

//Desreferencia a (dado) y devuelve su primera letra
char getPrimeraLetra(string* a)
{
 // Tomando referencia de   http://www.cplusplus.com/reference/string/string/at/
 // y explicacion brindada por Ahmed Castro.
 //Creamos nuestra varible para almacenar el valor y la igualamos a nuestra funcion at
 //que sirve para encontrar la posicion dentro del string en este caso posicion 0 para que muestre la primera.
    char obtener = a->at(0);
//Retornamos el valor almaceenado que seria la primera letra.
    return obtener;

}

//Desreferencia a (dado) y devuelve true si es palindroma de lo contrario devuelve false
//Definicion de palindromo: http://es.wikipedia.org/wiki/Pal%C3%ADndromo
//Ejemplos de palindromos: Ana, arenera, arepera, anilina, ananá, Malayalam, Neuquén, Oruro, oso, radar, reconocer, rotor, salas, seres, somos, sometemos
bool esPalindromo(string* a)
{

  return false;

}

//Desreferencia base (dado) y exponente (dado) y devuelve la base elevado al exponente
int getExponente(int* base, int* exponente)
{
//Creamos nuestras variables una para regresar el valor final y otra para igualarlo a nuestro apuntador *base
    int resultado = 0;
    int numero;
    numero=*base;
//Utilizamos el ciclp for para recorrer todos nuestro programa y que vaya aumentando hasta que encuentre 
//nuestro exponente. 
    for (int i =1; i<(*exponente);i++)
    {
//Aqui realizamos la multiplicacion de nuestra variable con el valor de nuestro apuntador  y lo almacenamos en nuestra variable.
    resultado = (numero)*=(*base);
    }
//Regresamos ya el valor encontrado
    return resultado;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
