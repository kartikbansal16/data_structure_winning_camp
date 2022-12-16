#include <iostream>

using namespace std;

int main()
{
    int n=6;
    int arr[6]={7,12,6,4,13,5};
    int count[6]={0};
    
    //to find the number of larger elements in i+1 th index to n-1 index wrt to i th index. 
    // {2 1 1 2 0 0}
    
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]<arr[j]){
                count[i]++;
            }
        }
    }
    
    for(int i=0; i<n;i++){
        cout<<count[i]<<" ";
    }

    return 0;
}
