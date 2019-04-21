
#include<iostream>
#include<conio.h>

using namespace :: std;

int pangkat (int a, int b)
    {int hasil=1;
    for (int i=1;i<=b;i++)
    {
       hasil=hasil*a;
         }
    return hasil;
    }

int main()
{
    int i,j;


    cout<<"+==========================+";
    cout<<"\n|PROGRAM MENGHITUNG PANGKAT|"<<endl;
    cout<<"+==========================+";
    cout<<endl<<"\n1. Masukkan Angka   : " ;
    cin>>i;
    cout<<endl<<"2. Masukkan Pangkat : ";
    cin>>j;
    cout<<endl<<"3. Hasilnya = ";
    cout<<pangkat(i,j);



getch();
}

