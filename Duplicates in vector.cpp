#include <iostream>
 #include <vector>
 #include <algorithm>
 using namespace std;
 int main(){ 
        vector<int> ans,nums;
        int n,input;
        cout << " Number of elements : " << endl;
        cin >> n;
        for(int i = 0;i < n;i++){
            cin >> input;
            nums.push_back(input);
        }

        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1])
                ans.push_back(nums[i]);
        }
        cout << "Duplicates are : " ;
        for(const int &op : ans){  
    
        cout << op << " ";
    }
    cout << endl;
 }