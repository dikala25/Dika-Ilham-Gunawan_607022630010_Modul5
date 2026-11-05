#include <iostream>
using namespace std ;

int main () {
	int input,total ;
	
	cout <<"Silahkan masukan angka : " ; cin >> input ;
	
	for (int i = 1 ; i <= 10 ; i++) {
		total = input * i ;
		cout << input << " x " << i << " = " <<total << endl ;
	} 
	return 0 ;
}
