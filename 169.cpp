#include<iostream>
using namespace std;
int main()
{
    //This is Moore's Voting Algorithm with more safer option with if the element doesnt exist it will return -1
    int nums[5]={1,2,3,4,5};
    int n=sizeof(nums)/sizeof(int),freq=0,ans=0;
    for(int i=0;i<n;i++)
    {
        if(freq==0)
        {
            ans=nums[i];
        }
        if(ans==nums[i])
        {
            freq++;
        }
        else{
            freq--;
        }
    }
    
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]==ans)
        {
            count++;
        }
    }
    if(count>n/2)
        {
            cout<<ans;
        }
        else{
            cout<<-1;
        }
    return 0;
}


/*
Brute Force Approach
O(n)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        for(int val:nums)
        {
            int freq=0;
            for(int el:nums)
        {
            if(el==val)
            {
                freq++;
            }

        }
        if(freq>n/2)
        {
            return val;
        }
        }
        return 0;
    }
};

*/

/*
Optimize swapping 
O(n logn)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();

        sort(nums.begin(),nums.end());

        int freq=1;
        int ans=nums[0];
        for(int i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1])
            {
                freq++;

            }
            else{
                freq=1,ans=nums[i];
            }
            if(freq>n/2)
            {
                return ans;
            }
        }
        return ans;
    }
};


*/

/*
Moore's Voting Alogrithm 
O(n)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int freq=0,ans=0;
        for(int i=0;i<n;i++)
        {
            if(freq==0)
            {
                ans=nums[i];
            }
            if(ans==nums[i])
            {
                freq++;
            }
            else{
                freq--;
        }
        }
        return ans;
    }
};

*/