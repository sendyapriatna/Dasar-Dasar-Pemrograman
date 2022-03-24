#include <iostream>
using namespace std;

int rekursif(int x, int y){
	if(y==0){
		return 1;
	}
	else if(y==1){
		return x;
	}
	else{
		return x+rekursif(x,y-1);	
	}
}
int main(){
	int a,b;
	cout<<"Mencari KPK"<<endl;
    cout<<"masukkan bilangan pertama : ";cin>>a; // input bilangan pertama
    cout<<"masukkan bilangan kedua   : ";cin>>b; // input bilangan kedua
    cout<<endl;
	cout<<"KPK = "<<rekursif(a,b);
}
