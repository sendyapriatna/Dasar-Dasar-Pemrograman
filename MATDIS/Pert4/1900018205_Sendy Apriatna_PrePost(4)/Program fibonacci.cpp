#include <iostream>
using namespace std;

class hitung{
	public:				//berclass publik agar bisa di akses oleh semua program
		int fibo();		//fungsi yg memiliki nilai kembalian
		void input(); 	//procedure tidak memiliki nilai kembalian
	private:
		int bf;
		int bf1=0,bf2=1,bf3;
};
void hitung::input(){
	cout << "Masukan Banyak Bilangan Fibonacci : ";
	cin >> bf;
	cout << endl;
}
int hitung::fibo(){
	cout << bf1 << " " << bf2 << " "; 	// output agka 0 dan 1
	for (int i=3;i<=bf;i++){			//perulangan di lakukan dari 2 karena angka 0 dan 1 sudah teroutput
		bf3=bf1+bf2;    
  		cout<<bf3<<" ";    
  		bf1=bf2;    
  		bf2=bf3;
	}
	return bf3;
}
int main(){
	hitung fibonacci;
	fibonacci.input();
	fibonacci.fibo();
	return 0;
}
