
#include <iostream>

#include <cstdlib>

#include <string.h>



using namespace std;



int main(int argc, char*argv[]){

char kata1, kata2, kata3, kata4;



int a,b,c,d;

cout<<"Masukan titik pertama :";

cin>>kata1;
 
cout<<endl;

cout<<"Masukan titik kedua :";

cin>>kata2;

cout<<endl;

cout<<"Masukan titik ketiga :";

cin>>kata3;

cout<<endl;

cout<<"Masukan titik keempat :";

cin>>kata4;

cout<<endl;

cout<<"Garis yang dapat dibentuk adalah :"<<endl;

cout<<kata1<<kata4<<endl;

cout<<kata4<<kata3<<endl;

cout<<kata3<<kata2<<endl;

cout<<kata2<<kata1<<endl<<endl;

cout<<"Masukan jarak antara titik simpul "<<kata1<<" dengan "<<kata4<<" : "; cin>>a;

cout<<"Masukan jarak antara titik simpul "<<kata4<<" dengan "<<kata3<<" : "; cin>>b;

cout<<"Masukan jarak antara titik simpul "<<kata3<<" dengan "<<kata2<<" : "; cin>>c; cout<<"Masukan jarak antara titik simpul "<<kata2<<" dengan "<<kata1<<" : "; cin>>d; cout<<endl<<endl;

cout<<"Jadi panjang jarak totalnya = "<<a+b+c+d<<endl<<endl;

}

