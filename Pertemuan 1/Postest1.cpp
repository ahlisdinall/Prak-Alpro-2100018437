#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main(){
    int x1,x2,y1,y2,jarak;
    cout<<"Masukkan A1 : ";
    cin>>x1;
    cout<<"Masukkan A2 : ";
    cin>>y1;
    cout<<"Masukkan B1 : ";
    cin>>x2;
    cout<<"Masukkan B2 : ";
    cin>>y2;
    jarak = (sqrt(((x2-x1)*(x2-x1))+((y2-y1))*(y2-y1)));
    cout<<"Jarak antara dua titik adalah : "<<jarak;
}
