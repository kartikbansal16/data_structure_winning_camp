#include<iostream>

using namespace std;

int main()
{
    int arr[5]= {1,2,3,4,5}; 
    
    int k = 3; // 5 1 2 3 4 -- 4 5 1 2 3 -- 3 4 5 1 2
    
    while(k--){
        int temp = arr[4];
        
        for(int i=4;i>=1;i--){
            arr[i] = arr[i-1];
        }
    
        arr[0] = temp;
    
    }
    
    for(int i=0; i<5; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
