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
    Cricketer* s2 = new Cricketer("rohit sharma", 1000);

    cout<<s1.name<<" "<<s1.runs<<endl;
    cout<<s2->name<<" "<<s2->runs<<endl;

} 