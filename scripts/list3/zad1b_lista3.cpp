#include <iostream>
#include <iomanip>
using namespace std;


//fibonacci
int fibonacci(int n)
	{
		if (n==0)
			return 0;
		else if (n==1 || n==2)
			return 1;
		else
		{
			int fib;
			fib = fibonacci(n-1) + fibonacci(n-2);
			return fib;
		}	
	}


//silnia
int silnia(int n)
{
	if (n==0 || n==1)
	return 1;
	else
	{
		int pow;
		pow = n*silnia(n-1);
		return pow;
	}
}

//program glowny
main()
{
	const int ROZMIAR=10;
	int D[ROZMIAR][2],tab[ROZMIAR][3];


	for (int i = 0; i<ROZMIAR; i++)
	{
		for (int j = 0; j<2; j++)
		{
			D[i][0] = silnia(i+1);
			D[i][1] = fibonacci(i+1);
		}
	}
	cout<<"n\tSIL FIB\n";
	for (int i=0; i<10; i++)
	{
		for (int j=0; j<3; j+=3)
		{
			cout.width(2);
			cout<<left<<i+1;
			cout.width(9);
			cout<<right<<D[i][j];
			cout.width(4);
			cout<<right<<D[i][j+1];	
		}	
	cout<<"\n";
	}
}
