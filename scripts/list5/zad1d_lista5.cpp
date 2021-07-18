#include <iostream>
using namespace std;
int main()
{
	const unsigned short int SIZE=101;
	char text[SIZE];
	
	//entering text
	cout<<"Enter text: ";
	cin.getline(text, SIZE-1);
	
	//display the array before changes
	cout<<"Text before some changes: ";
	for (int i = 0; text[i]; i++)
		cout<<text[i];
	
	//change (if first char is lowercase letter) to capital
	if (text[0]>='a' && text[0]<='z')
		text[0] = (char((int)text[0] - 32));
		
	
	//loop in whitch process of analyze entered text starting (starting from second character because first has been already set)	
	for (int i = 1; text[i]; i++)
	{	
		//Capital letters in the middle of sentence change to lowercase
		if (text[i]!=' ' && text[i]>='A' && text[i]<='Z' && text[i-1]!=' ') 
		{
			text[i]=(char)((int)text[i] + 32);
			continue;
		}
		//replace the lowercase letter to capital if it is begining of new word (when program come across to 'space' it means - start new word)
		else if (text[i]==' ' && text[i+1]>='a' && text[i+1]<='z')
		{
			text[i+1] = (char)((int)text[i+1] - 32);
			continue;
		}
		//in the other cases move to next position in array
		else
			continue;			
	}
	
	//presentation of the contents of array after changes
	cout<<"\nText after some changes: ";
	for (int i = 0; text[i]; i++)
		cout<<text[i];
	
	cout<<"\n";
	system("pause");
	return 0;
}
