#include<iostream>
using namespace std;
int main()
{
    int nums[4]={1,2,3,4};
    int n=sizeof(nums)/sizeof(int);
    int ans=nums[0];
    for(int i=1;i<n;i++)
    {
        ans*=nums[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans/nums[i]<<",";
    }
    return 0;
}


/*
O(n^2)

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(nums.size(),1);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                {
                    ans[i]*=nums[j];
                }
            }
        }
        return ans;
    }
};

*/