#include <iostream>
using namespace std;
int main(){
    int *ptr;
    int n;
    cout<<"Enter number of elements ->";
    cin>>n;
    int arr[n];

    ptr=arr;

    for (int i=0;i<n;i++){
        cout<<"Enter a number->";
        cin>>ptr[i];
    }
    for (int i=0;i<n;i++){
        cout<<i<<"->";
        cout<<ptr[i]<<endl;
    }

    return 0;
}