#include <iostream>
using namespace std;

char mengulang;
int harga, total_harga, pilihan, tkt_vip, hrg_vip, tkt_reguler, hrg_reguler, tkt_ekonomi, hrg_eko;
long diskonan, after_diskon;
string kategori;



void vip(){
	cout<<"Jumlah Tiket VIP: ";
	cin>>tkt_vip;
	
	if(tkt_vip >= 5){
		cout<<"INVALID!"<<endl;
		return vip();
	}
	
	harga=1000000;
	hrg_vip=tkt_vip*harga;
}

void reguler(){
	cout<<"Jumlah Tiket Reguler: ";
	cin>>tkt_reguler;
	
	if(tkt_reguler >= 5){
		cout<<"INVALID!"<<endl;
		return reguler();
	}
	
	harga=500000;
	hrg_reguler=tkt_reguler*harga;
}

void ekonomi(){
	cout<<"Jumlah Tiket Ekonomi: ";
	cin>>tkt_ekonomi;
	
	if(tkt_ekonomi >= 5){
		cout<<"INVALID!"<<endl;
		return ekonomi();
	}
	
	harga=250000;
	hrg_eko=tkt_ekonomi*harga;
}


void total(){
	total_harga = hrg_eko + hrg_reguler + hrg_vip;
}


void diskon(){
	if (total_harga > 2000000){
		diskonan=total_harga*0.15;
		after_diskon=total_harga-diskonan;
	}else{
		after_diskon=total_harga-diskonan;
	}
}

void rincian_transaksi(){
	cout<<"\nRINCIAN TRANSAKSI"<<endl;
	cout<<"Harga Tiket VIP: Rp1000.000"<<endl;
	cout<<"Jumlah Tiket VIP: "<<tkt_vip<<endl;
	cout<<"Harga Tiket Reguler: Rp500.000"<<endl;
	cout<<"Jumlah Tiket Reguler: "<<tkt_reguler<<endl;
	cout<<"Harga Tiket Ekonomi: Rp250.000"<<endl;
	cout<<"Jumlah Tiket Ekonomi: "<<tkt_ekonomi<<endl;
	cout<<"Total Harga Sebelum Diskon: "<<total_harga<<endl;
	cout<<"Diskon: "<<diskonan<<endl;
	cout<<"Total Harga Setelah Diskon: "<<after_diskon<<endl;
	
}


int main(){
	
do {
	
	cout<<" =====KATEGORI TIKET====="<<endl;
	cout<<"| VIP     | Rp1000.000 |"<<endl;
	cout<<"| Reguler | Rp500.000  |"<<endl;
	cout<<"| Ekonomi | Rp250.000  |"<<endl;
	
	vip();
	reguler();
	ekonomi();
	total();
	diskon();
	rincian_transaksi();
	
	cout<<"Apakah Ingin Melakukan Transaksi lagi[y/n]?: ";
	cin>>mengulang;
}while(mengulang == 'y' || mengulang == 'Y');
}
