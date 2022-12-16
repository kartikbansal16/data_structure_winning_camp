#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=6;
    int arr[6]={7,12,6,4,13,5};
    vector<int> v;
    
    //to find the number of larger elements in i+1 th index to n-1 index wrt to i th index. 
    // {2 1 1 2 0 0}
    
    for(int i=0; i<n-1; i++){
        bool flag =false;
        for(int j=i+1; j<n; j++){
            if(arr[i]<arr[j]){
                v.push_back(arr[j]);
                flag=true;
            }
        }
        if(flag == false){
                v.push_back(0);
        }
    }
     v.push_back(0);
    
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    
    return 0;
}
