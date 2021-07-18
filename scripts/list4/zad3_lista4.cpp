#include <iostream>
using namespace std;

//deklaracja funkcji
void prezentacjaTablicy();
void sortowanieBabelkowe(double tablica[]);

//zmienne globalne
int N;
double *tab, x;

//sortowanie babelkowe program glowny
main()
{
	cout<<"SORTOWANIE BABELKOWE\n";
	cout<<"Ile danych chcesz posortowac? ";
	cin>>N;
	tab = new double [N];
	
	//wczytywanie danych do tablicy
	cout<<"Wprowadz dane do tablicy: ";
	for (int i = 0; i<N; i++)
	{
		cout<<"T["<<i+1<<"] = ";
		cin>>x;
		tab[i] = x;
	}
	cout<<endl;
	
	//wyswietlenie tablicy przed sortowaniem
	prezentacjaTablicy();
	cout<<endl<<endl;
	
	//sortowanie tablicy 
	sortowanieBabelkowe(tab);
	
	//wyswietlenie posortowanej tablicy
	prezentacjaTablicy();
	cout<<endl<<endl;
	
	delete [] tab;
	
	system("pause");
}

void sortowanieBabelkowe(double tablica[])
{
    double tmp;

    for(int i = 0; i<N-1; i++)
	{
	    for(int j = 0; j<N-1; j++)
	    	if(tablica[j] > tablica[j+1])
			{
				tmp=tablica[j];
				tablica[j]=tab[j+1];
				tablica[j+1]=tmp;
			}
	}
}

//wyswietlenie tablicy
void prezentacjaTablicy()
{
	cout<<"Tablica: ";
	for (int i = 0; i<N; i++)
		cout<<tab[i]<<"  ";
}




