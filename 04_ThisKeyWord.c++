#include <iostream>
using namespace std;
class Cricketer{
    public:
    string name;
    int runs;

    Cricketer(string name, int runs){
        this->name = name;
        this->runs = runs;
    }

    void display(){
        cout<<name<<" "<<runs<<endl;
    }
};
int main(){
    Cricketer s1("Virat Kohli", 13000);
    s1.display();
    Cricketer s2("rohit sharma", 1000);
    s2.display();

}