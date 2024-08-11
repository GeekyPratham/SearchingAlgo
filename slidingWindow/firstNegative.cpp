// by brute force 
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr[]={2,-3,4,4,-7,-1,4,-2,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    vector<int> ans(n-k+1);
    for(int i=0;i<=n-k;i++){
        int j = i;
        while(j<i+k){
            if(arr[j]<0){
                ans[i]=arr[j];
                break;
            }
            j++;
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}