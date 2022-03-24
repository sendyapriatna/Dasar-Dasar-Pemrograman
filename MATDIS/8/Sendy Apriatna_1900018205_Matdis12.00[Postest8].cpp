#include <iostream>
using namespace std;

int faktorial(int value)
{
    int jumlah=1;
    for(int i=1; i<=value; i++)
    {
        jumlah=jumlah*i;
    }
    return jumlah;
}

void input()
{
	int x,n,r,u,hasil;
    cout << "masukka nilai n : ";
    cin >> n;
    cout << "masukkan nilai r : ";
    cin >> r;
    cout << endl;
    
    cout << "1. kombinasi " << endl;
    cout << "2. permutasi " << endl;
    cout << "silahkan pilih :  " << endl;
    cin >>u;
    cout << endl;
    
    switch(u){
    	case 1:
    		if (n>r){
        		x=n-r;
        		hasil=faktorial(n)/(faktorial(x)*faktorial(r));
        		cout << "Hasil Kombinasi C("<<n<<","<<r<<") = "<<hasil;
    		}
			else{
        	cout << "n tidak boleh lebih kecil dari r ";
    		}
    		break;
    	case 2:
    		if (n>r){
		        x=n-r;
		        hasil=faktorial(n)/(faktorial(x));
		        cout << "Hasil Kombinasi P("<<n<<","<<r<<") = "<<hasil;
		    }else{
		        cout << "n tidak boleh lebih kecil dari r ";
		    }
		    break;
		default:
			cout << "error";
	}
}
int main()
{
    input();
}
