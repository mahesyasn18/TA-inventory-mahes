#include<iostream>
#include<cstdlib>

using namespace std;


int lys=0;
int chtt=0;
int ksk=0;
int pllws=0;
int prnls=0;
int CC=0;
int UM=0;
int MM=0;
int ocean=0;
int pps=0;

int pil,tambah,kurang;
char tmbhmkn,tmbhmnm,krngmkn,krngmnm;

int Pemasukkanbarang ()
{
	system("cls");
	cout<<"================================================================================="<<endl;
	cout<<"                                  PEMASUKKAN BARANG                              "<<endl;	
	cout<<"================================================================================="<<endl;
	cout<<"1. Makanan Ringan"<<endl;
	cout<<"2. Minuman"<<endl;
	cout<<"================================================================================="<<endl;
	cout<<"Masukkan pilihan Anda (1/2) :";cin>>pil;
	cout<<"================================================================================="<<endl;
	if (pil==1)
	{
		cout<<"A. LAYS        "<<endl;
		cout<<"B. CHITATO     "<<endl;
		cout<<"C. KUSUKA      "<<endl;
		cout<<"D. PILLOWS     "<<endl;
		cout<<"E. PRINGLES    "<<endl;
		cout<<"Masukkan Barang yang akan di tambahkan (A/B/C/D/E) : ";cin>>tmbhmkn;
		if (tmbhmkn=='A'||'a')
		{
			cout<<"Masukkan jumlah yang akan ditambahkan : ";cin>>tambah;
			lys=lys+tambah;
		}
		else if (tmbhmkn=='B'||'b')
		{
			cout<<"Masukkan jumlah yang akan ditambahkan : ";cin>>tambah;
			chtt=chtt+tambah;
		}
		else if (tmbhmkn=='C'||'c')
		{
			cout<<"Masukkan jumlah yang akan ditambahkan : ";cin>>tambah;
			ksk=ksk+tambah;
		}
		else if (tmbhmkn=='D'||'d')
		{
			cout<<"Masukkan jumlah yang akan ditambahkan : ";cin>>tambah;
			pllws=pllws+tambah;
		}
		else if (tmbhmkn=='E'||'e')
		{
			cout<<"Masukkan jumlah yang akan ditambahkan : ";cin>>tambah;
			prnls=prnls+tambah;
		}
		else
		{
			cout<<"maaf input yang anda masukkan salah "<<endl;
		}
		
	}
	else if(pil==2)
	{
		cout<<"A. COCA COLA   "<<endl;
		cout<<"B. ULTRA MILK  "<<endl;
		cout<<"C. MINUTE MAID "<<endl;
		cout<<"D. OCEANA      "<<endl;
		cout<<"E. PEPSI       "<<endl;
		cout<<"================================================================================="<<endl;
		cout<<"Masukkan Barang yang akan di tambahkan (A/B/C/D/E) : ";cin>>tmbhmnm;
		if (tmbhmkn=='A'||'a')
		{
			cout<<"Masukkan jumlah yang akan ditambahkan : ";cin>>tambah;
			CC=CC+tambah;
		}
		else if (tmbhmkn=='B'||'b')
		{
			cout<<"Masukkan jumlah yang akan ditambahkan : ";cin>>tambah;
			UM=UM+tambah;
		}
		else if (tmbhmkn=='C'||'c')
		{
			cout<<"Masukkan jumlah yang akan ditambahkan : ";cin>>tambah;
			MM=MM+tambah;
		}
		else if (tmbhmkn=='D'||'d')
		{
			cout<<"Masukkan jumlah yang akan ditambahkan : ";cin>>tambah;
			ocean=ocean+tambah;
		}
		else if (tmbhmkn=='E'||'e')
		{
			cout<<"Masukkan jumlah yang akan ditambahkan : ";cin>>tambah;
			pps=pps+tambah;
		}
		else
		{
			cout<<"maaf input yang anda masukkan salah "<<endl;
		}
	}
	else
	{
		cout<<"maaf input yang anda masukkan salah "<<endl;
	}	

}
int Pengeluaran ()
{
	system("cls");
	cout<<"================================================================================="<<endl;
	cout<<"                                 PENGELUARAN BARANG                              "<<endl;	
	cout<<"================================================================================="<<endl;
	cout<<"1. Makanan Ringan"<<endl;
	cout<<"2. Minuman"<<endl;
	cout<<"================================================================================="<<endl;
	cout<<"Masukkan pilihan Anda (1/2) :";cin>>pil;
	cout<<"================================================================================="<<endl;
	if (pil==1)
	{
		cout<<"A. LAYS        "<<endl;
		cout<<"B. CHITATO     "<<endl;
		cout<<"C. KUSUKA      "<<endl;
		cout<<"D. PILLOWS     "<<endl;
		cout<<"E. PRINGLES    "<<endl;
		cout<<"Masukkan Barang yang akan di kurangkan (A/B/C/D/E) : ";cin>>krngmkn;
		if (krngmkn=='A'||'a')
		{
			cout<<"Masukkan jumlah yang akan dikurangkan : ";cin>>kurang;
			cout<<"================================================================================="<<endl;
			if (lys<kurang)
			{
				cout<<"stok barang kurang"<<endl;
				exit;
			}
			else if (lys>=kurang)
			{
				lys=lys-kurang;
				cout<<"barang berhasil dikurangkan"<<endl;
			}
			
		}
		else if (krngmkn=='B'||'b')
		{
			cout<<"Masukkan jumlah yang akan dikurangkan : ";cin>>kurang;
			cout<<"================================================================================="<<endl;
			if (chtt<kurang)
			{
				cout<<"stok barang kurang"<<endl;
				exit;
			}
			else if (chtt>=kurang)
			{
				chtt=chtt-kurang;
				cout<<"barang berhasil dikurangkan"<<endl;
			}
			
		}
		else if (krngmkn=='C'||'c')
		{
			cout<<"Masukkan jumlah yang akan dikurangkan : ";cin>>kurang;
			cout<<"================================================================================="<<endl;
			if (ksk<kurang)
			{
				cout<<"stok barang kurang"<<endl;
				exit;
			}
			else if (ksk>=kurang)
			{
				ksk=ksk-kurang;
			}
			
		}
		else if (krngmkn=='D'||'d')
		{
			cout<<"Masukkan jumlah yang akan dikurangkan : ";cin>>kurang;
			cout<<"================================================================================="<<endl;
			if (pllws<kurang)
			{
				cout<<"stok barang kurang"<<endl;
				exit;
			}
			else if (pllws>=kurang)
			{
				pllws=pllws-kurang;
				cout<<"barang berhasil dikurangkan"<<endl;
			}
			
		}
		else if (krngmkn=='E'||'e')
		{
			cout<<"Masukkan jumlah yang akan dikurangkan : ";cin>>kurang;
			cout<<"================================================================================="<<endl;
			if (prnls<kurang)
			{
				cout<<"stok barang kurang"<<endl;
				exit;
			}
			else if (prnls>=kurang)
			{
				prnls=prnls-kurang;
			}
			
		}
		else
		{
			cout<<"maaf input yang anda masukkan salah "<<endl;
			exit;
		}
	}
	else if(pil==2)
	{
		cout<<"A. COCA COLA   "<<endl;
		cout<<"B. ULTRA MILK  "<<endl;
		cout<<"C. MINUTE MAID "<<endl;
		cout<<"D. OCEANA      "<<endl;
		cout<<"E. PEPSI       "<<endl;
		cout<<"Masukkan Barang yang akan di kurangkan (A/B/C/D/E) : ";cin>>krngmnm;
		if (krngmnm=='A'||'a')
		{
			cout<<"Masukkan jumlah yang akan kurangkan : ";cin>>kurang;
			cout<<"================================================================================="<<endl;
			if (CC<kurang)
			{
				cout<<"stok barang kurang"<<endl;
				exit;
			}
			else if (CC>=kurang)
			{
				CC=CC-kurang;
			}
		}
		else if (krngmnm=='B'||'b')
		{
			cout<<"Masukkan jumlah yang akan kurangkan : ";cin>>kurang;
			cout<<"================================================================================="<<endl;
			if (UM<kurang)
			{
				cout<<"stok barang kurang"<<endl;
				exit;
			}
			else if (UM>=kurang)
			{
				UM=UM-kurang;
			}
			
		}
		else if (krngmnm=='C'||'c')
		{
			cout<<"Masukkan jumlah yang akan kurangkan : ";cin>>kurang;
			cout<<"================================================================================="<<endl;
			if (MM<kurang)
			{
				cout<<"stok barang kurang"<<endl;
				exit;
			}
			else if (MM>=kurang)
			{
				MM=MM-kurang;
			}
			
		}
		else if (krngmnm=='D'||'d')
		{
			cout<<"Masukkan jumlah yang akan kurangkan : ";cin>>kurang;
			cout<<"================================================================================="<<endl;
			if (ocean<kurang)
			{
				cout<<"stok barang kurang"<<endl;
				exit;
			}
			else if (ocean>=kurang)
			{
				ocean=ocean-kurang;
			}

		}
		else if (krngmnm=='E'||'e')
		{
			cout<<"Masukkan jumlah yang akan kurangkan : ";cin>>kurang;
			cout<<"================================================================================="<<endl;
			if (pps<kurang)
			{
				cout<<"stok barang kurang"<<endl;
				exit;
			}
			else if (pps>=kurang)
			{
				pps=pps-kurang;
			}
			
		}
		else
		{
			cout<<"maaf input yang anda masukkan salah "<<endl;
		}
	}
	else
	{
		cout<<"maaf input yang anda masukkan salah "<<endl;
	}	

}
int lays ()
{
	return (lys);	
}
int chitato ()
{
	return (chtt);	
}
int kusuka ()
{
	return (ksk);	
}
int pillows ()
{
	return (pllws);
}
int pringles ()
{
	return (prnls);	
}
int cocacola ()
{
	return (CC);
}
int ultramilk ()
{
	return (UM);	
}
int minutemaid ()
{
	return (MM);
}
int oceana ()
{
	return (ocean);	
}
int pepsi ()
{
	return (pps);	
}

