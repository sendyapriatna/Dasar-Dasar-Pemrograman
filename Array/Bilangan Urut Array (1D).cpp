#include <iostream>
using namespace std;
int main()
{
	int data[10];
	int tmp;
	cout << "Program Mengurutkan Angka Kecil ke Besar"<< endl;
	for(int i=0;i<10;i++){
		cout << "Masukan Angka ke " << i+1 << ":"; cin >> data[i];
	}
	cout << "Data Sebelum Diurutkan :" << endl;
	for(int i=0; i<10;i++){
		cout << data[i] << " ";
	}
	cout << endl;
	
	for(int i=0;i<9; i++){
		for(int j=i+1;j<10;j++){
			if(data[i]>data[j]){
				tmp=data[i];
				data[i]=data[j];
				data[j]=tmp;
			}
		}
	}
	cout << "Data Setelah Diurutkan :" << endl;
	for(int i=0;i<10;i++){
		cout << data[i]<< " ";
	}
}
