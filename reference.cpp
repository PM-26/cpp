#include <iostream>
using namespace std;

int sum(int &a, int &b){
    return a+b;
}
int main(){
    string reference="Hello World!";
    cout<<"Variable Address of refrence variable:"<<(&reference)<<endl;

    int a=5;
    int b=10;
    cout<<"Sum using reference variable:"<<sum(a,b)<<endl;

    int *ptr;
    
    ptr=&a;
    cout<<"Value at ptr:"<<ptr<<endl;
    cout<<"Value at *ptr:"<<*ptr<<endl;

}