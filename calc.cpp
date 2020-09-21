#include <iostream>
using namespace std;

int main() {
	// Membuat Variabel
	char operatorr;
	float a, b, hasil;
	
	// Header
	cout << "====+ Kalkulator Sederhana +====" << endl << endl;
	
	// Mmasukkan Angka Pertama
	cout << "Masukkan angka pertama 	: ";
	cin >> a;
	
	// Mmasuka operator ( +, -, *, /, % )
	cout << "Masukkan Opertor (+,-,*,/) : ";
	cin >> operatorr;
	
	// Mmasukan Angka Kedua 
	cout << "Masukkan angka kedua   	: ";
	cin >> b;
	
	// Condition Perhitungan if else
	if (operatorr == '+') {
		hasil = a+b;
		
		// Menampilkan Hasil perhitungan
		cout << "Hasil dari "  << a << " " << operatorr << " " << b << " = " << hasil;
	} else if (operatorr == '-') {
		hasil = a-b;
		// Menampilkan Hasil perhitungan
		cout << "Hasil dari "  << a << " " << operatorr << " " << b << " = " << hasil;
	} else if (operatorr == '*') {
		hasil = a*b;
		
		// Menampilkan Hasil perhitungan
		cout << "Hasil dari "  << a << " " << operatorr << " " << b << " = " << hasil;
	} else if (operatorr == '/') {
		hasil = a/b;
		
		// Menampilkan Hasil perhitungan
		cout << "Hasil dari "  << a << " " << operatorr << " " << b << " = " << hasil;
	} else {
		//Menampilkan error
		cout << "Masukkan operasi perhitungan dengan benar ! \nOperasi hitung yang diperbolehkan hanya (+, -, *, /)";
	}
	
	
	
	return 0;
	
}
