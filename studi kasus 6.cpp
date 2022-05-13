#include <iostream>
using namespace std;

class Nilai {
	public :
	void input();
	void proses();
	void output();
	private:
	string nama, matkul;
	int nilai[50]; 
	int n;
	int Nmin, Nmax;
	float rata;
};

void Nilai::input(){
	cout<<"=========================================="<<endl;
	cout<<"\t\t DAFTAR NILAI MAHASISWA \t\t "<<endl;
	cout<<"=========================================="<<endl;
	cout<<"Masukkan Nama Mata Kuliah  : ";cin>>matkul;
	cout<<"Masukkan Nama Dosen        : ";cin>>nama;
	cout<<"Masukkan Banyak Nilai      : ";cin>>n;
	cout<<"---------------------------------------"<<endl;
	for(int i=0; i<n; i++){
		cout<<"Masukkan nilai siswa ke-"<<i+1<<" = ";cin>>nilai[i];
	}
	cout<<"======================================="<<endl;
}

void Nilai::proses() {
	Nmin=nilai[0],    Nmax=nilai[0];
	for(int j=0; j<n; j++){
		if(nilai[j]<Nmin){
			Nmin = nilai[j]; } 
		if(nilai[j]>Nmax){
			Nmax = nilai[j]; }}
	for(int i=0; i<n; i++){
		rata+=nilai[i];
	}
	rata/=n;
}

void Nilai::output(){
	cout<<"\n====================="<<endl;
	cout<<"Nama Dosen  : "<<nama<<endl;
	cout<<"Mata kuliah : "<<matkul<<endl;
	cout<<"---------------------"<<endl;
	cout<<" Nilai "<<endl;
	cout<<"---------------------"<<endl;
	for(int i=0; i<n; i++){
		cout<<"  "<<nilai[i]<<endl;
	}
	cout<<"-------------------------------"<<endl;
	cout<<"Nilai min       : "<<Nmin<<endl;
	cout<<"Nilai max       : "<<Nmax<<endl;
	cout<<"Nilai rata-rata : "<<rata<<endl;
	cout<<"==============================="<<endl;
}

int main() {
	Nilai a;
	a.input();
	a.proses();
	a.output();
}
