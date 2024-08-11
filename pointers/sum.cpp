#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter 1st no: ";
    cin>>a;
    cout<<"enter 2nd no: ";
    cin>>b;

    int* p1 = &a;
    int* p2 = &b;

   

    cout<<*p1 + *p2;
}