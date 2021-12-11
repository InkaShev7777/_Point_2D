#include <iostream>
#include"c_Piont.h"
#include<time.h>
#include<iomanip>
using namespace std;
int main()
{
	int n = 10;
	c_Point* mas = new c_Point[n];
	for (int k = 0;k < n;k++)
	{
		srand(time(0));
		int x, y = 0;
		for (int i = 0;i < n;i++)
		{
			x = rand() % 8;
			y = rand() % 10;
			c_Point c_point(x, y);
			mas[i] = c_point;
			x = rand() % 8;
			y = rand() % 10;
		}
	}
	//sort mas
	for (int i = 0;i < n;i++)
	{
		for (int j = n - 1;j > i;j--)
		{
			if (mas[j - 1].getY() < mas[j].getY())
			{
				c_Point tmp = mas[j - 1];
				mas[j - 1] = mas[j];
				mas[j] = tmp;
			}
		}
	}
	for (int i = 0;i < n;i++)
	{
		if (mas[i].getY() == mas[i + 1].getY())
		{
			if (mas[i].getX() > mas[i + 1].getX())
			{
				cout << setw(mas[i + 1].getX()) << "$" << setw(mas[i].getX() - mas[i + 1].getX()) << "$";
				i++;
			}
			else
			{
				cout << setw(mas[i].getX()) << "$" << setw(mas[i + 1].getX() - mas[i].getX()) << "$";
				i++;
			}
		}
		else
		{
			cout << setw(mas[i].getX()) << "$";
		}
		cout << "\n";
	}
	cout << "\n\n\n";
	for (int i = 0;i < n;i++)
	{
		mas[i].Print();
	}
}

