#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        int sum =0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
        }
        cout<<sum<<endl;
    }

    return 0;
}