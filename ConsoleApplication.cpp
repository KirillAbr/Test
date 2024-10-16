#include <iostream>
#include "windows.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x;
	cout << "Введіть номер дня тижня : ";
	cin >> x;
	switch (x)
	{
	case 1: cout << "Понеділок"; break;
	case 2: cout << "Вівторок"; break;
	case 3: cout << "Середа"; break;
	case 4: cout << "Четвер"; break;
	case 5: cout << "П'ятниця"; break;
	case 6: cout << "Субота"; break;
	case 7: cout << "Неділя"; break;
	}
}
