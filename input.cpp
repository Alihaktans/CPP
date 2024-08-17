#include <iostream>
using namespace std;
string isim;
int main(){
    cout << "Kullanici Adi:";
    //cin >> isim;
    getline(cin, isim);
    cout << "Merhaba, " << isim << endl;
}