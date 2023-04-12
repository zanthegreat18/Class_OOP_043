#include <iostream>
using namespace std;

class mahasiswa {

private:
	int nim;
	string nama;
public :
	void inputdata() {
		cout << "Masukan NIM : ";
		cin >> nim;
		cout << "Masukan Nama : ";
		cin >> nama;
	}
	void tampildata() {
		cout << "\nNIM : " << nim << endl;
		cout << "Nama : " << nama << endl;
	}
};

class Matakuliah {
private:
	string kode;
	string namamk;
	int sks;

public:
	void InputMK();
	void TampilMK();

};


void Matakuliah::InputMK() {
	cout << "\nMasukkan kode mata kuliah : ";
	cin >> kode;
	cout << "Masukan Nama Mata Kuliah : ";
	cin >> namamk;
	cout << "Masukan Sks Mata Kuliah : ";
	cin >> sks;

};

void Matakuliah::TampilMK() {
	cout << "nKode : " << kode << endl;
	cout << "Nama Matakuliah : " << namamk << endl;
	cout << "jumlah SKS : " << sks << endl;
}

int main()
{
	mahasiswa mhs;
	Matakuliah mk;

	mhs.inputdata();
	mhs.tampildata();

	mk.InputMK();
	mk.TampilMK();

}