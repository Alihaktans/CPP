#include <iostream>
using namespace std;

int main(){
    string students[] = {"Pikachu", "Bulbasaur", "Charmander", "Squirtle"};

    for (int i = 0; i < sizeof(students) / sizeof(string); i++)
    {
        cout << students[i] <<"\n";
    }
    

    return 0;
}