#include <iostream>
using namespace std;
int main()
{
	struct array{
		int data[10];
		int tmp;
	};
	array coy;
	cout << "Program Mengurutkan Angka Kecil ke Besar"<< endl;
	for(int i=0;i<10;i++){
		cout << "Masukan Angka ke " << i+1 << ":"; cin >> coy.data[i];
	}
	cout << "Data Sebelum Diurutkan :" << endl;
	for(int i=0; i<10;i++){
		cout << coy.data[i] << " ";
	}
	cout << endl;
	
	for(int i=0;i<9; i++){
		for(int j=i+1;j<10;j++){
			if(coy.data[i]>coy.data[j]){
				coy.tmp=coy.data[i];
				coy.data[i]=coy.data[j];
				coy.data[j]=coy.tmp;
			}
		}
	}
	cout << "Data Setelah Diurutkan :" << endl;
	for(int i=0;i<10;i++){
		cout << coy.data[i]<< " ";
	}
}
