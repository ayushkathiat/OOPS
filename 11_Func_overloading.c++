#include <bits/stdc++.h>
using namespace std;
class OverLoading{
public:
    void sum(int a, int b){
        cout<<a+b<<endl;
    }

    void sum(int a, int b, int c){
        cout<<a+b+c<<endl;
    }

    void sum(string a, string b){
        cout<<a+b<<endl;
    }
};
int main(){
    OverLoading o;
    o.sum(12, 3);
    o.sum(12, 2, 1);
    o.sum("Ayush","Kathait");
}