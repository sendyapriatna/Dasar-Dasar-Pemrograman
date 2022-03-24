#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Masukan angka :";cin>>n;
	for(int i=1;i<=n;i++){
		for(int k=1;k<=n;k++){
			cout << " ";
		}
		for(int j=1;j<=i;j++){
			cout << "*";
		}
		cout << endl;
	}
	for(int i=1;i<=n;i++){
		for(int k=i;k>1;k--){
		cout << " ";
		}
		for(int j=i;j<=n;j++){
			cout << "*";
		}
		
		cout << endl;
	}
}
