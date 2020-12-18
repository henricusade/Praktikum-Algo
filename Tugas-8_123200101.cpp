#include <iostream>

using namespace std;

	int x;
	float r, t, hasil, phi= 3.14;
	char ulang = 'y';

float ll(){
	hasil = phi*r*r;
	return hasil;
}

float kl(){
	hasil = phi*2*r;
	return hasil;
}

float vl(){
	hasil = phi*r*r*t;
	return hasil;
}

int main (){
	
	while (ulang == 'y')
	{
	cout<<"Hitung Lingkaran ============="<<endl;
	cout<<"1. Luas Lingkaran "<<endl;
	cout<<"2. Keliling Lingkaran"<<endl;
	cout<<"3. Volume Tabung"<<endl;
	cout<<"Pilih : "; cin >> x;
	if (x >= 1 && x <=3){
	switch (x){
		
		case 1:
			cout<<"Jari - jari	: "; cin >> r;
			cout<<"Luas Lingkaran adalah "<< ll();
		break;
		
		case 2:
			cout<<"Jari - jari	: "; cin >> r;
			cout<<"Keliling Lingkaran adalah "<< kl();
		break;
		
		case 3:
			cout<<"Jari - jari	: "; cin >> r;
			cout<<"Tingi		: "; cin >> t;
			cout<<"Volume Tabung adalah "<< vl();
		break;
		
	}}
	else {cout<< "Input Salah :) ";}
	cout << "\nUlangi program ? (y/n) ";cin >> ulang; cin.ignore();	
	cout<< endl;}
	cout<< "Progam selesai, Terimakasih :) ";
	cin.get();
	return 0;
}
