#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    cin>>k;
    int max = -100;
    for(int i=0;i<n-k;i++){
        int sum = 0;
        for(int j=i;j<i+k;j++){
            sum+=arr[j];
        }
        if(sum>max) max = sum;

    }
    cout<<max;
}