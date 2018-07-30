#include<iostream>
#include<conio.h>
using namespace std;

void CompressString(char[]);

void main()
{
	const int SIZE = 80;
	char String[SIZE] = { 0 };

	cout << "Enter Values In A String:- ";
	cin.getline(String, SIZE, '\n');
	CompressString(String);

	_getch();
}

void CompressString(char String[])
{
	int Temp = 0;
	int i = 0;
	int k = 0;
	while (String[i] != '\0')
	{
		if (String[i] == String[i + 1])
		{
			Temp = i + 1;
			for (i; String[i] == String[i + 1]; i++);
			k = i + 1;
			i = Temp;
			while (String[k] != '\0')
			{
				String[Temp] = String[k];
				k++;
				Temp++;
			}
			String[Temp] = '\0';
		}
		else
			i++;
	}
	cout << "Compressed String:- " << String << endl;
}