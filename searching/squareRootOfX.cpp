#include <iostream>
using namespace std;
int main(){
    int arr[]  = {1,2,3,4,6};
    int n = 5;
    int lo=1;
    int hi = n-2;
    int target;
    bool flag = false;
    cin>>target;

    // finding lower bound
    while(lo<=hi){
        int mid = lo + (hi- lo)/2;
        if(arr[mid]==target) {
            flag = true;
            cout<<"lower bound is"<<arr[mid-1]<<endl;
            break;
        }
        else if(arr[mid]>target) hi=mid-1;
        else lo = mid +1;

    }
    if(flag== false) cout<<"lower bound is"<<arr[hi]<<endl;

    //finding upper bound;
    while(lo<=hi){
        int mid = lo + (hi- lo)/2;
        if(arr[mid]==target) {
            flag = true;
            cout<<"upper bound is"<<arr[mid+1]<<endl;
            break;
        }
        else if(arr[mid]>target) hi=mid-1;
        else lo = mid +1;

    }
    if(flag== false) cout<<"upper bound is"<<arr[lo]<<endl;
}