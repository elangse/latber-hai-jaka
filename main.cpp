#include <iostream>
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {	
	// perulangan while, agar aplikasi berjalan terus menerus
	while (true) {
		int pilih_menu = -1;
		int pendapatan_model;
		int gaji;
		int pendapatan_perjam;
		int jumlah_jam_kerja_sehari;
		
		int harga_barang_rupiah;
		float harga_barang_jam_kerja;
		int harga_barang_jam_kerja__jam;
		int harga_barang_jam_kerja__menit;
	
		cout<<"Selamat datang di Aplikasi Hai Jaka ( konverter HArga ke JAm KerjA)"<<endl;
		cout<<"Setiap kapan penggajian kamu terima?"<<endl;
		cout<<"0. keluar aplikasi"<<endl;
		cout<<"1. setiap hari"<<endl;
		cout<<"2. setiap minggu"<<endl;
		cout<<"3. setiap bulan"<<endl;
		cout<<"Model pendapatanku: ";
		cin>>pendapatan_model;
		cout<<endl;
		
		if (pendapatan_model == 0) {
			// keluar dari while - loop
			break;
		}
		if (pendapatan_model < 1 || pendapatan_model > 3) {
			cout<<"Maaf, inputan tidak dikenali."<<endl<<endl;
			// kembali ke awal loop
			continue;
		}
		cout<<"Berapa jam kamu bekerja dalam sehari?"<<endl;
		cout<<"(jam): ";
		cin>>jumlah_jam_kerja_sehari;
		cout<<endl;
		
		cout<<"Berapa banyak uang yang kamu diterima saat digaji?"<<endl;
		cout<<"(Rp.): ";
		cin>>gaji;
		cout<<endl;
		
		cout<<"Berapa harga barang yang mau dikonvert ke jam?"<<endl;
		cout<<"(Rp.): ";
		cin>>harga_barang_rupiah;
		cout<<endl;
		
		// mengecek model pendapatan. FYI: switch lebih mudah untuk tipe data angka.
		switch (pendapatan_model) {
			case 1: // if (pendapatan_model == 1)
				pendapatan_perjam = gaji / jumlah_jam_kerja_sehari;	
			break;
			case 2: // else if (pendapatan_model == 2)
				pendapatan_perjam = gaji / (jumlah_jam_kerja_sehari * 6);
			break;
			case 3: // else if (pendapatan_model == 3)
				pendapatan_perjam = gaji / (jumlah_jam_kerja_sehari * 27);
			break;
		}
		// menambah (float) agar penghitungan di-cast menjadi float / desimal
		// cast = diarahkan / diubah.
		harga_barang_jam_kerja = (float) harga_barang_rupiah / pendapatan_perjam;
		harga_barang_jam_kerja__jam = floor(harga_barang_jam_kerja);
		harga_barang_jam_kerja__menit = (harga_barang_jam_kerja - harga_barang_jam_kerja__jam) * 60;
		
		cout<<endl;
		cout<<"===== Hasil ====="<<endl;
		cout<<"Pendapatan perjam: Rp. "<<pendapatan_perjam<<endl;
		cout<<"Harga barang (rupiah): Rp. "<<harga_barang_rupiah<<endl;
		cout<<"Harga barang (jam kerja): ";
		cout<<harga_barang_jam_kerja__jam<<" jam ";
		cout<<harga_barang_jam_kerja__menit<<" menit"<<endl;
		cout<<endl;
		
		cout<<"Lakukan konvert lagi?"<<endl;
		cout<<"1. Ya"<<endl;
		cout<<"2. Tidak"<<endl;
		cin>>pilih_menu;
		
		if (pilih_menu == 1) {
			// clear console
			system("CLS");
		} else {
			// keluar dari while - loop
			break;
		}
	}
}