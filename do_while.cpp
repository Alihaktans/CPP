#include <iostream>
using namespace std;

int main (){

    int number;
    
    do{
        cout << "Please enter a POZITIVE #: ";
        cin >> number;

    }while (number < 0);
        cout << "The number is :" << number;
    
}