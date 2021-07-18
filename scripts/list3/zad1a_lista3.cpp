#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;


main()
{	
	const int ROZMIAR = 10;
	float x,A[ROZMIAR],B[ROZMIAR],C[ROZMIAR];	
	int los;	 	
	
	//tabica A	
	cout<<"Wprowadz liczby do tablicy A\n"<<endl;
	for (int i = 0; i < ROZMIAR; i++)
	{	
		cout<<"liczba na miejscu: ["<<i+1<<"] = ";
		cin>>x;
		A[i]=x;
	}
	cout<<"\nZawartosc tablicy A:\n";
	for (int j=0; j<ROZMIAR; j++)
		cout<<"A["<<j+1<<"] = "<<A[j]<<endl;
		
		
	//tablica B	
	cout<<"____________________\n\nZawartosc tablicy B:\n";
	srand(time(NULL));
	for (int i = 0; i<ROZMIAR; i++)
	{
		los = rand()%100+1;
		B[i]=los;
		cout<<"tB["<<i+1<<"] = "<<B[i]<<endl;
	}
	
	
	//tablica C
	cout<<"____________________\n\nZawartosc tablicy C:\n";
	for (int i = 0; i<ROZMIAR; i++)
	{
		C[i]=A[i]*B[i];
		cout<<"C["<<i+1<<"] = "<<C[i]<<endl;
	}
}
	

