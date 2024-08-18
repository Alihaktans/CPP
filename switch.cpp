#include <iostream>

using namespace std;

int main(){
    int month;
    cout << "Ayi girin (1-12)";
    cin >> month;

    switch (month)
    {
        case 1:
            cout << "Ocak";
            break;
        case 2:
            cout << "Subat";
            break;
        case 3:
            cout << "Mart";
            break;
        case 4:
            cout << "Nisan";
            break;
        case 5:
            cout << "Mayis";
            break;
        case 6:
            cout << "Haziran";
            break;

        case 7:
            cout << "Temmuz";
            break;
        case 8:
            cout << "Agustos";
            break;
        case 9:
            cout << "Eylul";
            break;
        case 10:
            cout << "Ekim";
            break;
        case 11:
            cout << "Kasim";
            break;
        case 12:
            cout << "Aralik";
            break;
    default:
    cout << "Bu kacinci ay";
        break;
    }
}