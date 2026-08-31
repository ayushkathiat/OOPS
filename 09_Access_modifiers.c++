#include <bits/stdc++.h>
using namespace std;
class Student{
public:
    int rno;
    string name;
    Student(int r, string n, float m){
        rno = r;
        name = n; 
        marks = m;
    }

    void display(){
        cout<<rno<<endl;
        cout<<name<<endl;
        cout<<marks<<endl;
    }
private:
    float marks;
};
int main(){
    Student p1(10, "OP", 34.6);
    p1.display();
}