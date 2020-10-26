#include <iostream>

using namespace std;

int main (){
	
	int ub, ui, ua1, ua2, tb, ti, ta1, ta2;
	
	
	cout<< "Umur Ayah	: "; cin >> ub;
	cout<< "Umur Ibu	: "; cin >> ui;
	cout<< "Umur Anak 1	: "; cin >> ua1;
	cout<< "Umur Anak 2	: "; cin >> ua2;cin.ignore();
	
	if ( ub > 20 ){ tb = 30000;}
	else if (ub > 12){tb = 20000;}
	else {tb = 15000;}
	
	if ( ui > 20 ){ ti = 30000;}
	else if (ui > 12){ti = 20000;}
	else {ti = 15000;}
	
	if ( ua1 > 20 ){ ta1 = 30000;}
	else if (ua1 > 12){ta1 = 20000;}
	else {ta1 = 15000;}
	
	if ( ua2 > 20 ){ ta2 = 30000;}
	else if (ua2 > 12){ta2 = 20000;}
	else {ta2 = 15000;}
	
	cout<< "Tagihan satu bulan adalah RP. " << (tb+ti+ta1+ta2)*30<< endl;
	
	cin.get();
	return 0;

}
