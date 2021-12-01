#include <iostream>
#include <string>

using namespace std;

struct Date
{
	int Day;
	string Month[12] = { "Januari", "Februari", "Maret", "April", "Mei", "Juni", "Juli", "Agustus", "September", "Oktober", "November", "Desember" };
	int Year;
};

int main()
{
	int i, tgl, thn;
	string bln;
	char yorno;
	Date hari[12], bulan[12], tahun;



	for (i = 0; i < 12; i++)
	{
		if (i == 0 || i == 2 || i == 4 || i == 6 || i == 7 || i == 9 || i == 11)
		{
			hari[i].Day = 31;
			continue;
		}

		if (i == 3 || i == 5 || i == 8 || i == 10)
		{
			hari[i].Day = 30;
			continue;
		}

		if (i == 1)
		{
			hari[i].Day = 28;
			continue;
		}
	}
	
	do {
		system("cls");
		cout << "Masukkan tanggal: ";
		cin >> tgl;
		cout << "Masukkan bulan: ";
		cin >> bln;
		cout << "Masukkan tahun: ";
		cin >> thn;

		cout << endl;
		cout << "Tanggal yang anda masukkan adalah: " << tgl << " " << bln << " " << thn << endl;
		cout << endl;
		cout << "Sudah benar? y/n: ";
		cin >> yorno;
	} while (yorno == 'n');
	cout << endl;
	cout << endl;

	for (i = 0; i < 12; i++)
	{
		if (tgl == 31 && bln == bulan[i].Month[i] && tgl == hari[i].Day)
		{
			tgl -= 30;
			if (bln == bulan[11].Month[11])
			{
				thn += 1;
				cout << "Kalkulasi NEXTDAY, maka tanggal berubah menjadi : " << tgl << " " << bulan[0].Month[0] << " " << thn << endl;
				break;
			}
			cout << "Kalkulasi NEXTDAY, maka tanggal berubah menjadi : " << tgl << " " << bulan[i + 1].Month[i + 1] << " " << thn << endl;
			break;
		}
		else if (tgl == 30 && bln == bulan[i].Month[i] && tgl == hari[i].Day)
		{
			tgl -= 29;
			cout << "Kalkulasi NEXTDAY, maka tanggal berubah menjadi : " << tgl << " " << bulan[i + 1].Month[i + 1] << " " << thn << endl;
			break;
		}
		else if (tgl == 28 && bln == bulan[1].Month[1] || tgl == 29 && bln == bulan[1].Month[1])
		{
			if (thn % 4 == 0 && tgl == 28)
			{
				tgl += 1;
				cout << "Kalkulasi NEXTDAY, maka tanggal berubah menjadi : " << tgl << " " << bln << " " << thn << endl;
				break;
			}
			if (thn % 4 == 0 && tgl == 29)
			{
				tgl -= 28;
				cout << "Kalkulasi NEXTDAY, maka tanggal berubah menjadi : " << tgl << " " << bulan[2].Month[2] << " " << thn << endl;
				break;
			}
			else
			{
				cout << "Program error, harap restart" << endl;
				break;
			}
			if (tgl == 28)
			{
				tgl -= 27;
				cout << "Kalkulasi NEXTDAY, maka tanggal berubah menjadi : " << tgl << " " << bulan[1 + 1].Month[1 + 1] << " " << thn << endl;
				break;
			}
			
		}
		else if (tgl <= 29)
		{
			tgl += 1;
			cout << "Kalkulasi NEXTDAY, maka tanggal berubah menjadi : " << tgl << " " << bln << " " << thn << endl;
			break;
		}
		else if (tgl >= 30 && bln == "Februari")
		{
			cout << "Program error, harap restart." << endl;
			break;
		} 
		else if (tgl >= 31 && bln == "April" || tgl >= 31 && bln == "Juni" || tgl >= 31 && bln == "September" || tgl >= 31 && bln == "November")
		{
			cout << "Program erorr, harap restart." << endl;
			break;
		}
	} 
}