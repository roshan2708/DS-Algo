#include <iostream>
#include <vector>
using namespace std;
vector<int> twoSum(vector<int>& nums, int& target){
    unordered_map<int,int> hash;
    for(int i=0;i<nums.size();i++){
        int complement = target-nums[i];
        if(hash.find(complement) != hash.end()){
            return {hash[complement],i};
        }
        hash[nums[i]]=i;

    }
     return {-1,-1};
}
int main() {
    vector<int> nums = {3,4,5,6};
    int target = 7;
    vector<int> res = twoSum(nums,target);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<endl;
    }
    return 0;

}