#include<iostream>
using namespace std;
int area(int a){
    return (a*a);
}
int area(int a, int b){
    return (a*b);
}
int area(int h, int b){
    return (1/2)*h*b;
}
int area(int r){
    return (22/7)*r*r;
}

int main(){
    cout<<"Press 1 to find area of Square.";
    cout<<"Press 2 to find area of Rectangle.";
    cout<<"Press 3 to find area of Circle";
    cout<<"Press 4 to find area of Triangle.";
    int choice;
    cin>>choice;
    if (choice==1){
        cout<<"Enter length of side->";
        int a;
        cin>>a;
        cout<<"Area of Square="<<area(a);
    }
    else if (choice==2){
        cout<<"Enter length->";
        int a;
        cin>>a;
        cout<<"Enter breadth->";
        int b;
        cin>>b;
        cout<<"Area of Rectangle="<<area(a,b);
    }
    else if (choice==3){
        cout<<"Enter radius->";
        int r;
        cin>>r;
        cout<<"Area of Square="<<area(r);
    }
    else if (choice==4){
        cout<<"Enter height->";
        int h;
        cin>>h;
        cout<<"Enter breadth->";
        int b;
        cin>>b;
        cout<<"Area of Rectangle="<<area(h,b);
    }
    return 0;
}