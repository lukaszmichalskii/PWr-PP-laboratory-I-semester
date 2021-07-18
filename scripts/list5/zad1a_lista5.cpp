#include <iostream>
using namespace std;
int main()
{
	const unsigned short int SIZE=101;
	char text[SIZE] = {};
	bool isExists = 0;
	
	cout<<"Enter text: ";
	cin.getline(text, SIZE-1);
	
	//searching for the capital letter in entered string
	for (int i = 0; i<SIZE; i++)
	{
		if (text[i]>='A' && text[i]<='Z')
		{
			isExists = 1;
			break;
		}
		else
			continue;	
	}
	
	if (isExists)
		cout<<"The text contains at least one capital letter\n";
	else 
		cout<<"The text does not contains capital letters\n";
		
		
	system("pause");	
	return 0;
}
