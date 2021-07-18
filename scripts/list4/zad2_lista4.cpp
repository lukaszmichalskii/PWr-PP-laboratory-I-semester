#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void szukanie(int);

//zmienne globalne
int conv, poz=-1, i=0, N;
char *tab, x;

//szukanie elementu rekurencyjnie program glowny
main()
{
	cout<<"Podaj ilosc znakow do wygenerowania: ";
	cin>>N;
	tab = new char [N];
	
	//wypelnienie tablicy losowymi (malymi) literami
	srand(time(NULL));
	for (int i = 0; i<N; i++)
	{
		conv = (rand()%26) + 97;
		tab[i] = (char)conv;
	}
	
	//wyswietlenie tablicy
	cout<<"Zawartosc tablicy: ";
	for (int i = 0; i<N; i++)
		cout<<tab[i]<<" ";
		
	cout<<"\nPodaj litere ktora mam znalezc: ";
	cin>>x;
	
	szukanie((int)x);
	
	if (poz != -1)
		cout<<"Znak "<<(char)x<<" wystepuje w tablicy na miejscu "<<poz+1;
	else 
		cout<<"Znak "<<(char)x<<" nie wystepuje w tablicy";
		
	cout<<endl<<endl;
	system("pause");
	
	delete [] tab;
	
}
void szukanie(int x)
{
	while (i<N)
	{
		if ((int)x!=(int)tab[i])
		{
			i++;
			szukanie(x);
		}
		else
		{
			poz = i;
			break;
		}	
	}
}
