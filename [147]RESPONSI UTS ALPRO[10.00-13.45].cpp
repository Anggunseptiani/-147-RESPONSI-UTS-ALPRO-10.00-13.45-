#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	string Username,Password;
	cout <<"Masukan Username :";
	cin>>Username;
	cout<<"Masukan Password :";
	cin>>Password;
	
	if(Username=="nama" && Password =="angka"){
		cout <<"Login gagal";
	} else{
		cout<<"login Berhasil"<<endl;
	}
	string nama,nim,prodi;
	cout<<"-------------------------------"<<endl;
	cout <<"DATA MAHASISWA"<<endl;
	cout<<"nama: ";
	cin>>nama;
	cout<<"nim: ";
	cin >> nim;
	cout<<"prodi: ";
	cin>>prodi;
	
	string krs,pilih1,pilih2,pilih3,pilih4,pilih5;
	cout<<"-------------------------------"<<endl;
	cout<<"KRS MAHASISWA"<<endl;
	cout <<"1.Bahasa Indonesia"<<endl;
	cout <<"2.Alpro"<<endl;
	cout <<"3.PWEB"<<endl;
	cout <<"pilih KRS"<<endl;
	cin>> krs;
	cout <<"1.Bahasa Indonesia"<<endl;
	cin >>pilih1;
	cout <<"2.Alpro"<<endl;
	cin >>pilih2;
	cout <<"3.PWEB"<<endl;
	
	
	string jadwal;
	cout<<"---------------------------"<<endl;
	cout<<"JADWAL KULIAH MAHASISWA SEMESTER 1"<<endl;
	cout <<"1.senin (pweb)"<<endl;
	cout<<"2.selasa(Alpro)"<<endl;
	cout <<"3.Rabu(matdis)"<<endl;
	cout <<"4.kamis(B indo)"<< endl;
	cout <<"---------------------------"<<endl;
	cout<<"JADWAL KULIAH MAHASISWA SEMESTER 2"<<endl;
	cout <<"1.senin (pweb)"<<endl;
	cout<<"2.selasa(Alpro)"<<endl;
	cout <<"3.Rabu(matdis)"<<endl;
	cout <<"4.kamis(B indo)"<< endl;
	
	int nilai;
	cout <<"--------------------------"<<endl;
	cout <<"NILAI MAHASISWA"<<endl;
	cout<<"NILAI ALPRO 50"<<endl;
	cout <<"NILAI PWEB 60" <<endl;
	cout <<"NILAI MATDIS 70"<<endl;
	cout <<"NILAI B INDO 80 "<<endl;
	string beasiswa;
	cout <<"----------------------------"<<endl;
	cout <<"1.BEASISWA AKADEMIK"<<endl;
	cout <<"2.BEASIWA PRESTASI"<<endl;
	cout<<"3.BEASISWA TAHFIDZ"	<<endl;
	cin>>beasiswa;
	
	
	return 0;
}






	

