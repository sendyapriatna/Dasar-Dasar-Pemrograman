#include <iostream>
using namespace std;

int main()

{
	char nama[50];
	char tempat_tgl_lahir[50];
	char kelamin[50];
	char Alamat[50];
	char rtrw[50];
	char keldes[50];
	char kec[50];
	char agama[50];
	char status[50];
	char pekerjaan[50];
	char nik[50];
	char darah[50];
	char wni[]= "WNI";
	char berlaku[]="SEUMUR HIDUP";

	cout << "\t\tSELAMAT DATANG DI PROGRAM KTP" << endl;
	cout << "\t\t    HARUS HURUF KAPITAL" << endl;
	cout << "\t\t_____________________________" << endl;
	cout << "NIK :" ; cin.getline(nik,50);
	cout << "Nama :"; cin.getline(nama,50);
	cout << "Tempat/Tgl Lahir :" ; cin.getline(tempat_tgl_lahir,50);
	cout << "Kelamin :" ; cin.getline(kelamin,50);
	cout << "Gol Darah :" ; cin >> darah;
	cout << "Alamat :" ; cin >> Alamat;
	cout << "RT/RW :" ; cin >> rtrw;
	cout << "Kel/des :" ; cin >> keldes;
	cout << "Kecamatan :" ; cin >> kec;
	cout << "Agama :" ; cin >> agama;
	cout << "Status :" ; cin >> status;
	cout << "Pekerjaan :" ; cin >> pekerjaan;

	system("cls");
	cout << "\t\t PROVINSI JAWA BARAT" <<endl;
	cout << "\t\tKABUPATEN PANGANDARAN" << endl;
	cout << "__________________________________________________" << endl;
	cout << "NIK \t\t:" <<  nik << endl;
	cout << "Nama \t\t:" << nama << endl;
	cout << "Tempat/Tgl Lahir:" << tempat_tgl_lahir << endl;
	cout << "Jenis Kelamin \t:" << kelamin << "\tGol darah :" << darah << endl; 
	cout << "Alamat \t\t:" << Alamat << endl;
	cout << "    RT/RW \t:" << rtrw << endl;
	cout << "    Kel/Desa \t:" << keldes << endl;
	cout << "    Kecamatan \t:" << kec << endl;
	cout << "Agama \t\t:" << agama << endl;
	cout << "Status Pekawinan:" << status << endl;
	cout << "Perkerjaan \t:" << pekerjaan << endl;
	cout << "Kewarganegaraan :" << wni << endl;
	cout << "Berlaku Hingga \t:" << berlaku << endl;
	cout << "__________________________________________________" << endl;
	cout << endl;


	system("pause");
	system("cls");
	cout << "***********Terima Kasih************" << endl;
	cout << "*****Program by Sendy_Apriatna*****" << endl;
	cout << "************1900018205*************" ;

}
