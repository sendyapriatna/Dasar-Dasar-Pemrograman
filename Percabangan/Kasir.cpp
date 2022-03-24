#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
int main()

{
	char lagi;
	int name;
	int pilihan;
	int jumlah;
	int dibayar;
	int harga;
	int total;
	int kode;

	awal:
		system("cls");
		cout << "================================="<<endl;
		cout << "********   Kopi Absurd   ********"<<endl;
		cout << "====Menu================Harga===="<<endl;
		cout << "1. Kopi Hideung        Rp.3000"<<endl;
		cout << "2. Kopi Guday          Rp.7000"<<endl;
		cout << "3. Kopi Tilas          Rp.5000"<<endl;
		cout << "4. Kopi Kapucino       Rp.9000"<<endl;
		cout << "5. Jus  Alpuket        Rp.8000"<<endl;
		cout << "6. Jus  Jambu          Rp.8000"<<endl;
		cout << "7. Susu Soda           Rp.9500"<<endl;
		cout << endl;

		cout << "Masukan Pilihan Anda(1-7) =";
		cin  >> kode;

		switch(kode)

		{
			case 1 :
				cout<<"Kopi Hideung"<<endl;
				harga=3000;
				cout<<"Masukan Jumlah =";
				cin >>jumlah;
				cout<<endl;
				total = jumlah*harga;
				cout<<"Total Harga Yaitu =" <<total;
				cout<<"Dibayar =";
				cin >>dibayar;
				cout<<endl;
				cout<<"Kembalian ="<<dibayar-total<<endl;
				break;
			case 2 :
				cout<<"Kopi Guday"<<endl;
				harga=7000;
				cout<<"Masukan Jumlah =";
				cin >>jumlah;
				cout<<endl;
				total = jumlah*harga;
				cout<<"Total Harga Yaitu =" <<total;
				cout<<"Dibayar =";
				cin >>dibayar;
				cout<<endl;
				cout<<"Kembalian ="<<dibayar-total<<endl;
				break;
			case 3 :
				cout<<"Kopi Tilas"<<endl;
				harga=5000;
				cout<<"Masukan Jumlah =";
				cin >>jumlah;
				cout<<endl;
				total = jumlah*harga;
				cout<<"Total Harga Yaitu =" <<total;
				cout<<"Dibayar =";
				cin >>dibayar;
				cout<<endl;
				cout<<"Kembalian ="<<dibayar-total<<endl;
				break;
			case 4 :
				cout<<"Kopi Kapucino"<<endl;
				harga=9000;
				cout<<"Masukan Jumlah =";
				cin >>jumlah;
				cout<<endl;
				total = jumlah*harga;
				cout<<"Total Harga Yaitu =" <<total;
				cout<<"Dibayar =";
				cin >>dibayar;
				cout<<endl;
				cout<<"Kembalian ="<<dibayar-total<<endl;
				break;
			case 5 :
				cout<<"Jus Alpuket"<<endl;
				harga=8000;
				cout<<"Masukan Jumlah =";
				cin >>jumlah;
				cout<<endl;
				total = jumlah*harga;
				cout<<"Total Harga Yaitu =" <<total;
				cout<<"Dibayar =";
				cin >>dibayar;
				cout<<endl;
				cout<<"Kembalian ="<<dibayar-total<<endl;
				break;
			case 6 :
				cout<<"Jus Jambu"<<endl;
				harga=8000;
				cout<<"Masukan Jumlah =";
				cin >>jumlah;
				cout<<endl;
				total = jumlah*harga;
				cout<<"Total Harga Yaitu =" <<total;
				cout<<"Dibayar =";
				cin >>dibayar;
				cout<<endl;
				cout<<"Kembalian ="<<dibayar-total<<endl;
				break;
			case 7 :
				cout<<"Susu Soda"<<endl;
				harga=9500;
				cout<<"Masukan Jumlah =";
				cin >>jumlah;
				cout<<endl;
				total = jumlah*harga;
				cout<<"Total Harga Yaitu =" <<total;
				cout<<"Dibayar =";
				cin >>dibayar;
				cout<<endl;
				cout<<"Kembalian ="<<dibayar-total<<endl;
				break;
			default:
			cout<<"Kode tersebut tidak ada dalam menu"<<endl;
		}
			cout<<"Anda ingin mengulangi lagi??? [Y/N]";
			cin >> lagi;
				if(lagi=='y' || lagi=='Y'){
					goto awal;
				}
				if(lagi=='N' || lagi=='n'){
					goto selesai;
				}
	selesai:
		system("cls");
		cout<<"Terima Kasih Atas Kunjungan Anda"<<endl;
		cout<<"________________________________________________________________________"<<endl;
		cout<<"________________________________________________________________________"<<endl;
		cout<<"__  *********  ***   ***     ***     ***   ***  ***   ***  *********  __\n";
		cout<<"__  *********  ***   ***   *** ***   ****  ***  ***  ***   ***    **  __\n";
		cout<<"__     ***     *********  ***   ***  ***** ***  *******    *****      __\n";
		cout<<"__     ***     *********  *********  *** *****  *******        *****  __\n";
		cout<<"__     ***     ***   ***  ***   ***  ***  ****  ***  ***   **    ***  __\n";
		cout<<"__     ***     ***   ***  ***   ***  ***   ***  ***   ***  *********  __\n";
		cout<<"________________________________________________________________________\n";
		cout<<"________________________________________________________________________"<<endl;

	return 0;
}		

