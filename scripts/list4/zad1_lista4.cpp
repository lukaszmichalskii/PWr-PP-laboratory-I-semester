#include <iostream>
using namespace std;

//zmienne globalne
const unsigned int N=1001, roz=123; //tablica na ktorych numerach indeksu odpowiadaja numery ASCII (roz = 123)
char tekst[N] = {0};
int litery[roz] = {0};

main()
{
	cout<<"Podaj jakis tekst: "; //tekst konczy sie NULL! Pamietac!!! zeby byly same 0 na poczatku, potem podmieniamy
	cin.getline(tekst, roz);

    //wyliczenie wystapien
    for (int i = 0; i<N; i++)
        litery[(int)tekst[i]]++;

	cout<<"\nWystapienie poszczegolnych malych liter w tekscie:\n";
    for(int i = 97; i<123; i++)
        if(litery[i]>0)
            cout<<(char)i<<": "<<litery[i]<<endl;
	
	cout<<"\nWystapienie poszczegolnych duzych liter w podanym tekscie:\n";
    for(int i = 65; i<91; i++)
        if(litery[i]>0)
            cout<<(char)i<<": "<<litery[i]<<endl;
           
	cout<<endl; 
    system("pause");
}


