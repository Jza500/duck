/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
#include <iostream>
#include <string>
using namespace std;

string Bounty500M(int z){
    if (z > 500000000)
    {
        return "Your character = Jinbe";
    }else return "Your character = Franky";
}

string Bounty1_1B(int n){
    if (n > 1100000000)
    {
        return "Your character = Zoro";
    }else return "Your character = Sanji";
}

int main(){
    int age;
    float height;
    int bounty;

    cout << "Enter your age: ";
    cin >> age;
    if (age <= 25)
    {
        cout << "Enter your height: ";
        cin >> height;
        if (height < 100)
        {
        cout << "Your character = Chopper";
        }else if (height <180)
        {
        cout << "Your character = Usopp";
        }else {
            cout << "Enter your bounty: ";
            cin >> bounty;
            cout << Bounty1_1B(bounty);
        }

    }else if (age <= 60)
    {
        cout << "Enter your bounty: ";
        cin >> bounty;
        cout << Bounty500M(bounty);
    }else cout << "Your character = Brook";
    
}