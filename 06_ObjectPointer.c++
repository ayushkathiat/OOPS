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

};
int main(){
    Cricketer s1("Virat Kohli", 13000);
    Cricketer s2("rohit sharma", 1000);

    Cricketer* p1 = &s1;
    cout<<p1->name<<endl;
    cout<<p1->runs<<endl;

    p1->name = "VK";
    cout<<p1->name<<endl;


}