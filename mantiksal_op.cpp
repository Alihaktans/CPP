#include <iostream>
using namespace std;
int yas ; 
bool erkek_mi = true;
int main (){
    cout << "Yasin kac:";
    cin >> yas;
    if (yas >= 18 && erkek_mi == true){
        cout << "Siteye Girilebilir";
    }
    else if(yas < 18 || erkek_mi == false){
        cout << "Siteye giremezsiniz";
    }
}