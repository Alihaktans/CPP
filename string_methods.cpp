#include <iostream>
using namespace std;

int main(){

    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    // if(name.empty()){
    //     cout << "You didn't enter your name.";
    // }
    //     else{

    //         if(name.length() > 12){
    //         cout << "Your name can't be over the 12 charecters" <<endl;
    //     }

    // else{
    //     cout << "Welcome " << name;
    // }
    // }


    // name.clear();
    // cout << "Hello, " << name;

    // name.append("@gmail.com");
    // cout << "Your username is now " << name;

    // cout << name.at(0);
    // name.insert(3, "@");
    name.erase(0, 3);

    // cout << name.find(' ');
    cout << name;


    return 0;
}