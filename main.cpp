#include <iostream> 
#include <conio.h>
#include "odejmowanie.h"
#include "zmienne.h"
#include "dzielenie.h"
#include "mnozenie.h"
#include "dodawanie.h"
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
	case '/':
		cout<<dzielenie(a,b);
		break;
	case '*':
		cout<<mnozenie(a,b);
		break;
	case '+':
		cout<<dodawanie(a,b);
		break;
 	 default:
        	cout<<"zły znak";
       		 break;
    }
}
