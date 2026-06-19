#include<iostream>
using namespace std;
int main()
{
    int nums[]={1,1,2,3,3,4,4,8,8};
    int n=sizeof(nums)/sizeof(int),st=0,end=n-1;
    if(n%2==0)
    {
        cout<<"The single element doesnt exist";
    }
    else 
    {
        while(st<=end)
    {
        int mid= st + ((end-st)/2);
        if(mid==0)
{
    cout<<nums[mid];
    return 0;
}

if(mid==n-1)
{
    cout<<nums[mid];
    return 0;
}
        if(nums[mid-1] != nums[mid] && nums[mid+1] != nums[mid])
        {
            cout << nums[mid];
            return 0;
        }
        if(mid%2==0)
        {
            if(nums[mid-1] == nums[mid])
            {
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        else {
            if(nums[mid-1]==nums[mid])
            {
                st=mid+1;
            }
            else {
                end=mid-1;
            }
        }
    }
    }
    return 0;
}

/*
O(log n)

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int st=0,end=n-1;

        if(n==1) return nums[0];

        while(st<=end)
        {
            int mid=st + ((end-st)/2);
            if(mid==0 && nums[0] !=nums[1]) return nums[mid];
            if(nums[mid-1] != nums[mid] && nums[mid]!=nums[mid+1]) return nums[mid];
            if(mid==n-1 && nums[n-1]!=nums[n-2]) return nums[mid];
            
            if(mid%2==0)
            {
                if(nums[mid-1]==nums[mid])
                {
                    end=mid-1;
                }
                else
                {
                    st=mid+1;
                }
            }
            else {
                if(nums[mid-1]==nums[mid])
                {
                    st=mid+1;
                }
                else
                {
                    end=mid-1;
                }
            }
        }
        return -1;
    }
};

*/