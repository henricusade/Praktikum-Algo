#include <iostream>

using namespace std;

int main(){
	
	int p,l,x, pilihan;
	
	cout<< "======== Gambar Bangun Datar ===========";
	cout<< "\n1. Kotak Bolong"<< "\n2. Segitiga"<< "\nPilih : ";
	cin>> pilihan;
	
	switch (pilihan){
		
		case 1 :
	cout<< "\npanjang : "; cin>> p;
	cout<< "lebar : "; cin>> l;
	
	for (int i=1; i<=p; i++){
		if (i==1 || i==p){
			for (int j=1; j<=l;j++){
				cout<< "* ";}}
		else {
		for (int k=1; k<=l;k++){
			if (k==1 || k==l){
				cout<< "* ";}
				else {
					cout<< "  ";}}}
		cout<<endl;}
		break;
		
		case 2 :
		cout<< "\ntinggi : "; cin>> x;
	for (int i=1; i<= x; i++){
		cout<< i<< " ";
		int p=i;
		for (int j=1; j<i; j++){
			p= p+(x-j);
			cout<< p<< " ";}
		cout<< endl;}
		break;
	default : cout<< "\nInput Anda Salah!!"<< endl;
}
	cin.get();
	return 0;
} 
