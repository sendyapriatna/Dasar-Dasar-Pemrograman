#include <iostream>
using namespace std;
int arrayinput()
{
	int n;
	int nilai[n];
	int i;
	cout << "Masukan Indeks Array :"; cin >> n;
	for (i=0;i<n;i++){
		cout << "input ["<<i<<"]=" ;cin >>nilai[i];

	}
		return n;
}
int lihat()
{
	int n;
	int nilai[n];
	int i;
	cout << endl;
	cout << "Output Array "<< endl;
	for (i=0;i<n;i++){
		cout << "Nilai ["<<i<<"]=" <<nilai[i]<< endl;
	}
	return n;
}
int main()
{
	arrayinput();
	lihat();
	return 0;
}

