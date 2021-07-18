#include <iostream>
using namespace std;
int main()
{
	const unsigned short int SIZE=101;
	char text[SIZE];
	int numbers = 0, letters = 0, otherCharacters = 0;
	
	cout<<"Enter text: ";
	cin.getline(text, SIZE-1);
	
	//loop that counts the occurrences of characters 
	for (int i = 0; text[i]; i++)
	{
		if ((text[i]>='A' && text[i]<='Z') || (text[i]>='a' && text[i]<='z'))
			letters++;
		else if ((int)text[i]>=48 && (int)text[i]<=57)
			numbers++;
		else 
			otherCharacters++;
	}
	
	cout<<"Number of apperance of digit in text: "<<numbers<<endl;
	cout<<"Number of apperance of letters in text: "<<letters<<endl;
	cout<<"Number of apperance of other characters in text: "<<otherCharacters<<endl;
	
	system("pause");
	return 0;
}
