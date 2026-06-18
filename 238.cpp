#include<iostream>
using namespace std;
int main()
{
    int nums[4]={1,2,3,4};
    int n=sizeof(nums)/sizeof(int);
    int ans[n];
    /*
    O(n) but the constraints and division is used in this 
    
    for(int i=1;i<n;i++)
    {
        ans*=nums[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans/nums[i]<<",";
    }
        */
    /*
    O(n^2)

    for(int i=0;i<n;i++)
    {
        int prod=1;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                prod*=nums[j];
            }
        }
        ans[i]=prod;
       cout<<ans[i]<<",";
    }
       */
    //prefix
    int prefix[n];
    prefix[0]=1;
    for(int i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]*nums[i-1];
    }
    int suffix[n];
    suffix[n-1]=1;
    for(int i=n-2;i>=0;i--){
        suffix[i]=suffix[i+1]*nums[i+1];
    }

    for(int i=0;i<n;i++)
    {
        ans[i]=prefix[i]*suffix[i];
        cout<<ans[i]<<endl;
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

/*
Here the time complexity is good but the space complexity is worst
O(n)

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,1);
        vector<int> prefix(n,1);
        vector<int> suffix(n,1);

        for(int i=1;i<n;i++)
        {
            prefix[i]=prefix[i-1]*nums[i-1];
        }
        for(int i=n-2;i>=0;i--)
        {
            suffix[i]=suffix[i+1]*nums[i+1];
        }
        for(int i=0;i<n;i++)
        {
            ans[i]=prefix[i]*suffix[i];
        }
        return ans;
    }
};

*/

/*
Time : O(n)
Space : O(1)

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,1);
        int prefix=1,suffix=1;

        for(int i=1;i<n;i++)
        {
            ans[i]=ans[i-1]*nums[i-1];
        }
        for(int i=n-2;i>=0;i--)
        {
            suffix*=nums[i+1];
            ans[i]*=suffix;
        }
        return ans;
    }
};

*/