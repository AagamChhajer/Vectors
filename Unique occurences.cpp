#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
 int main(){
    int n,count = 1;
    vector<int> temp;
    cin >> n;
    int arr[n];
    for(int i =0;i<n;i++){  
        cin >> arr[i];
    }
    sort(arr,arr+n);
 
    for(int i =0;i<n;i++){
        if(arr[i] == arr[i+1]){
            count++;
        }
        else {
            temp.push_back(count);
            count = 1;
         }
     }
     count = 0;
      for(int i =0;i<temp.size();i++){
        if(temp[i] == temp[i+1]){
           count ++;
        }
      }
    (count)?cout << "False" : cout << "True" << endl;
 }
 
 