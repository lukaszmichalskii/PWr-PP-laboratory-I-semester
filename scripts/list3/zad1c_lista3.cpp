#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

//zmienne global
const int ROZMIAR = 10;
float x,A[ROZMIAR],B[ROZMIAR],C[ROZMIAR];	
int los;

//tablica A
float wypelnijA()
	{
		cout<<"Wprowadz liczby do tablicy A\n"<<endl;
		for (int i = 0; i < ROZMIAR; i++)
		{	
			cout<<"liczba na miejscu: ["<<i+1<<"] = ";
			cin>>x;
			A[i]=x;
		}
	}
	
//tablica B
int wypelnijB()
	{
		srand(time(NULL));
		for (int i = 0; i<ROZMIAR; i++)
		{
			los = rand()%100+1;
			B[i]=los;
		}
	}
	
//tablica C
float wypelnijC()
	{
		for (int i = 0; i<ROZMIAR; i++)
			C[i]=A[i]*B[i];
	}	
	
//wyswietlanie wynikow
void prezentujWyniki()
	{
		cout<<"\nZawartosc tablicy A:\n";
		for (int j=0; j<ROZMIAR; j++)
			cout<<"A["<<j+1<<"] = "<<A[j]<<endl;	
		cout<<"____________________\n\nZawartosc tablicy B:\n";
		for (int i = 0; i<ROZMIAR; i++)
			cout<<"B["<<i+1<<"] = "<<B[i]<<endl;
		cout<<"____________________\n\nZawartosc tablicy C:\n";
		for (int i = 0; i<ROZMIAR; i++)
			cout<<"C["<<i+1<<"] = "<<C[i]<<endl;
	}	


//program glowny
main()
{		 	
	wypelnijA();
	wypelnijB();
	wypelnijC();
	prezentujWyniki();
}
