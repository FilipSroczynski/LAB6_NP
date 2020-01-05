#include <iostream> 
#include <conio.h>
#include "odejmowanie.h"
#include "zmienne.h"
using namespace std;

int main{
    cout<<"Podaj dwie liczby: ";
    cin >> a >> b;
    cout<<"Podaj znak + lub - lub * lub / : ";
    cin >> znak;
    znak=getch();
    switch(znak)
    {
        case '-':
        cout<<odejmowanie(a,b);
        break;
     default:
        cout<<"zły znak";
        break;
    }
}