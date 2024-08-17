#include <iostream>
using namespace std;

string okul_adi = "ARGEM Lisesi";
int kisi_sayisi = 230;
int yeni_kisi_sayisi = 290;
const double pi = 3.14;
bool var_ogrenci = true;

int main (){
    var_ogrenci = false;
    kisi_sayisi = yeni_kisi_sayisi;
        // cout << "ARGEM Lisesi";
        // cout << "ARGEM Lisesi kaç kişi?";
        // cout << "ARGEM Lisesi nerede?";
        // cout << "ARGEM Lisesi öğrenci sayısı;";
    cout << okul_adi << "" << endl;
    cout << okul_adi << " kac kisi?" << endl;
    cout << kisi_sayisi << endl;
    cout << okul_adi << " nerede?" << endl;
    cout << okul_adi << " ogrenci sayisi;" <<endl;
    cout << "Pi sayisi :" << pi << endl;
    cout << var_ogrenci << endl;
}