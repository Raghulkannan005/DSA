#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    int target = arr[0];
    int secondTarget = arr[0];

    for(int i=0; i<n; i++){
        if(arr[i] >= target){
            target = arr[i];
        }
    }
    for(int j=0; j<n; j++){
        if(arr[j] >= secondTarget && arr[j] < target){
            secondTarget = arr[j];
        }
    }

    cout<<target<<endl;
    cout<<secondTarget;

    return 0;
}
