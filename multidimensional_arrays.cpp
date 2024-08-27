#include <iostream>
using namespace std;

int main(){
    string cars [][3] = {{"Mustang", "Escape", "F-150"},
                        {"Corvette", "Equinox", "Silverado"},
                        {"Challenger", "Durango", "Ram 1500"}};
        cout << "\n\n ****************\n";
        cout << cars[0][0] << " ";
        cout << cars[0][1] << " ";
        cout << cars[0][2] << "\n";
        cout << cars[1][0] << " ";
        cout << cars[1][1] << " ";
        cout << cars[1][2] << "\n";
        cout << cars[2][0] << " ";
        cout << cars[2][1] << " ";
        cout << cars[2][2] << "\n";
        cout << "******************\n\n";
    return 0;
}