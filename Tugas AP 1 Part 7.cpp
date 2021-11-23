#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int i, a, opsi, Array[100], input, sort, sort1, sort2;
char yorno, yorno1;

void WelcomeQuest()
{
	system("cls");
	cout << "Selamat Datang! Silahkan masukkan banyak data yang diinginkan : ";
	cin >> input;
	cout << "*Catatan kecil: Setelah mengoperasikan salah satu sort, diharapkan mengisi ulang array kembali" << endl;
}
void MenuSorting()
{
	system("cls");
	cout << "MENU SORTING \n";
	cout << "1. Isi Array \n";
	cout << "2. Insertion Sort \n";
	cout << "3. Maximum Sort \n";
	cout << "4. Bubble Sort \n";
	cout << "5. Keluar \n";
	cout << endl;
	cout << "Pilih operasi yang anda inginkan : ";
	cin >> opsi;
}

void IsiArray()
{
	system("cls");
	for (i = 0; i < input; i++)
	{
		cout << "Masukkan data ke-" << i + 1 << " : ";
		cin >> Array[i];
	}
}

void InsertionSort()
{
	system("cls");
	cout << "Data yang telah diinput : " << endl;
	for (i = 0; i < input; i++)
	{
		cout << Array[i] << " ";
	}
	cout << endl;
	cout << endl;
	for (i = 1; i < input; i++)
	{
		sort = Array[i];
		a = i - 1;
		while (a >= 0 && sort <= Array[a])
		{
			Array[a + 1] = Array[a];
			a = a - 1;
		}
		Array[a + 1] = sort;
	}
	cout << "Data yang sudah di Insertion Sort : " << endl;
	for (i = 0; i < input; i++)
	{
		cout << Array[i] << " ";
	}
}

void MaximumSort()
{
	system("cls");
	int u = input - 1;
	int k, m;
	int maks;

	cout << "Data yang telah diinput : " << endl;
	for (i = 0; i < input; i++)
	{
		cout << Array[i] << " ";
	}
	cout << endl;
	cout << endl;

	for (i = 0; i <= input - 2; i++)
	{
		maks = 0;
		for (k = 1; k <= u; k++)
		{
			if (Array[k] > Array[maks])
			{
				maks = k;
			}
		}
		sort1 = Array[u];
		Array[u] = Array[maks];
		Array[maks] = sort1;
		u--;
	}

	cout << endl;
	cout << "Data setelah di Maximum Sort adalah : " << endl;
	for (i = 0; i < input; i++)
	{
		cout << Array[i] << " ";
	}
}

int BubbleSwitch(int o, int p)
{
	sort2 = Array[p];
	Array[p] = Array[o];
	Array[o] = sort2;
	return sort2;
}

void BubbleSort()
{
	system("cls");
	int q;
	cout << "Data yang telah diinput : \n";
	for (i = 0; i < input; i++)
	{
		cout << Array[i] << " ";
	}
	cout << endl;
	cout << endl;

	for (i = 1; i < input; i++)
	{
		for (q = input - 1; q >= i; q--)
		{
			if (Array[q] < Array[q - 1])
			{
				BubbleSwitch(q, q - 1);
			}
		}
	}

	cout << "Data yang telah di Bubble Sort : \n";
	cout << endl;

	for (i = 0; i < input; i++)
	{
		cout << Array[i] << " ";
	}
}

void ReturnQuest()
{
	cout << "Lanjutkan program? y/n : ";
	cin >> yorno;
}

void Keluar()
{
	system("cls");
	cout << "Yakin ingin keluar dari program? y/n : ";
	cin >> yorno1;
}
int main()
{
	WelcomeQuest();

	do
	{
		MenuSorting();

		if (opsi == 1)
		{
			IsiArray();
		}
		else if (opsi == 2)
		{
			InsertionSort();
		}
		else if (opsi == 3)
		{
			MaximumSort();
		}
		else if (opsi == 4)
		{
			BubbleSort();
		}
		else if (opsi == 5)
		{
			Keluar();
			if (yorno1 == 'y')
			{
				cout << endl;
				cout << "Terima kasih telah menggunakan program ini." << endl;
				break;
			}
			if (yorno1 == 'n')
			{
				continue;
			}
		}
		cout << endl;
		cout << endl;
		
		ReturnQuest();

		if (yorno == 'n')
		{
			cout << endl;
			Keluar();
			if (yorno1 == 'y')
			{
				cout << endl;
				cout << "Terima kasih telah menggunakan program ini." << endl;
				break;
			}
			if (yorno1 == 'n')
			{
				continue;
			}
		}
	} while (yorno == 'y' || yorno1 == 'n');
	
}