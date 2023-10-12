#include<iostream>
using namespace std;

class calculator{
    int a;
    int b;
    public:
    void input(){
        cout<<"Enter first number-->";
        cin>>a;
        cout<<"Enter second number-->";
        cin>>b;
    }
    int sum(){
        return (a+b);
    }
    void display(){
        cout<<sum();
    }
};
int main(){
    calculator a;
    a.input();
    a.display();
    cout<<endl;
}