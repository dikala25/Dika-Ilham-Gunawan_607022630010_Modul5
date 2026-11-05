#include <iostream>
using namespace std ;

int main () {
	int transaksi,jumlahtransaksi,totaltransaksi = 0 ;
	
	cout <<"Masukan jumlah transaksi hari ini : " ; cin >> jumlahtransaksi ;
	
	for (int i = 1; i <=jumlahtransaksi ; i++) {
		cout <<"Transaksi-" << i <<":" ; cin >> transaksi ; 
		 
		totaltransaksi = totaltransaksi + transaksi ;
		cout <<"total transaksi : " << totaltransaksi << " Rupiah\n" ;
	} 
	
} 
