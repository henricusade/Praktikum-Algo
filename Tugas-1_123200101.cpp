#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main(){
	
	char nama [50];
	int nim, uts, uas;
	
	cout<< "NAMA	: ";
	gets(nama);
	cout<< "NIM	: ";
	cin>> nim;
	cout<< "UTS	: ";
	cin>> uts;
	cout<< "UAS	: ";
	cin>> uas;
	
	cout<<""<< endl;
	cout<<"Hai, nama saya "<< nama << ", nim "<< nim << endl;
	cout<<"Nilai akhir saya "<< (uts+uas)/2<<endl;
	
	getch();
}
