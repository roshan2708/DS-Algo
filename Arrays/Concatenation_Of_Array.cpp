#include <iostream>
#include <vector>
using namespace std;
void Concatination(vector<int>& nums){
    int n= nums.size();
    for(int i=0;i<n;i++){
        nums.push_back(nums[i]);
    }
}
int main(){
    vector<int> nums = {1,4,1,2,3,45,3,5,3,63,5,32,6,72,6,7,3,7,3,7,7,3,5,2,5};
    
     Concatination(nums);
     for(int i=0;i<nums.size();i++){
        cout<< nums[i]<<endl;
     }
   
   
    return 0;
}
