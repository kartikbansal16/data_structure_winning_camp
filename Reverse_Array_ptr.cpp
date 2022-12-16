#include <bits/stdc++.h>
using namespace std;

void swap_ele(int arr[], int n){
    int temp=0;
    for(int i=0; i<n/2 ;i++){
        //swap(*(arr + i), *(arr + n - 1 - i));
        temp = *(arr + i);
        *(arr + i)=*(arr + n-1 - i);
        *(arr + n-1 - i) = temp;
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    swap_ele(arr,n);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    

    return 0;
}
