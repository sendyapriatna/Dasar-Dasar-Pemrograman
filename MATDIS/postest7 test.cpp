#include <iostream> 
#include <conio.h> 
using namespace std; 
main() { 
	int input,hitung=0,i=1,b=2;

	cout<<"Inputkan Angka ="; 
	cin>>input; //inputan untuk menentukan berapa banyak bilangan prima yang akan di tampilkan  
	
	if (b==2){ // kondisi jija b=2
	 	cout<<b<<" ";  //menampilkan b  
			b++; //nilai b bertambah 1
			i++; //nilai i bertambah 1
			} 
			
		while (i<=input){ // perulangan untuk menampilkan bilangan prima
	 		for (int z=2; z<b; z++) // perulangan untuk mengecek bilangan prima
			 { 
			 	if (b%z==0){ // mengecek jika nilai b mod z = 0, maka akan terus mengikuti perulangan for, dan nilai z akan terus bertambah 1 
			 	hitung++; // masuk perulangan maka nilai hitung akan menjadi +1
				 }
				 
			 } 
				if (hitung==0){ // jika variable hitung = 0 maka bilangan prima akan di outputkan
				cout<<b<<" "; // menampilkan nilai b
				i++; // nilai i bertambah 1 
				b++; // nilai b bertambah 1 
				} 
					if(hitung>0){ // masuk perulangan jika nilai hitung lebih dari 0
					b++; 	//nilai b bertambah 1
					hitung=0; //nilai hitung  di kembalikan menjadi  0;
				}
			}
			
		getch(); 
	}

