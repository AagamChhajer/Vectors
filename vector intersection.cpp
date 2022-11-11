#include <iostream>
 #include <vector>
 #include <algorithm>
 #include <climits>
 using namespace std;
 int main(){ 
        vector<int> ans,nums1,nums2;
        int n,m,input;
        cout << " Number of elements for 1st vector : " << endl;
        cin >> n;
        cout << "Enter elements of 1st vector : " << endl;
        for(int i = 0;i < n;i++){
            cin >> input;
            nums1.push_back(input);
        }
         cout << " Number of elements for 2nd vector : " << endl;
        cin >> m;
        cout << "Enter elements of 2st vector : " << endl;
        for(int i = 0;i < m;i++){
            cin >> input;
            nums2.push_back(input);
        }
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        for(int i=0;i<nums1.size()-1;i++){
            for(int j = 0;j < nums2.size()-1;j++){
                if(nums1[i] == nums2[j]){ 
                ans.push_back(nums1[i]);
                nums2[j] = INT_MIN;
                break;
                }
            }
        }
        cout << "Intersection of the both vectors are : " ;
        for(const int &op : ans){  
         cout << op << " ";
        }
    cout << endl;
 }