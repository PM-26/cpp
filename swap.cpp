#include<iostream>
using namespace std;

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int a;
    int b;
    cout<<"Enter first number:"<<endl;
    cin>>a;
    cout<<"Enter second number:"<<endl;
    cin>>b;
    
    swap(a,b);
    cout<<"Value of first number after swap:"<<a<<endl<<"Value of second after swap:"<<b<<endl;
}