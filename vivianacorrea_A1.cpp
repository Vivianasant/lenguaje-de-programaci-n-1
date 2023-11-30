/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main() //"main"se utiliza para iniciar el programa//
{
    int edad = 0; //declaramos la variable como "edad"//
    cout<<"ingrese su edad:"; //"cout"es un operador donde podemos ingresar un dato//
    cin >> edad; //"cin"sirve para ingresar un dato por medio de teclado//
    if(edad>=18) //"if" sirve para saber si es verdadero, si es mayor a 18 años nos arrojara un texto que es "mayor de edad"//
    {
        cout<<"Es Mayor de Edad";
    }
    else //"else" es para declarar que si es menor a 18, este nos arroje un texto "menor de edad"// 
    {
        cout<<"Es Menor de edad";
    }
    return 0;
}
