#include <bits/stdc++.h>
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
void change(Cricketer* s){         // CHANGE USING PTR 
    s->name = "OP";   //(*s).name = "OP";
}
int main(){
    Cricketer s1("Virat Kohli", 13000);
    Cricketer s2("rohit sharma", 1000);

    // Cricketer* p1 = &s1;
    // cout<<p1->name<<endl;
    // cout<<p1->runs<<endl;

    // p1->name = "VK";
    // cout<<p1->name<<endl;

    cout<< s1.name <<endl;
    change(&s1);
    cout<< s1.name <<endl;

} 
     