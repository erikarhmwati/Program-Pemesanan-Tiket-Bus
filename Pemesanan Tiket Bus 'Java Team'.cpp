#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <string>
#include <stdlib.h>

using namespace std;
char nama[25],alamat[40],iden[20], no[15],jk;
int menu;

void judul();
void registrasi();
void tujuan();
void jenis();
void keberangkatan();
void tampilan();
void harga();
void kembali();

main(){
    system("COLOR 5F");
    int tj,jns,jam;
    int harga;
    char ulang;
    string kode;
    int bt;
    int admin,total;
    string jurusan;
    string jns_bus;

//getchar();
int i;
char ch;
cout << "==============================================================================\n";
cout << "           SELAMAT DATANG DI APLIKASI PEMESANAN TIKET AGEN JAVA \n";
cout << "                       MITRA SETIA PERJALANAN ANDA\n";
cout << "                   Khusus keberangkatan dari Karawang\n";
cout << "==============================================================================\n\n";
    for (i=1; i<=3; i++) {
       string user = "";
       string pass = "";
       cout << "Username : "; cin >> user;
       cout << "Password : ";
            ch = _getch();
            while(ch != 13){//character 13 is enter
            pass.push_back(ch);
            cout << '*';
            ch = _getch();
            }

       if (user == "risna" && pass == "152" || user == "erika" && pass == "153")
    {
    system("cls");
    judul();                    //fungsi judul
    tampilan();                     //fungsi menu utama
    tujuan();                        //fungsi tujuan

    pilihan:
    cout<<"\n\t\tMasukkan Pilihan : ";cin>>tj;
    if (tj==1)
    {
        jurusan="Karawang-Magelang";
    }
    else if(tj==2)
    {
        jurusan="Karawang-Solo";
    }
    else if(tj==3)
    {
        jurusan="Karawang-Semarang";
    }
    else if(tj==4)
    {
        jurusan="Karawang-Surabaya";
    }
    else if(tj==5)
    {
        jurusan="Karawang-Cirebon";
    }
    else
    {
        cout<<"\n\t\t Masukkan Salah, ingin ulangi (Y/N) : "; cin>>ulang;
        if(ulang=='Y' || ulang=='y')
        {
            goto pilihan;
        }
        else
            return 0;
    }

    jns:
    system("cls");
    jenis();
    cout<<"\n\t\tMasukkan Pilihan : ";cin>>jns;
        if(jns==1)
        {
            cout<<"\n\t\tBatas Maksimum Kursi adalah 60\n";
            jns_bus="Ekonomi";
        }
        else if(jns==2)
        {
            cout<<"\n\t\tBatas Maksimum Kursi adalah 48\n";
            jns_bus="Patas";
        }
        else if(jns==3)
        {
            cout<<"\n\t\tBatas Maksimum Kursi adalah 32\n";
            jns_bus="Eksekutif";
        }
        else
        {
            cout<<"\n\t\tSalah memasukkan jenis bus";
            cout<<"\n\t\t Masukkan Salah, ingin ulangi (Y/N) : "; cin>>ulang;
                if(ulang=='Y' || ulang=='y')
                {
                    goto jns;
                }
            else
                return 0;
        }

    tiket:
    cout<<"\n\t\tJumlah tiket yang dibeli maksimum 5"<<endl;
    cout<<"\n\t\tJumlah tiket yang dibeli : "; cin>>bt;
            if(jns==1){
            if (bt>5){
                cout<<"Melebihi jumlah pembelian tiket";}}

            else if(jns==2){
                if (bt>5){
                cout<<"Melebihi jumlah pembelian tiket";}}

            else if(jns==3){
                if(bt>5){
                cout<<"Melebihi jumlah pembelian tiket";}}

            else{
                cout<<"\n\t\t Masukkan Salah, ingin ulangi (Y/N) : "; cin>>ulang;
                if(ulang=='Y' || ulang=='y')
                    goto tiket;
                else
                return 0;
            }

//perulangan dan array
    char nakur[bt][15];
    int nokur[bt];
        for(int i=1;i<=bt;i++){
            cekkursi:
            cout<<"\n\t\tNomor Kursi ke-"<<i<<" : "; cin>>nokur[i];
            for(int j=1;j<i;j++){
                if(nokur[i]==nokur[j]){
                    cout<<"\n\t\t Maaf kursi telah diisi,";
                    goto cekkursi;
                }
            }
            cout<<"\n\t\t----------------------------------------";}
    system("cls");


    keberangkatan();
    jam:
    cout<<"\n\t\tMasukkan Pilihan : ";cin>>jam;
    system("cls");

    if(jns==1){
    if(tj==1  && jam==1){
        harga=100000;
        kode="JM-eko1";}
        else if(tj==1  && jam==2){
            harga=110000;
            kode="JM-eko2";}
        else if(tj==2 && jam==1){
            harga=115000;
            kode="JS-eko1";}
        else if(tj==2 && jam==2){
            harga=120000;
            kode="JS-eko2";}
        else if(tj==3 &&jam==1){
            harga=120000;
            kode="JSe-eko1";}
        else if(tj==3 && jam==2){
            harga=150000;
            kode="JSe-eko2";}
        else if(tj==4 && jam==1){
            harga=110000;
            kode="JK-eko1";}
        else if(tj==4 && jam==2){
            harga=120000;
            kode="JK-eko2";}
        else if(tj==5 && jam==1){
            harga=55000;
            kode="JP-eko1";}
        else if(tj==5 && jam==2){
            harga=60000;
            kode="JP-eko2";}
    }
    else if(jns==2){
        if(tj==1  && jam==1){
        harga=105000;
        kode="JM-pt1";}
        else if(tj==1  && jam==2){
            harga=115000;
            kode="JM-pt2";}
        else if(tj==2 && jam==1){
            harga=120000;
            kode="JS-pt1";}
        else if(tj==2 && jam==2){
            harga=125000;
            kode="JS-pt2";}
        else if(tj==3 &&jam==1){
            harga=125000;
            kode="JSe-pt1";}
        else if(tj==3 && jam==2){
            harga=135000;
            kode="JSe-pt2";}
        else if(tj==4 && jam==1){
            harga=115000;
            kode="JK-pt1";}
        else if(tj==4 && jam==2){
            harga=125000;
            kode="JK-pt2";}
        else if(tj==5 && jam==1){
            harga=60000;
            kode="JP-pt1";}
        else if(tj==5 && jam==2){
            harga=65000;
            kode="JP-pt2";}
    }
    else if(jns==3){
        if(tj==1  && jam==1){
        harga=130000;
        kode="JM-ex1";}
        else if(tj==1  && jam==2){
            harga=135000;
            kode="JM-ex2";}
        else if(tj==2 && jam==1){
            harga=140000;
            kode="JS-pt1";}
        else if(tj==2 && jam==2){
            harga=145000;
            kode="JS-ex2";}
        else if(tj==3 &&jam==1){
            harga=150000;
            kode="JSe-ex1";}
        else if(tj==3 && jam==2){
            harga=155000;
            kode="JSe-ex2";}
        else if(tj==4 && jam==1){
            harga=140000;
            kode="JK-ex1";}
        else if(tj==4 && jam==2){
            harga=145000;
            kode="JK-ex2";}
        else if(tj==5 && jam==1){
            harga=80000;
            kode="JP-ex1";}
        else if(tj==5 && jam==2){
            harga=85000;
            kode="JP-ex2";}
        }
    else
        {
            cout<<"\n\t\t Masukkan Salah, ingin ulangi (Y/N) : "; cin>>ulang;
            if(ulang=='Y' || ulang=='y')
            goto jam;
            else
            return 0;
        }


    admin=5000;
    total=bt*harga+admin;
    int byr, kmbl;
    system("cls");

    judul();
    cout<<"\n\n\n\t\tTiket Informasi";
    cout<<"\n\t---------------------------------------------------";
    cout<<"\n\t---------------------------------------------------";

cout<<"\n\t\tNama Pemesan                : "<<nama;
cout<<"\n\t\tJenis Bus                   : "<<jns_bus;
cout<<"\n\t\tKode Bus                    : "<<kode;
cout<<"\n\t\tJurusan                     : "<<jurusan;
for(int i=1;i<=bt;i++)
{
cout<<"\n\t\tNo. Tempat Duduk ke-"<<i<<"       : "<<nokur[i];
}
cout<<"\n\t\tHarga Tiket                 : Rp "<<harga;
cout<<"\n\t\tJumlah Tiket                : "<<bt;
cout<<"\n\t\tBiaya Administrasi          : Rp "<<admin;
cout<<"\n\t\tTotal Bayar                 : Rp "<<total;
cout<<"\n\t\tJumlah yang dibayarkan      : Rp ";cin>>byr;
if(byr>total){
        kmbl=byr-total;
        cout<<"\n\t\tKembalian                   : Rp "<<kmbl;
        cout<<"\n\t-------------------------------------------------------";
}
else if(byr<total){
    cout<<"\n\t\tUang Tidak Cukup";
    kembali();
    cout<<"\n\t-------------------------------------------------------";
}
else if(byr==total){
    cout<<"\n\t-------------------------------------------------------";
}


    return 0;
      } else {
         cout << "\n\nMaaf Username & Password anda salah.\n\n";
      }
   }
   while (i <= 3);

   cout << "Anda telah 3x memasukan Username & Password yang salah.\n";
   cout << "Mohon maaf akun anda kami blokir untuk sementara. \n";
   cout << "Silahkan hubungi kami melalui e-mail support@email.com, Terima Kasih..\n";
}

