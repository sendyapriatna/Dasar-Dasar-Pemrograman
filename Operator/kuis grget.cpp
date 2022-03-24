#include <iostream>
using namespace std;

int main()
{
	char jawab; 
	string jawab2;

	cout << "Ini Adalah Program Kuis... Jika Bisa Selesai Maka Anda Biasa Aja :V" << endl;
	cout << "Ayo Mulai cuuuk :V " << endl;
	cout << endl;
	system("pause");
	
	pertanyaan1:
	system("cls");
	cout << "1. Burung Adalah Hewan Yang Bisa?" << endl;
	cout << "  a.Terbang" << endl;
	cout << "  b.Lari" << endl;
	cout << "  c.Bohong" << endl;
	cout << "  d.Temenan" << endl;
	cout << endl; 
	cout << "Jawaban ?? " ; cin >> jawab ;
		if (jawab=='d'||jawab=='D'){ 
			cout << "kalo Terbang Rame Rame Kan Sama Temennya" << endl;
			cout << endl;
			system("pause");
			goto pertanyaan2;
		}
		else {
			cout << "Salah cuukkk" << endl;
			system("pause");
			goto pertanyaan1;
		}
	pertanyaan2:
	system("cls");
	cout << "2. Pantai Tempat Orang?" << endl;
	cout << "  a.Bersantai" << endl;
	cout << "  b.Ramai" << endl;
	cout << "  c.Renang" << endl;
	cout << "  d.Ngamen" << endl;
	cout << endl; 
	cout << "Jawaban ?? " ; cin >> jawab ;
		if (jawab=='b'||jawab=='B'){ 
			cout << "Sepi mah Kuburan Keless" << endl;
			cout << endl;
			system("pause");
			goto pertanyaan3;
		}
		else {
			cout << "Salah cuukkk" << endl;
			system("pause");
			goto pertanyaan1;
		}
	pertanyaan3:
	system("cls");
	cout << "3. Kapan Kucing Makan?" << endl;
	cout << "  a.Pas Laper" << endl;
	cout << "  b.Magrib" << endl;
	cout << "  c.Semaunya" << endl;
	cout << "  d.Siang" << endl;
	cout << endl; 
	cout << "Jawaban ?? " ; cin >> jawab ;
		if (jawab=='c'||jawab=='C'){ 
			cout << "Yakali Pas Gamau Suru Makan" << endl;
			cout << endl;
			system("pause");
			goto pertanyaan4;
		}
		else {
			cout << "Salah cuukkk" << endl;
			system("pause");
			goto pertanyaan1;
		}
	pertanyaan4:
	system("cls");
	cout << "4. Hujan Turun Dari?" << endl;
	cout << "  a.Subuh" << endl;
	cout << "  b.Dzuhur" << endl;
	cout << "  c.Magrib" << endl;
	cout << "  d.Isya" << endl;
	cout << endl; 
	cout << "Jawaban ?? " ; cin >> jawab ;
		if (jawab=='c'||jawab='C'){ 
			cout << "Karena Ashar Belum Tentu Turun" << endl;
			cout << endl;
			system("pause");
			goto pertanyaan5;
		}
		else {
			cout << "Salah cuukkk" << endl;
			system("pause");
			goto pertanyaan1;
		}
	pertanyaan5:
	system("cls");
	cout << "5. Ketika ...... Orang Biasanya Makan?" << endl;
	cout << "  a.Laper" << endl;
	cout << "  b.Pergi" << endl;
	cout << "  c.Marah" << endl;
	cout << "  d.Siang" << endl;
	cout << endl; 
	cout << "Jawaban ?? " ; cin >> jawab ;
		if (jawab=='c'||jawab=='C'){ 
			cout << "Mau Marah Ato Ngga Ya Pasti Makan" << endl;
			cout << endl;
			system("pause");
			goto pertanyaan6;
		}
		else {
			cout << "Salah cuukkk" << endl;
			system("pause");
			goto pertanyaan1;
		}
	pertanyaan6:
	system("cls");
	cout << "Disini Kuisnya Rada Susah Cukkk :V Tapi Melengkapi Aja :V"<<endl;
	cout << "Jangan Lupa Huruf KAPITAL :V"<<endl;
	cout << endl;
	cout << "6. Warna Bendera NKRI? (---A------)" << endl;
	cout << endl;
	cout << endl; 
	cout << "Jawaban ?? " ; cin >> jawab2 ;
		if (jawab2=="CUMADUAAJA"){ 
			cout << "Kapan Warnanya Tiga?" << endl;
			cout << endl;
			system("pause");
			goto pertanyaan7;
		}
		else {
			cout << "Salah cuukkk" << endl;
			system("pause");
			goto pertanyaan1;
		}
	pertanyaan7:
	system("cls");
	cout << "Jangan Lupa Huruf KAPITAL :V"<<endl;
	cout << endl;
	cout << "7. Apa Yang Dilakukan Orang Ketika Sakit? (P---NG)" << endl;
	cout << endl;
	cout << endl; 
	cout << "Jawaban ?? " ; cin >> jawab2 ;
		if (jawab2=="PULANG"){ 
			cout << "Kan Lagi Sakit, Gimana Sih!!" << endl;
			cout << endl;
			system("pause");
			goto pertanyaan8;
		}
		else {
			cout << "Salah cuukkk" << endl;
			system("pause");
			goto pertanyaan1;
		}
	pertanyaan8:
	system("cls");
	cout << "Jangan Lupa Huruf KAPITAL :V"<<endl;
	cout << endl;
	cout << "8. Tempat Menyimpan Uang Biasanya? (---P-T)" << endl;
	cout << endl;
	cout << endl; 
	cout << "Jawaban ?? " ; cin >> jawab2 ;
		if(jawab2=="KARPET"){
			cout << "Biar Tambah Aman" << endl;
			cout << endl;
			system("pause");
			goto pertanyaan9;
		}
		else {
			cout << "Salah cuukkk" << endl;
			system("pause");
			goto pertanyaan1;
		}
	pertanyaan9:
	system("cls");
	cout << "Jangan Lupa Huruf KAPITAL :V"<<endl;
	cout << endl;
	cout << "9. Bangun Tidur Ku Terus? (M----)" << endl;
	cout << endl;
	cout << endl; 
	cout << "Jawaban ?? " ; cin >> jawab2 ;
		if (jawab2=="MELEK"){
			cout << "Pasti Pertama Bangun Buka Mata Dulu" << endl;
			cout << endl;
			system("pause");
			goto pertanyaan10;
		}
		else {
			cout << "Salah cuukkk" << endl;
			system("pause");
			goto pertanyaan1;
		}
	pertanyaan10:
	system("cls");
	cout << "Udah Ah Cape Bikinnyaa..." <<endl;
	cout << "Mau Ulang??? Y/N\t" ; cin >> jawab ;
		if (jawab=='Y'){ 
			system("pause");
			goto pertanyaan1;
		}
		else {
			system("pause");
			goto akhir;
		}
	akhir:
	system("cls");
	cout << "Kalo Udahan Close Programnya"<<endl;
	cout << endl;
	cout << "***********Terima Kasih************" << endl;
	cout << "*****Program by Sendy_Apriatna*****" << endl;
	cout << "************1900018205*************" ;
	return 0;
}
