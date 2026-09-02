// // SINGLE INHERITNCE
// #include <bits/stdc++.h>
// using namespace std;
// class Vechile{   // PARENT CLASS
// public:
//     int topspeed;
//     float mileage;
//     int gears;
// };

// class Cars : public Vechile{   // CHILDCLASS / DERIVED CLASS
// public:
//     string name;
//     float bootspace;
//     int price;
// };

// class Bikes : public Vechile{   // CHILDCLASS / DERIVED CLASS
// public:
//     string name;
//     float bootspace;
//     int price;
// };

// class Trucks : public Vechile{   // CHILDCLASS / DERIVED CLASS
// public:
//     string name;
//     float bootspace;
//     int price;
// };

// int main(){

//     Cars a1;
//     a1.topspeed = 300;
//     a1.mileage = 12.5;
//     a1.gears = 6;
//     a1.bootspace = 25;
//     a1.name = "I8";

// }


// MULTILEVEL INHERITANCE
#include <bits/stdc++.h>
using namespace std;
class Vechile{
public:
    int topspeed;
    float milaege;
    int fule;
};

class TwoWheeler : public Vechile{
public:
    string name;
};

class Scooty : public TwoWheeler{
public:
    string name;
};

class Bike : public TwoWheeler{
public:
    string name;
};
int main(){
    
}


// MULTILEVEL INHERITANCE
#include <bits/stdc++.h>
using namespace std;
class Vechile{
public:
    int topspeed;
    int mileage;
    string fuel;
};
class FourWheeler : public Vechile{
public:
    int topspeed;
    int mileage;
    string fuel;
};
class Twowheeler : public Vechile{
public:
    int topspeed;
    int mileage;
    string fuel;
};
class Cars : public FourWheeler{
public:
    int topspeed;
    int mileage;
    string fuel;
};
int main(){

}


// MULTIPLE INHERETANCE
#include <bits/stdc++.h>
using namespace std;
class Hacker{
public:
    int experience;
    int domain;
};
class Codder{
public:
    int experience;
    int domain;
};
class Kathait : public Hacker, Codder{
public:
    int experience;
    int domain;
};
int main(){

}