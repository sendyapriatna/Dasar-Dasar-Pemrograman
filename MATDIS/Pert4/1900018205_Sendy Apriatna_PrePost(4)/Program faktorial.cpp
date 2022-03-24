#include <iostream>
using namespace std;

class hitung{ 
	public: 				//berclass publik agar bisa di akses oleh semua program
		int faktorial(); 	//fungsi yg memiliki nilai kembalian
		void input(); 		//procedure tidak memiliki nilai kembalian
	private:
		int bb; 	//deklarasi variable bertipe integer
		int hasil;
};
void hitung::input(){   
	cout << "Masukan Bilangan Bulat : ";
	cin >> bb;
	cout << endl;
}
int hitung::faktorial (){
	hasil=1;
	cout << bb <<"!= ";
	for (int i=1;i<=bb;i++){
		hasil*=i;
		if(i==bb){  //percabangan untuk menghilangkan tanda "*" pada output terkakir
			cout << i;
		}
		else{
			cout << i <<"*";
		}
	}
	cout << endl;
	cout << bb << " Faktorial = " << hasil;
	return hasil;
}
int main(){
	hitung fakt;
	fakt.input();
	fakt.faktorial();
	return 0;
}
