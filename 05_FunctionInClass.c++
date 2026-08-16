#include <iostream>
using namespace std;
class Onepeace{
public:
    string name;
    string weapon;
    int bounty;
    string power;

    Onepeace(string n, string w, string p, int b){
        name = n;
        weapon = w;
        power = p;
        bounty = b;
    }

    void print(){
        cout<<"Name : "<<name<<"\n"<<"Weapon : "<<weapon<<"\n"<<"Power : "<<power<<"\n"<<"Bounty : "<<bounty<<endl<<endl;
    }
};


int main(){
    Onepeace o1("Monkey D Luffy", "Gum Gum Fruit", "Nika", 3000000);
    Onepeace o2("Rowanowa Zoro", "3 Swords", "Haki with Swords", 250000);
    Onepeace o3("Sanji", "Legs", "Kings Haki", 2400000);

    o1.print();
    o2.print();
    o3.print();

}