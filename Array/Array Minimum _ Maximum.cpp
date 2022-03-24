#include <iostream>
using namespace std;

int main()
{
	int nilai[5];
	int max=-500;
	int min=500;
	cout << "Menampilkan Array Minimum dan Maximum"<<endl;
	for(int i=0;i<5;i++){
		cout << "Masukan Nilai [" <<i<<"]:";
		cin >> nilai[i];
	}
	for(int i=0;i<5;i++){
		if(nilai[i]>max){
			max=nilai[i];
		}
		else if(nilai[i]<min){
			min=nilai[i];
		}
	}
	cout <<"Nilai Minimum Array :" << min<<endl;
	cout <<"Nilai MAximum Array :" << max;
}
