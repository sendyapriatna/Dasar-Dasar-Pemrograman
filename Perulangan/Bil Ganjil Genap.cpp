#include <iostream>
using namespace std;

int main()
{
	int batas,Genap=0,Ganjil=0;
	awal:
	cout << endl;
	cout <<"Masukan Nilai Awal:";
	cin >> batas;
	//cout << "Nilai For ="<< endl;
	for(int i=1;i<=batas;i++){
		if(i%2==0){			
			cout << i <<" = Genap" <<endl;
			Genap++;
		}
		else{
			cout <<i<<" = Ganjil"<<endl;
			Ganjil++;
		}
	}
	cout << "Jumlah Bil Genap :" <<Genap<<endl;
	cout << "Jumlah Bil Ganjil :" <<Ganjil<<endl;
}
