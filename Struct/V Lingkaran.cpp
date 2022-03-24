#include <iostream>
using namespace std;
int main()
{
	struct lingkaran{
		float r;
		float jari;
	};
	lingkaran volume;
	cout << "Masukan Jari Jari :" ; cin >> volume.r;
	cout << endl;
	volume.jari=volume.r*volume.r*volume.r;
	cout << "Volume Lingkaran =" << (4/3)*(3.14*volume.jari);
}
