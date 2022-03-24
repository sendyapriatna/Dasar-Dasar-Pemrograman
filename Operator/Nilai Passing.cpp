#include <iostream>
using namespace std;
void kal()
{
	int x;
	cout << "Masukan Nilai :" ;cin >>x;
	if(x>=91&&x<=100){
		cout<<"A";
	}
	else if(x>=81&&x<=90){
		cout<<"B";
	}
	else if(x>=66&&x<=80){
		cout<<"C";
	}
	else if(x>=51&&x<=65){
		cout<<"D";
	}
	else if(x<=51)
	{
		cout<<"E";
	}
	else
	{
		cout <<"Salah input";
	}
	
}
int main()
{
	kal();
	return 0;
}
