#include <iostream>
using namespace std;

namespace first
{
    int x = 1;
} // namespace first

namespace second
{
    int x = 2;
} // namespace second

int main (){

    int x = 0;

    cout << x << '\n';
    cout << first::x << '\n';
    cout << second::x << '\n';
}