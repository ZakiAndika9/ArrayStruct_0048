#include <iostream>
#include <string>
using namespace std;

struct player
{
	string name;
	string id;
	string level;
};

int main()
{
	player p1;

	cout << "Masukkan nama player =";
	getline(cin,p1.name);
	cout << "Masukkan id= ";
	cin >> p1.id;
	cout << "Masukkan level=";
	cin >> p1.level;

	cout << "Tampilkan player " << endl;
	cout << "Nama player " << p1.name << endl;
	cout << "ID player " << p1.id << endl;
	cout << "level player " << p1.level <<endl;
}