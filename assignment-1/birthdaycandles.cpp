#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    int count=0;
    int arr[n];
    int max= INT_MIN;
    
    for (int i=0; i < n ; i++){
        cin >> arr[i];
    }
    for (int i=0; i< n ; i++){
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    for (int i=0; i< n ; i++){
        if (arr[i]==max){
            
            count++;
        } 
        
    }
    cout << count << endl;
    
    return 0;
}
