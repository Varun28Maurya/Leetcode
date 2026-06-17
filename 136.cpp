#include<iostream>
using namespace std;
int main(){
    int n[5]={1,2,2,3,1};
    int a=0;
    for(int i=0;i<(sizeof(n)/sizeof(int));i++)
    {
        a^=n[i];
    }
    cout<<a;
    return 0;
}

/*
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int a=0;
        for(int i=0;i<n;i++)
        {
            a^=nums[i];
        }
        return a;
    }
};
*/