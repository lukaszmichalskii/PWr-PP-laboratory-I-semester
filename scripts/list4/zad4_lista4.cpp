#include<iostream>
using namespace std;

//deklaracja funkcji 
void sortowanieSzybkie(int, int);
void prezentacjaTablicy();

//zmienne globalne
int *tab, N, w;

//sortowanie szybkie program glowny
main()
{
	cout<<"SORTOWANIE SZYBKIE\n";
	
	cout<<"Ile danych chcesz posortowac? ";
	cin>>N;
	tab = new int [N];
	
	//wczytywanie danych do tablicy
	cout<<"Wprowadz dane do tablicy: ";
	for (int i = 0; i<N; i++)
	{
		cout<<"T["<<i+1<<"] = ";
		cin>>w;
		tab[i] = w;
	}
	cout<<endl;
	
	//wyswietlenie tablicy przed sortowaniem
	prezentacjaTablicy();
	cout<<endl<<endl;
	
	//sortowanie tablicy	
	sortowanieSzybkie(0, N-1);
	
	//wyswielenie tablicy posortowanej
	prezentacjaTablicy();
	cout<<endl<<endl;
	
	delete [] tab;
	system("pause");
}


/*SZYBKIE SORTOWANIE, algorytm Hoare’a
1.Krok: Dzielimy na pol, oznaczamy srodek.
2.Krok: Na lewo mniejsze, na prawo wieksze.
3.Krok: Dzielmy na kolejne podtablice i powtarzamy algorytm (rekurencja).
*/
void sortowanieSzybkie(int l, int p)
{
	int x, y, srodek;
	x = (l+p)/2;
	srodek = tab[x];
	tab[x] = tab[p];
	
	for (y = x = l; x<p; x++)
		if (tab[x]<srodek)
		{
			//zmienna do podmiany
			int krzeslo;
			krzeslo = tab[x];
			tab[x] = tab[y];
			tab[y] = krzeslo;
			y++;
		}
		
		tab[p] = tab[y];
		tab[y] = srodek;
		
		//sprawdzenie z liczba przed srodkowa (lewy <? liczba -> srodek)
		if (l<y-1)
			sortowanieSzybkie(l, y);
		//sprawdzenie z liczba po srodkowej (srodek -> liczba <? prawej)
		if (y+1<p)
			sortowanieSzybkie(y+1, p);
}

//wyswietlenie zawartosci tablicy
void prezentacjaTablicy()
{
	cout<<"Tablica: ";
	for(int i=0;i<N;i++)
	    cout<<tab[i]<<" ";
}


