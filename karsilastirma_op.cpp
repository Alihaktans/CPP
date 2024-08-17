#include <iostream>
using namespace std;
int yas ; 
int main (){
    cout << "Yasin kac:";
    cin >> yas;
    if (yas >= 18){
        cout << "Siteye Girilebilir";
    }
    else if(yas < 0){
        cout << "Dogduktan sonra bekleriz";
    }
    else {
        cout << "Giremezsin buyude gel";
    }
}