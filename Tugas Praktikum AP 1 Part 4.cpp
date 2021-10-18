#include <iostream>
#include <string>
#include <cmath>

using namespace std;

//Data Pelanggan Yang Terdapat Di Database Bank
int saldo = 56000000;
int pin_cust = 271002;

int penarikan(int saldo, int amount)
{
	int tarik = saldo - amount;
	return tarik;
}

int tambah_saldo(int saldo, int amount1)
{
	int tambah = saldo + amount1;
	return tambah;
}

void closing() {
	cout << "                                        _________________________________________ \n";
	cout << "                                       |                                         | \n";
	cout << "                                       | Terima Kasih Telah Menggunakan ATM ini  | \n";
	cout << "                                       |    Silahkan Ambil Kembali Kartu Anda    | \n";
	cout << "                                       |_________________________________________| \n";
}

void closingan() {
	cout << closing << endl;
}

int main()
{
	
	cout << "                                          _________________________________ \n";
	cout << "                                         |                                 | \n";
	cout << "                                         |Selamat Datang di ATM Bank Pintar| \n";
	cout << "                                         |_________________________________| \n";
	cout << " " << endl;

	int input, amount, narik, nambah, amount1, pin;

	do {
		cout << "                                            Masukkan 6 digit pin anda = ";
		cin >> pin;
		if (pin == pin_cust)
		{
			cout << " " << endl;
			cout << "                                          Please wait" << endl;

			int loading = 1;
			while (loading <= 3)
			{
				cout << "Loading..." << endl;
				loading += 1;
			}
		}
		else
		{
			cout << "                                 Pin yang anda masukkan salah, silahkan coba lagi." << endl;
		}
	} while (pin != pin_cust);
	
	do {
		system("cls");
		cout << " " << endl;
		cout << "                                              Menu ATM Bank Pintar \n";
		cout << "                                           1. Cek Saldo" << endl;
		cout << "                                           2. Penarikan" << endl;
		cout << "                                           3. Penambahan(Isi saldo)" << endl;
		cout << "                                           4. Keluar" << endl;
		cout << "                                              Pilih menu berikut = ";
		cin >> input;
		cout << " " << endl;
	} while (input > 4);

	if (input == 1) 
	{
		cout << "                                             Saldo anda sebesar = Rp." << saldo << endl;
		cout << " " << endl;
		closing();
	}
	else if (input == 2)
	{
		do {
			cout << "                                         Masukkan jumlah uang yang ingin anda tarik(Maks 10 digit) = Rp.";
			cin >> amount;


			if (amount <= saldo) {
				narik = penarikan(saldo, amount);
				int loading1 = 1;
				cout << "                                     Saldo anda akan berkurang sebesar = Rp." << amount << endl;
				cout << "                                     Mohon tunggu sebentar" << endl;
				while (loading1 <= 3)
				{
					cout << "." << endl;
					loading1 += 1;
				}
				cout << "                                     Sisa saldo anda sebesar = Rp." << narik << endl;
				cout << " " << endl;
				closing();
			}
			else {
				cout << "                                     Mohon maaf, saldo anda tidak mencukupi. Silahkan coba lagi." << endl;
			}
		} while (amount >= saldo);
	}
	else if (input == 3)     
	{

		cout << "                                             Masukkan uang anda = Rp.";
		cin >> amount1;
		cout << " " << endl;

		nambah = tambah_saldo(saldo, amount1);

		cout << "                                            Uang yang anda masukkan sebesar = Rp." << amount1 << endl;
		cout << "                                            Maka saldo anda sebesar = Rp." << nambah << endl;
		cout << " " << endl;
		closing();
	}
	else if (input == 4)
	{
		system("cls");
		closing();
	}

	cin.get();
	return 0;
}