void judul()
{

cout<<"\n\t======================================================";
cout<<"\n\t\t\t  AGEN TIKET BUS JAVA ";
cout<<"\n\t\t     MITRA SETIA PERJALANAN ANDA";
cout<<"\n\t\t  Keberangkatan Khusus Dari Karawang";
cout<<"\n\t======================================================";
cout<<"\n\t======================================================";
}

void registrasi()
{
    //char nama[25],alamat[40],iden[20], no[15];
    string mail,nakur,nana;
    int nokur;
    cin.ignore();
cout<<"\n\n\n\n\t\tForm Registrasi calon penumpang";
cout<<"\n\t------------------------------------------------------";
cout<<"\n\t------------------------------------------------------";
cout<<"\n\tNama Pemesan\t\t: "; gets(nama);//getline(cin,nana);cin.getline(nama,(sizeof(nama)));
cout<<"\n\tAlamat\t\t\t: "; gets(alamat);
cout<<"\n\tIdentitas\t\t: "; gets(iden);
jenkel:
cout<<"\n\tJenis Kelamin(L/P)\t: "; cin>>jk;
if(jk == 76 or jk ==80 or jk == 108 or jk ==112)
goto lanjut;
else
goto jenkel;
lanjut:
cout<<"\n\tNo. HP\t\t\t: "; cin>>no;
cout<<"\n\t------------------------------------------------------";

system("cls");
}

