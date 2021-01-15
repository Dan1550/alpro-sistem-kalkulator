#include<iostream>
#include<math.h>
using namespace std;
int a,b,c,d,e,f,g,o;
void Pertama();
void Pertama()
{
     cout<<"\nMasukkan Nilai Pertama = "; cin>>a;
     cout<<"Masukkan Nilai Kedua = "; cin>>b;
}
void Penjumlahan();
void Penjumlahan()
{
     Pertama();
     c=a+b;
     cout<<"\nHasil dari penjumlahan : "<<c<<endl;
}
void pengurangan();
void pengurangan()
{
     Pertama();
     d=a-b;
     cout<<"\nHasil dari Pengurangan : "<<d<<endl;
}
void perkalian();
void perkalian()
{
     Pertama();
     e=a*b;
     cout<<"\nHasil dari Perkalian : "<<e<<endl;
}
void pembagian();
void pembagian()
{
     Pertama();
     f=(a/b);
     cout<<"\nHasil dari Pembagian :"<<f<<endl;
}
void pangkat();
void pangkat()
{
    Pertama();
    g=pow(a, b);
    cout<<"\nHasil dari Pangkat : "<<g<<endl;
}
main()
{
        cout << "===ALFARDHAN ADITYA RESNA=== \n";
        cout << "      ===20102226===    \n";
      cout<<"\tKALKULATOR"<<endl;
      cout<<"=========================="<<endl;
      cout<<"1. PENJUMLAHAN"<<endl;
      cout<<"2. PENGURANGAN"<<endl;
      cout<<"3. PERKALIAN"<<endl;
      cout<<"4. PEMBAGIAN"<<endl;
      cout<<"5. PANGKAT"<<endl;
      cout<<"==========================="<<endl;
      cout<<"\n=> MASUKKAN PILIHAN = ";
      cin>>o;
switch (o)
{
       case 1: Penjumlahan(); break;
       case 2: pengurangan(); break;
       case 3: perkalian(); break;
       case 4: pembagian(); break;
       case 5: pangkat(); break;
       default : cout<<"Pilihan Yang Anda Pilih Tidak Ada"<<endl;break;
}
system("pause");
return 0;
}
