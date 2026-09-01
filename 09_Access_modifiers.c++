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

    float getMarks(){     // GETTER 
        return marks;
    }

    void setMarks(float m){      // SETTER
        marks = m;
    }

private:
    float marks;
};
int main(){
    Student p1(10, "OP", 34.6);

    // DISPLAY FUN OUTPUT
    p1.display();

    // GETMARKS FUN OUTPUT
    cout<<p1.getMarks()<<endl;

    p1.setMarks(90.90);

}
