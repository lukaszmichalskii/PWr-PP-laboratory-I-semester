#include <iostream>

using namespace std;
int main()
{
	int a;
	char c;
	cout<<"Enter length of triangle A = ";
	cin>>a;
	cout<<"Enter character from which program will create triangle: ";
	cin>>c;
	for (int i=a; i>0; i--)
	{
		for (int j=i; j<=a; j++)
		cout<<c;	
		cout<<endl;		
	}

	return 0;
}