void tujuan()
{
cout<<"\n\n\n\n\t\tSilahkan Pilih jurusan bus yang anda inginkan";
cout<<"\n\t\t----------------------------------------------------";
cout<<"\n\t\t\tNo|  jurusan             |";
cout<<"\n\t\t------------------------------------------------";
cout<<"\n\t\t\t1.|  Karawang-Magelang   |";
cout<<"\n\t\t\t2.|  Karawang-Solo       |";
cout<<"\n\t\t\t3.|  Karawang-Semarang   |";
cout<<"\n\t\t\t4.|  Karawang-Surabaya   |";
cout<<"\n\t\t\t5.|  Karawang-Cirebon    |";
cout<<"\n\t\t------------------------------------------------";
}

void jenis()
{
cout<<"\n\n\n\n\t\tSilahkan Pilih jenis bus yang anda inginkan";
cout<<"\n\t\t------------------------------------------------";
cout<<"\n\t\tNo.   |Kode Bus    |     Jenis Bus      |";
cout<<"\n\t\t------------------------------------------------";
cout<<"\n\t\t1.    |Eko.        |     Ekonomi        |";
cout<<"\n\t\t2.    |Pt.         |     Patas          |";
cout<<"\n\t\t3.    |Eks.        |     Eksekutif      |";
cout<<"\n\t\t------------------------------------------------";
}

void keberangkatan()
{
cout<<"\n\n\n\n\t\tSilahkan Pilih jenis bus yang anda inginkan";
cout<<"\n\t\t------------------------------------------------";
cout<<"\n\t\tNo    | Waktu Keberangkatan    | ";
cout<<"\n\t\t------------------------------------------------";
cout<<"\n\t\t1.    |    Malam               | ";
cout<<"\n\t\t2.    |    Siang               |";
cout<<"\n\t\t------------------------------------------------";
}

