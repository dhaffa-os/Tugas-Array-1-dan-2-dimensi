#include <iostream>
using namespace std;

int main(){
	
	cout << "*********************************************" << endl;
	cout << "** Programmer\t: Dhaffa Noflian            **" << endl;
	cout << "** Nim\t\t: 22343041                       **" << endl; 
	cout << "** Makul\t: Praktikum Algoritma Pemograman **" << endl;
	cout << "*********************************************" << endl << endl;
	
	//Array 1 dimensi
	
	char programmer[50] = {"Program Array 1 dimensi Dhaffa"};
	int i;
	int ganjil[20] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39};
		cout << programmer << endl << endl;
			
			for (i=0; i<20; i++){
				cout << ganjil[i] << ", ";
			}
	return 0;
}
