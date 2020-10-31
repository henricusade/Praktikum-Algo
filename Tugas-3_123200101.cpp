#include <iostream>

using namespace std;

int main(){
	
	string name;
	int pass, plh, nh, nut, nua;
	float x=3, hsl;
	
	cout<< "=====Login Akun====="<< endl;
	cout<< "Username = "; cin>> name;
	cout<< "Password = "; cin>> pass;cin.ignore();
	cout<< "===================="<< endl;
	if (name == "henricus" && pass == 2103 ){cout<< "Login Berhasil"<< endl;}
	else { 
		if (name == "henricus"){cout<< "Password yang anda masukkan salah"<<endl;}
		else if (pass == 2103){cout<<"Username yang anda masukkan salah"<< endl;}
		else {cout<< "Username dan Password yang anda masukkan salah"<< endl;}cin.get(); return 0;}
	cout<< ""<< endl;
	cout<< "Input Nilai Mata Kuliah"<< endl;
	cout<< "1. Algoritma dan Pemrograman"<< endl;
	cout<< "2. Kalkulus"<< endl;
	cout<< "Pilih : "; cin>> plh;
	if (plh == 1 || plh == 2){
	cout<< "Nilai Harian 	: "; cin>> nh;
	cout<< "Nilai UTS 	: "; cin>> nut;
	cout<< "Nilai UAS 	: "; cin>> nua;
	hsl = (nh+nut+nua)/x;
	cout<< ""<< endl;
	
	switch (plh){
		
		case 1:
			if (hsl >= 80){cout<< "Selamat anda lulus Algoritma dan Pemrograman dengan nilai "<< hsl<< endl;}
			else {cout<< "Anda tidak lulus Algoritma dan Pemrograman dengan nilai "<< hsl<< endl;}
			break;
			
		case 2:
			if (hsl >= 80){cout<< "Selamat anda lulus Kalkulus dengan nilai "<< hsl<< endl;}
			else {cout<< "Anda tidak lulus Kalkulus dengan nilai "<< hsl<< endl;}
			break;
		}}else {
			cout<<""<<endl;
			cout<< "Input anda salah"<< endl;}
	cin.ignore();		
	cin.get();
	return 0;
}