void tampilan()
{

    cout<<"\n\n\t\t 1.Pemesanan Tiket Bus";
    cout<<"\n\t\t 2.Info Harga Tiket ";
    cout<<"\n\t\t 3.Keluar ";
    cout<<"\n\t\t Masukkan Pilihan : ";
    cin>>menu;
    if(menu==1)
    {
        system("cls");
        judul();
        registrasi();
    }
    else if(menu==2)
    {
        system("cls");
        judul();
        harga();
    }
    else if(menu==3)
    {
        exit(0);
    }
    else
    {
        cout<<"\n\t\tInputan Salah, silahkan kembali ke menu !";
        kembali();
        system("cls");
        cin.ignore();
    }

}

void harga()
{
    char a;
    cout<<"\n\t 1.Ekonomi";
    cout<<"\n\t    - Siang Hari : ";
    cout<<"\n\t        - Karawang-Magelang  : Rp 110.000 ";
    cout<<"\n\t        - Karawang-Solo      : Rp 120.000 ";
    cout<<"\n\t        - Karawang-Semarang  : Rp 130.000";
    cout<<"\n\t        - Karawang-Surabaya  : Rp 120.000";
    cout<<"\n\t        - Karawang-Cirebon   : Rp 60.000";
    cout<<"\n\t    - Malam Hari : ";
    cout<<"\n\t        - Karawang-Magelang  : Rp 100.000 ";
    cout<<"\n\t        - Karawang-Solo      : Rp 115.000 ";
    cout<<"\n\t        - Karawang-Cilacap   : Rp 120.000";
    cout<<"\n\t        - Karawang-Surabaya  : Rp 110.000";
    cout<<"\n\t        - Karawang-Cirebon   : Rp 55.000";
    cout<<"\n\t 2.Patas";
    cout<<"\n\t    - Siang Hari : ";
    cout<<"\n\t        - Karawang-Magelang  : Rp 115.000 ";
    cout<<"\n\t        - Karawang-Solo      : Rp 125.000 ";
    cout<<"\n\t        - Karawang-Semarang  : Rp 135.000";
    cout<<"\n\t        - Karawang-Surabaya  : Rp 125.000";
    cout<<"\n\t        - Karawang-Cirebon   : Rp 65.000";
    cout<<"\n\t    - Malam Hari : ";
    cout<<"\n\t        - Karawang-Magelang  : Rp 105.000 ";
    cout<<"\n\t        - Karawang-Solo      : Rp 120.000 ";
    cout<<"\n\t        - Karawang-Cilacap   : Rp 125.000";
    cout<<"\n\t        - Karawang-Surabaya  : Rp 115.000";
    cout<<"\n\t        - Karawang-Cirebon   : Rp 60.000";
    cout<<"\n\t 3.Eksekutif";
    cout<<"\n\t    - Siang Hari : ";
    cout<<"\n\t        - Karawang-Magelang  : Rp 135.000 ";
    cout<<"\n\t        - Karawang-Solo      : Rp 145.000 ";
    cout<<"\n\t        - Karawang-Semarang  : Rp 155.000";
    cout<<"\n\t        - Karawang-Surabaya  : Rp 145.000";
    cout<<"\n\t        - Karawang-Cirebon   : Rp 85.000";
    cout<<"\n\t    - Malam Hari : ";
    cout<<"\n\t        - Karawang-Magelang  : Rp 130.000 ";
    cout<<"\n\t        - Karawang-Solo      : Rp 140.000 ";
    cout<<"\n\t        - Karawang-Cilacap   : Rp 150.000";
    cout<<"\n\t        - Karawang-Surabaya  : Rp 140.000";
    cout<<"\n\t        - Karawang-Cirebon   : Rp 80.000";
    kembali();
}

void kembali()
{
    char lg;
    cout<<"\n\t\tKembali ke menu utama[Y/N]?";cin>>lg;
    if (lg=='Y'||lg=='y')
        {
            system ("cls");
            judul();
            tampilan();
        }
    else if (lg=='N'||lg=='n')
    {
        exit(0);
    }
}
