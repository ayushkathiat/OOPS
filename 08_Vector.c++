#include <bits/stdc++.h>
using namespace std;
class Vector{
public:
    int size;
    int capacity;
    int* arr;

    Vector(){
        size = 0;
        capacity = 1;
        arr = new int[1];
    }

    void add(int ele){
        if(size == capacity){
            capacity *= 2;
            int* arr2 = new int[capacity];
            for(int i = 0; i < size; i++){
                arr2[i] = arr[i];
            }
            arr = arr2;
        }
        arr[size++] = ele;
    }

    void print(){
        for(int i = 0; i < size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    int get(int idx){
        if(size==0){
            cout<<"Array is empty"<<endl;
        }
        if(idx>=size){
            cout<<"Invalid index"<<endl;
        }
        return arr[idx];
    }

    void remove(){
        if(size==0){
            cout<<"Array is empty";
        }
        size--;
    }
};
int main(){
    Vector v;
    cout<<v.size<<" "<<v.capacity<<" "<<endl;

    v.add(10);
    v.print();
    cout<<v.size<<" "<<v.capacity<<" "<<endl;
    
    v.add(100);
    v.print();
    cout<<v.size<<" "<<v.capacity<<" "<<endl;

    v.add(1000);
    v.print();
    cout<<v.size<<" "<<v.capacity<<" "<<endl;

    v.remove();
    v.print();
    
}