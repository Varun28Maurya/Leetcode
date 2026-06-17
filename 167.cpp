#include<iostream>
#include<vector>
using namespace std;

vector<int> Pairsum(vector<int> nums,int target){
    vector<int> ans;
    int n=nums.size();
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if(nums[i]+nums[j]<target)
        {
            i++;
        }
        else if(nums[i]+nums[j]>target)
        {
            j--;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }

    }
    return ans;
}

int main()
{
    vector<int> nums={2,7,11,15};
    int target=13;
    vector<int> ans=Pairsum(nums,target);
    cout<<ans[0]<<ans[1];
}




//O(n)
/*
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size() - 1;

        while (i < j) {
            int sum = numbers[i] + numbers[j];

            if (sum < target) {
                i++;
            }
            else if (sum > target) {
                j--;
            }
            else {
                return {i + 1, j + 1};  // LeetCode 167 uses 1-based indexing
            }
        }

        return {};
    }
};
*/