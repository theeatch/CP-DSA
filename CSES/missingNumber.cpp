/*You are given all numbers between 1,2,…,n except one. Your task is to find the missing number*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int64_t n;
    cin>>n; //array length
    int arr[n-1];
    //enter the array
    for (int i = 0; i < n-1; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+(n-1));
    for (int64_t i = 1; i <= n; i++)
    {
        if(i!=arr[i-1]){
            cout<<i;
            break;
        }
    }
    
}