#include <iostream>
using namespace std;

int nTelor, nMie, nAir;
int hTelor = 2000, hMie = 2000, hAir = 3000;

string nama;

void input() { // prosedur input
	
	cout << "Masukan Nama = ";
	cin >> nama;
	cout << "Masukan jumlah telor = ";
	cin >> nTelor;
	cout << "Masukan jumlah mie = ";
	cin >> nMie;
	cout << "Masukan jumlah air mineral = ";
	cin >> nAir;

}

int hitungHarga() {
	return (nTelor * hTelor) + (nMie * hMie) + (nAir * hAir);
}

void display() {
	cout << "Nama = " << nama << endl;
	cout << "Jumlah Telor = " << nTelor << endl;
	cout << "Jumlah Mie = " << nMie << endl;
	cout << "Jumlah Air = " << nAir << endl;
	cout << "Total Harga Rp. " << hitungHarga() << endl;
}

int main() {
	
	char pilihan;
	do {
		input();
		display();
		cout << "Apakah anda ingin mengulangi (y/n)?"; 
		cin >> pilihan;
		system("cls");
	} while (pilihan == 'y' || pilihan == 'Y');
}