#include <iostream>

using namespace std;

int main() {
	
	int plh, a, b, x=0, y=1;
	
	cout<< "Perkalian & Perpangkatan ===============" << endl;
	cout<< "" << endl;
	cout<< "1. Perkalian " << endl;
	cout<< "2. Perpangkatan " << endl;
	cout<< "" << endl;
	cout<< "Pilih : ";cin >> plh;cin.ignore();
	if (plh == 1 || plh == 2){
	cout<< "- Input angka A : "; cin >> a;
	cout<< "- Input angka B : "; cin >> b;  cin.ignore();
	cout<< "" << endl;
	
	switch (plh) {
		case 1 : 
			cout<< "Hasil "<< a<< " x "<< b << endl;
			for (int i = 1; i < a; i++) {
				cout<< b<< " + ";} cout<< b<< " = "; 
			for (int i = 1; i <= a; i++){
				x = x + b;} cout<< x << endl;
			break;
			
		case 2 : 
			cout<< "Hasil "<< a<< " ^ "<< b << endl;
			for (int i = 1; i < b; i++) {
				cout<< a<< " x ";} cout<< a<< " = "; 
			for (int i = 1; i <= b; i++){
				y = y * a;} cout<< y << endl;
			break;
	}} else {cout<<""<<endl; cout<< "Input yang anda masukkan salah"<< endl;}
	
	cout<<""<<endl;
	cout<<"maacihh..."<< endl;
	cin.get();
	return 0;
}
