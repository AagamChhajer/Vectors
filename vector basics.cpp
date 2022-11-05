#include <iostream>
#include <vector>
using namespace std;

int main(){
vector<int> num {1, 2, 3};
vector<int> num2 = {1,2,3,4};
vector<int> num3(3,4); 
num.push_back(4);

num.at(3) = 4;
cout << num[3]<< endl;

num2.pop_back();

for(const int &i : num2){
    cout << i << endl;
}
}