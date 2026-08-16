#include <iostream>
using namespace std;
class car{
public:
    string name;
    int price;
    int seats;
};
  
void print(car c){      // DEEP COPY
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<endl;

}
void change(car& c){    // SHALLOW COPY
    c.name = "Audi";
}
int main(){

    car c1;
    c1.name = "TATA PUNCH";
    c1.price = 700000;
    c1.seats = 5;
    
    car c2;
    c2.name = "TOTOYA FORTUNER";
    c2.price = 3700000;
    c2.seats = 8;

    change(c1);
    print(c1);
    print(c2);
    


}