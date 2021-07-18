#include <iostream>
using namespace std;
int main()
{
	const unsigned short int SIZE=101;
	char text[SIZE], x;

	
	cout<<"Enter text to encrypt: ";
	cin.getline(text, SIZE-1);
	
	//display the array before changes
	cout<<"Text before encrypting: ";
	for (int i = 0; text[i]; i++)
		cout<<text[i];
	
	//loop in which encryption takes place
	for (int i = 0; text[i]; i++)
	{
		if ((text[i]>='a' && text[i]<'z') || (text[i]>='A' && text[i]<'Z'))
			text[i] = (char)((int)text[i] + 1);
		else if (text[i]=='z')	
			text[i] = (char)((int)text[i] - 57);
		else if (text[i]=='Z')
			text[i] = (char)((int)text[i] + 7);
		else 
			continue;
	}
	
	//presentation of the contents of array after changes
	cout<<"\nText after encrypting: ";
	for (int i = 0; text[i]; i++)
		cout<<text[i];
		
	cout<<"\n";
	system("pause");
	return 0;
}
