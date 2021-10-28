#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	string star = "* ";
	int i, a, o, input;
	cout << "Masukkan berapa baris bintang yang anda inginkan = ";
	cin >> input;
	for (i = 1; i <= input; i++)
	{
		for (a = 1; a <= 2 * (input - i); a++)
		{
		}
			for (o = i; o >= 1; o--)
			{
				cout << star;
			}
			
			cout << "" << endl;
	}
}
