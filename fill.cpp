#include <iostream>
using namespace std;
int main(){
    const int size = 99;
    string foods[size];
    fill(foods, foods + (size/3), "pizza");
    fill(foods + (size/3), foods + (size/3)*2, "KEBAB");
    fill(foods + (size/3)*2, foods + size, "Hamburger");
    for (string foods : foods)
    {
        cout << foods <<'\n';
    }
    
}