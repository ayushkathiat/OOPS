#include <iostream>
using namespace std;
class Student{   //stduent is the new data type 
public:
    string name;
    int rno;
    float cgpa;

    // DEFAULT CONSTRUCTOR
    Student(){

    }

    //CONSTRUCTORS(PARAMETARIZED)
    Student(string s, int r, float g){
        name = s;
        rno = r; 
        cgpa = g;
    } 

    Student(string s, int r){
        name = s;
        rno = r;
    }
};
int main(){
    Student s1("Kathait", 8, 9.0);
    Student s2("Hacker", 18, 10);

    Student s3;
    s3.name = "OP";
    s3.rno = 12;
    s3.cgpa = 9;

    Student s4("CODDER", 13);

    Student s5 = s1;    // DEEP COPY
    s5.name = "Ayush";

    Student s6(s1);    // copy constructor
    s6.name = "AK";

    cout<<s1.name<<" "<<s1.rno<<" "<<s1.cgpa<<endl;
    cout<<s2.name<<" "<<s2.rno<<" "<<s2.cgpa<<endl;
    cout<<s3.name<<" "<<s3.rno<<" "<<s3.cgpa<<endl;
    cout<<s4.name<<" "<<s4.rno<<endl;
    cout<<s5.name<<" "<<s5.rno<<" "<<s5.cgpa<<endl;
    cout<<s6.name<<" "<<s6.rno<<" "<<s6.cgpa<<endl;

} 
