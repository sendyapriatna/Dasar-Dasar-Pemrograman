#include <iostream>
using namespace std;
int main()
{
	int matrik[2][2];
	int matrik2[2][2];
	int hasil[2][2];
	int pilih;
	char pil;
	awal:
	cout << "Kalkulator Array"<< endl;
	cout << "1. Penjumlahan Array" << endl;
	cout << "2. Pengurangan Array" << endl;
	cout << "3. Perkalian Array" << endl;
	cout << "4. Pembagian Array" << endl;
	cout << endl;
	cout << "Masukan Pilihan :"; cin >> pilih;
	if(pilih==3){
	cout << "Perkalian Sesama Array"<< endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout << "Masukan Matriks [" << i+1 << "][" << j+1 << "]:"; cin >> matrik[i][j];
		}
		cout << endl;
	}
	cout << endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout << "Masukan Matriks 2 [" << i+1 << "][" << j+1 << "]:"; cin >> matrik2[i][j];
		}
		cout << endl;
	}
	cout << endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			hasil[i][j]=matrik[i][j]*matrik2[i][j];
		}
	}
	cout << endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout << "[" << i+1 << "][" << j+1 << "]:"<< hasil[i][j] << " ";
		}
		cout << endl;
	}
	}
	else if(pilih==1){
	cout << "Penjumlahan Sesama Array"<< endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout << "Masukan Matriks [" << i+1 << "][" << j+1 << "]:"; cin >> matrik[i][j];
		}
		cout << endl;
	}
	cout << endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout << "Masukan Matriks 2 [" << i+1 << "][" << j+1 << "]:"; cin >> matrik2[i][j];
		}
		cout << endl;
	}
	cout << endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			hasil[i][j]=matrik[i][j]+matrik2[i][j];
		}
	}
	cout << endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout << "[" << i+1 << "][" << j+1 << "]:"<< hasil[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Ingin Mengulangi Y/N??"; cin >> pil;
		if(pil=='Y'){
			goto awal;
		}
		else{
			cout << "Terima Kasih";
		}
	}
	else if(pilih==2){
	cout << "Pengurangan Sesama Array"<< endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout << "Masukan Matriks [" << i+1 << "][" << j+1 << "]:"; cin >> matrik[i][j];
		}
		cout << endl;
	}
	cout << endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout << "Masukan Matriks 2 [" << i+1 << "][" << j+1 << "]:"; cin >> matrik2[i][j];
		}
		cout << endl;
	}
	cout << endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			hasil[i][j]=matrik[i][j]-matrik2[i][j];
		}
	}
	cout << endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout << "[" << i+1 << "][" << j+1 << "]:"<< hasil[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Ingin Mengulangi Y/N??"; cin >> pil;
		if(pil=='Y'){
			goto awal;
		}
		else{
			cout << "Terima Kasih";
	}
	}
	else if(pilih==4){
	cout << "Pembagian Sesama Array"<< endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout << "Masukan Matriks [" << i+1 << "][" << j+1 << "]:"; cin >> matrik[i][j];
		}
		cout << endl;
	}
	cout << endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout << "Masukan Matriks 2 [" << i+1 << "][" << j+1 << "]:"; cin >> matrik2[i][j];
		}
		cout << endl;
	}
	cout << endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			hasil[i][j]=matrik[i][j]/matrik2[i][j];
		}
	}
	cout << endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout << "[" << i+1 << "][" << j+1 << "]:"<< hasil[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Ingin Mengulangi Y/N??"; cin >> pil;
if(pil=='Y'){
	goto awal;
}
else{
	cout << "Terima Kasih";
}
	}
	else{
		cout << "Invalid";
		goto awal;
	}
}