int main ()
{
int pilihan,keluar;
	char ulang;
	do
	{
		awal:
		system ("cls");
		
		cout<<"================================================================================="<<endl;
		cout<<"            APLIKASI MONITORING DATA PEMASUKAN DAN PENGELUARAN BARANG            "<<endl;
		cout<<"================================================================================="<<endl;
		cout<<"1. Pemasukkan Barang"<<endl;
		cout<<"2. Pengeluaran Barang"<<endl;
		cout<<"3. Cek Stok Barang"<<endl;
		cout<<"4. Keluar"<<endl;
		cout<<"================================================================================="<<endl;
		cout<<"Masukkan Pilihan Anda (1/2/3/4):";cin>>pilihan;
		cout<<"================================================================================="<<endl;
		if (pilihan==1)
		{
			Pemasukkanbarang ();
			cout<<"================================================================================="<<endl;
			cout<<"tekan 0 untuk kembali ke halaman depan "<<endl;
			cout<<"tekan 1 untuk mengakhiri "<<endl;   
			cout<<"================================================================================="<<endl;
			cout<<"pilihan :";cin>>keluar;
			cout<<"================================================================================="<<endl;
			if(keluar==0)
			{
				goto awal;
			}
			else if(keluar==1)
			{
				exit;
				system("cls");
			}
		}
		else if (pilihan==2)
		{
			Pengeluaran ();
			cout<<"================================================================================="<<endl;
			cout<<"tekan 0 untuk kembali ke halaman depan "<<endl;
			cout<<"tekan 1 untuk mengakhiri "<<endl;   
			cout<<"================================================================================="<<endl;
			cout<<"pilihan :";cin>>keluar;
			cout<<"================================================================================="<<endl;
			if(keluar==0)
			{
				goto awal;
			}
			else if(keluar==1)
			{
				exit;
				system("cls");
			}
		}
		else if (pilihan==3)
		{
			system("cls");
			cout<<"================================================================================="<<endl;
			cout<<"                                STOK BARANG YANG TERSEDIA                        "<<endl;
			cout<<"================================================================================="<<endl;
			cout<<"1. Makanan Ringan"<<endl;
			cout<<"   A. LAYS        : "<<lays ()<<endl;
			cout<<"   B. CHITATO     : "<<chitato ()<<endl;
			cout<<"   C. KUSUKA      : "<<kusuka ()<<endl;
			cout<<"   D. PILLOWS     : "<<pillows ()<<endl;
			cout<<"   E. PRINGLES    : "<<pringles ()<<endl;
			cout<<""<<endl;
			cout<<"2. Minuman"<<endl;
			cout<<"   A. COCA COLA   : "<<cocacola ()<<endl;
			cout<<"   B. ULTRA MILK  : "<<ultramilk ()<<endl;
			cout<<"   C. MINUTE MAID : "<<minutemaid ()<<endl;
			cout<<"   D. OCEANA      : "<<oceana ()<<endl;
			cout<<"   E. PEPSI       : "<<pepsi ()<<endl;
			cout<<"================================================================================="<<endl;
			cout<<"tekan 0 untuk kembali ke halaman depan "<<endl;
			cout<<"tekan 1 untuk mengakhiri "<<endl;   
			cout<<"================================================================================="<<endl;
			cout<<"pilihan :";cin>>keluar;
			cout<<"================================================================================="<<endl;
			if(keluar==0)
			{
				goto awal;
			}
			else if(keluar==1)
			{
				exit;
				system("cls");
			}
		}
		else if (pilihan==4)
		{
			exit;
			system ("cls");
		}
		else
		{
			cout<<"Maaf kode yang anda masukkan salah"<<endl;
		}
		
		cout<<"ingin memasukkan/mengeluarkan barang lagi (Y/N) :";cin>>ulang;
	}while (ulang=='Y'||ulang=='y');
	
	cout<<"================================================================================="<<endl;
	cout<<"                                     Terimakasih                                 "<<endl;
	cout<<"================================================================================="<<endl;
	
	return 0;
	system("pause");
}
