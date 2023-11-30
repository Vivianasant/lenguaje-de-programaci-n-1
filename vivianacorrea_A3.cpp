/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    string nombre ="" ; //asignamos la variable//
    string Apellido_Paterno ="" ;
    string vocal ="";
    string Apellido_Materno ="" ;
    string Dia ="" ;
    string Mes ="" ;
    string Anio ="" ;
    string RFC ="" ;
    
    cout<<"CALCULADORA DE RFC"<<"\n";
    cout<<"utilizar solo mayusculas"<<"\n""\n";

    
    cout<<"Introduce tu nombre: ";
    cin>>nombre;
    cout<<"Introduce tu Apellido Paterno: ";
    cin>>Apellido_Paterno;
    cout<<"Introduce tu Apellido Materno: ";
    cin>>Apellido_Materno;
    
    cout<<"INGRESA TU FECHA DE NACIMIENTO (solo numeros DD/MM/AAAA)"<<"\n";
    cout<<"DIA ";
    cin>>Dia;
    cout<<"MES ";
    cin>>Mes;
    cout<<"AÑO ";
    cin>>Anio;
    
    RFC = Apellido_Paterno.substr(0,1);

    for(int i=1; i<Apellido_Paterno.length();++i){
        char letra = Apellido_Paterno[i];
        if(letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
        vocal+=letra;
        break;
        }
    }
    RFC= RFC+vocal;
    RFC=RFC+Apellido_Materno.substr(0,1);
    RFC=RFC+nombre.substr(0,1);
    RFC=RFC+Anio.substr(2,2);
    RFC=RFC+Mes;
    RFC=RFC+Dia;
    cout<<"TU RFC SIN HOMOCLAVE ES: "<<RFC<<"\n";

    return 0;
}