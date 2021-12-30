#include <iostream>
using namespace std;

float jumlah; 

double pajak (){
	double x=jumlah; 
	return x*0.1;
}

double total(){
	double x=jumlah;
	double y=pajak();
	return x+y; 
}

void header(){
	cout <<"===================================================================================================="<<endl;
	cout <<"\t\t\t\t\t Hallo Wibuers Sejati \t"<<endl;
	cout <<"\t\t\t\t\t WELCOME TO OUR STORE \t"<<endl;
	cout <<"===================================================================================================="<<endl; 
}


void pilih_film(){
	cout <<"Film yang kamu pilih\t\t : ";
}

void closeHeader(){
	cout <<"============================================"<<endl;
	cout <<"\t\t  TERIMA KASIH \t\t"<<endl;
	cout <<"\t\t HAPPY WATCHING \t\t"<<endl;
	cout <<"============================================"<<endl;
}


int main (){
	
	string nama, judulfilm, ya;
	int jmltrans;
	double harga[10], bayar, minus, kurang;
	int kodefilm;
	
	do {
	system("CLS");	
	header (); 
	cout <<endl; 
	

	cout << "BERIKUT LIST FILM DAN SERIES ANIME YANG DAPAT KAMU BELI"<<endl; 
	cout <<endl;
	cout << "1.  Your Name\t\t\t Rp. 65000"<<endl;
	cout << "2.  Weathering With You\t\t Rp. 85000"<<endl;
	cout << "3.  Spirited Away\t\t Rp. 70000"<<endl;
	cout << "4.  My Neighbor Totoro\t\t Rp. 75000"<<endl; 
	cout << "5.  The Garden of Words\t\t Rp. 60000"<<endl;
	cout << "6.  Byosoku 5 Senchimetoru\t Rp. 156000"<<endl;
	cout << "7.  I Want to Eat My Pancreas\t Rp. 132000"<<endl;
	cout << "8.  Koe no Katachi\t\t Rp. 124000"<<endl;
	cout << "9.  Violet Evergarden Party\t Rp. 140000"<<endl;
	cout << "10. Hotarubi no Mori e\t\t Rp. 110000"<<endl;
	
	cout <<endl;
	cout << "Username Pembeli\t\t : "; getline(cin.ignore(), nama);
	cout << "Jumlah Transaksi\t\t : "; cin >> jmltrans;
	cout <<endl;
	
	int beli[jmltrans];
	for (int x=1; x<=jmltrans; x++){
			cout << "Film ke-" << x <<endl; 
			cout << "Kode Film (1|2|3|4|5|6|7|8|9|10) : "; cin >> kodefilm;
		if (kodefilm == 1){
			pilih_film(); cout << "Your Name"<<endl;
			harga[x]=65000;
		} else if (kodefilm == 2){
			pilih_film(); cout << "Weathering With You"<<endl;
			harga[x]=85000;
		} else if (kodefilm == 3){
			pilih_film(); cout << "Spirited Away"<<endl; 
			harga[x]=70000;
		} else if (kodefilm == 4){
			pilih_film(); cout << "My Neighbor Totoro"<<endl; 
			harga[x]=75000;
		} else if (kodefilm == 5){
			pilih_film(); cout << "The Garden of Words"<<endl; 
			harga[x]=60000;
		}  else if (kodefilm == 6){
			pilih_film(); cout << "Byosoku 5 Senchimetoru"<<endl; 
			harga[x]=156000;
		}	else if (kodefilm == 7){
			pilih_film(); cout << "I Want to Eat My Pancreas"<<endl; 
			harga[x]=132000;
		}	else if (kodefilm == 8){
			pilih_film(); cout << "Koe no Katachi"<<endl; 
			harga[x]=124000;
		}	else if (kodefilm == 9){
			pilih_film(); cout << "Violet Evergarden Party"<<endl; 
			harga[x]=140000;
		}	else if (kodefilm == 10){
			pilih_film(); cout << "Hotarubi no Mori e"<<endl; 
			harga[x]=110000;
		}	else {
			cout << "Kode Film Yang Anda Masukkan tidak Tersedia" <<endl;
			harga[x]=0;
		}
		jumlah += harga[x];
	}
	
	cout <<endl; 
	cout << "Jumlah Bayar\t\t\t : " << "Rp. " << jumlah <<endl; 
	cout << "Pajak(10%)\t\t\t : " << "Rp. " << pajak() <<endl;
	cout << "Total Bayar\t\t\t : " << "Rp. " << total() <<endl; 
	cout << "Bayar\t\t\t\t : " << "Rp. "; cin >> bayar;
	while (bayar < total())
	{
		minus = total() - bayar;
		cout << "Sisa Belum Dibayar\t\t : Rp. " << minus << endl;
		cout << "Bayar Kembali\t\t\t : " << "Rp. "; cin >> kurang;
		bayar += kurang;
	}
		cout << "Kembali\t\t\t\t : " << "Rp. " << bayar - total() <<endl; 
		cout <<endl;
		cout << "Ingin Membeli lagi? [Y/T]\t : "; cin >> ya; 
		cout <<endl;
		jumlah = 0;
	}
	while (ya == "Y" || ya == "y");
	cout <<endl; 
	closeHeader();
	
	return 0; 
}
