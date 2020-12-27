#include <iostream>

using namespace std;

int main(){
	
	int x, max, min, selisih;
	float rata, jumlah=0;
	
	cout<< "Masukkan banyak angka : "; cin>> x;
	int angka[x];
	for(int i=0; i<x ;i++){
		cout<< "Angka ke-"<< i+1<< " : ";cin>> angka[i] ;
		jumlah += angka[i];}
	
	cout<< "\n\n_____Hasil_____\nDeret		: ";
	for(int j=0; j<x ;j++){
		cout<< angka[j]<<" ";}
		
	max = angka[0]; min = angka[0];
	for(int k = 0; k < x; k++) {
	if (max < angka[k]){max = angka[k];}
    else if (angka[k] < min){ min = angka[k];}}
	cout << "\nMaksimum	: "<< max;
	cout << "\nMinimum		: "<< min;
	
	rata = jumlah/x;
	cout << "\nRata-rata	: "<< rata;
	
	selisih = 0;
	for (int l = 0; l< x-1; l++){
		if (abs(angka[l]-angka[l+1]) > selisih){
			selisih = abs(angka[l]-angka[l+1]);}}
	cout<< "\nSelisih Max	: "<< selisih;
	
	cin.get();
	return 0;
}
