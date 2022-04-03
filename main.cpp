#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	string liczby;
	int x;
	while (getline(cin, liczby))
	{
		for (int i = 0; i < liczby.length(); i++)
		{
			if (liczby[i] == '<')
			{
				x = 1;
			}
			if (liczby[i] == '>')
			{
				x = 0;
			}
			if (x == 1)
			{
				liczby[i] = toupper(liczby[i]);
			}
		}
		cout << liczby << endl;
	}
}

//https://pl.spoj.com/problems/JHTMLLET/
