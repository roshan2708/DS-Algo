#include <iostream>
#include <vector>
#include <map>
using namespace std;
bool ContainsDuplicate(vector<int>& nums){
    unordered_map<int,int> hash;
    for(int i=0;i<nums.size();i++){
        hash[nums[i]]++;
        if(hash[nums[i]]>1) return true;
    }
    
   
    return false;
    
}
int main(){
    vector<int> nums = {1,2,3,4,5,6,7};
    int res=0;
    cout<<ContainsDuplicate(nums);
    return 0;
    
    
   

    

}
