#include <conio.h>
#include <iostream>
using namespace std;

 main()
	 {
		int  b,a;
		int i;
		int potencia=1;

		cout<<"Ingresar la exponente:  ";
		cin>>b;
		cout << endl;
		cout<<"Ingresar el base:  ";
		cin>>a;
		cout << endl;
		for (i=1; i <= b; i++)
			{
				potencia = potencia * a;
			}
		cout<<potencia;
	}
