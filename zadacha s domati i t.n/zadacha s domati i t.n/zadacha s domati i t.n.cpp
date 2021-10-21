#include <iostream>
using namespace std;

int main()
{
	int tomato = 0;
	int pepper = 0;
	int carrot = 0;
	int olive = 0;
	int potato = 0;
	int flavours = 0;


	cout << "Traicho is hungry!";
	cout << "How many tomatoes does he need? " << endl;
	cin >> tomato;
	cout << "How many peppers does he need?" << endl;
	cin >> pepper;
	cout << "How many carrots does he need?" << endl;
	cin >> carrot;
	cout << "How many olives does he need?" << endl;
	cin >> olive;
	cout << "How many potatoes does he need?"<< endl;
	cin >> potato;
	cout << "How many flavous does he need?" << endl;
	cin >> flavours;


	bool Salad = tomato >= 1 && pepper >= 2 && carrot >= 4 && olive >= 3 && potato >= 3 && flavours >= 150;
	bool Soup = tomato >= 2 && pepper >= 3 && carrot >= 5 && olive >= 6 && potato >= 10 && flavours >= 200;
	bool Giuvech = tomato >= 5 && pepper >= 6 && carrot >= 12 && olive >= 7 && potato >= 12 && flavours >= 300;


	if (Giuvech)
	{
		cout << "Traicho will have a student giuvech, damn!" << endl;
		cout << "A friend will also come help him!" << endl;
	}
	else if (Soup)
	{
		cout << "Traicho will have an amaizing student soup, damn!" << endl;
		cout << "A friend will also come help him!" << endl;
	}
	else if (Salad)
	{
		cout << "Traicho will have a student salad, damn!" << endl;
	}
	else
	{
		cout << "Game over for Traicho's stomach!" << endl;
	}



	return 0;

}
