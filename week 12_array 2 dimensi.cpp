#include <iostream>
using namespace std;

main(){
	
	cout << "***************************************************" << endl;
	cout << "** Programmer\t: Dhaffa Noflian                 **" << endl;
	cout << "** Nim\t\t: 22343041                       **" << endl; 
	cout << "** Makul\t: Praktikum Algoritma Pemograman **" << endl;
	cout << "***************************************************" << endl << endl;
	
	//Array 2 dimensi
	int i, y;
	char kalimat[2][50] = {{"Program Array 2 Dimensi"},{"Seperti Ini"}};	
	double angka[2][3] = {{1.5, 2.5, 3.5},{4.5, 5.5, 6.5}};	
		//for untuk variable kalimat
		for (i=0; i<2; i++){
			cout << kalimat[i] << endl << endl;
			}	
		//for untuk variable angka
		for (i=0; i<2; i++){
			for (y=0; y<3; y++){
				cout << "Indeks ke ["<<i<<"]["<<y<<"] adalah = " << angka[i][y] << endl;
			}
		}
	
	return 0;	
}
