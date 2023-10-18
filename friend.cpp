// If a function is defined as a friend function in C++, then the protected and private data of a class can be accessed using the function.

// By using the keyword friend compiler knows the given function is a friend function.

// For accessing the data, the declaration of a friend function should be done inside the body of a class starting with the keyword friend.

#include<iostream>
using namespace std;
class box{
    int length;
    public:
    box():length(10){}
    friend void plusTen(box &b){
        b.length+=10;
    }
    int printLength(){
        return length;
    }
};
int main(){
    box a;
    plusTen(a);
    cout<<"Length of box after increasing="<<a.printLength();
    return 0;
}


