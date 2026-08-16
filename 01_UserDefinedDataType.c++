#include <iostream>
using namespace std;
class Student{   //stduent is the new data type 
public:
    string name;
    int rno;
    float cgpa;
};
int main(){
    Student s1;
    s1.name = "Kathait";
    s1.rno = 8;
    s1.cgpa = 7.5;

    Student s2;
    s2.name = "Hcaker";
    s2.rno = 19;
    s2.cgpa = 9.0; 

    cout<<s1.name<<" "<<s1.rno<<" "<<s1.cgpa<<endl;
    cout<<s2.name<<" "<<s2.rno<<" "<<s2.cgpa<<endl;
} 