 #include <iostream>
using namespace std;
int main()
{
	int a[4];
	float jumlah,rata,x;
	cout << "Menghitung Rata Rata Dari Semua Array" << endl;
	cout << "Masukan Batasan:" ; cin >> x;
	for(int i=0;i<x;i++){
		cout << "Masukan Nilai" << i+1 << ":";
		cin >> a[i];
	}
	jumlah=0;
	for (int i=0;i<x;i++){
		jumlah=jumlah+a[i];
	}
	rata=jumlah/x;
	cout << "Jumlah Seluruhnya :" << jumlah<< endl;
	cout << "Rata Rata Array   :" << rata;
}
