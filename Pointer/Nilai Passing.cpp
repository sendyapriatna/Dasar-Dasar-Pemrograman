#include <iostream>
using namespace std;
int pass(int *a){
	int gan=*a;
	return gan;
}
int main()
{
	int x;
	cout << "Masukan Nilai :" ;cin >>x;
	if(pass(&x)>=91 && pass(&x)<=100){
		cout<<"A";
	}
	else if(pass(&x)>=81 && pass(&x)<=90){
		cout<<"B";
	}
	else if(pass(&x)>=66&& pass(&x)<=80){
		cout<<"C";
	}
	else if(pass(&x)>=51 && pass(&x)<=65){
		cout<<"D";
	}
	else if(pass(&x)<=51)
	{
		cout<<"E";
	}
	else
	{
		cout <<"Salah input";
	}
}
