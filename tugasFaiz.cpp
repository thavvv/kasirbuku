#include <conio.h>
#include <iostream.h>
int main()
{
char kobar,buku[20],bns,beli,lagi, yt;
float totbay,jumbel,totbel,potongan,harga;
kembali:
clrscr();
cout<<""<<endl;
cout<<" Masukkan Kode Buku [1..3]  : ";cin>>kobar;
cout<<" Jumlah Pembelian Buku Anda : ";cin>>jumbel;
clrscr();
cout<<"\n ";
cout<<"\t * TOKO BUKU FAFAA03 * \n";
cout<<"\t    JL.Keadilan  No.16 \n";
cout<<" -------------------------------------------";
cout<<""<<endl;
cout<<" Nama Buku yang Anda Beli     :"<<buku;
switch(kobar)
 {
  case ('1') :
      {
      cout<<" Eleeced "<<buku;
      harga= 50000*jumbel ;
      }
      break;
  case ('2') :
      {
      cout<<" The beggining after the end "<<buku;
      harga= 35000*jumbel;
      }
      break;
  case ('3') :
      {
      cout<<" Lookism "<<buku;
      harga= 45000*jumbel;
      }
      break;
 }
cout<<endl;
cout<<" Harga Buku yang Anda Beli    : Rp."<<harga<<endl;
    if (jumbel >5)
  {
   potongan = 0.3*harga;
  }
  else
  {
   potongan= 0;
  }
cout<<" Jumlah Buku yang Anda Beli   : "<<jumbel<<endl;
cout<<" Total Harga                      : Rp."<<harga<<endl;
cout<<" Potongan Harga                : Rp."<<potongan<<endl;

totbay= harga-potongan;
cout<<" ---------------------------------------------"<<endl;
cout<<" Total Bayar                  : Rp."<<totbay<<endl;

cout<<" Bonus yang Anda Dapatkan     :"<<bns;
     if (jumbel >5)
  {
  cout<<"Note Book"<<bns;
  }
   else
  {
   cout<<"Maaf Tidak Dapat Bonus"<<bns;
  }
  cout<<endl;
cout<<" \n ";
cout<<"---------------------------------------------"<<endl;
cout<<"\t ** TERIMA KASIH **        ";
cout<<endl;
cout<<" Apa Mau Input Data Lagi ? [Y/T] : ";cin>>yt;
cout<<endl;
clrscr();
if(yt=='Y' || yt=='y')
{goto kembali;}
if(yt=='T' || yt=='t')
{goto selesai;}
selesai:
cout<<endl;
cout<<"\t*** Terima Kasih ***"<<endl;
getch();
}
