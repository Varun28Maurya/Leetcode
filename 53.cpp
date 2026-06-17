#include<iostream>
using namespace std;
int main()
{
    //Kadane's Algorithm 
    int k[8]={1,-5,-3,4,9,-11,7,-6};
    int kn=(sizeof(k)/sizeof(int));
    int kc=0;
    int km=0;


    for(int i=0;i<kn;i++)
    {
        kc+=k[i];
        km=max(kc,km);
        if(kc<0)
        {
            kc=0;
        }
    }
    cout<<km;
    return 0;
}

/*
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();

        int nc = 0;
        int nm = nums[0];

        for (int i = 0; i < n; i++) {
            nc += nums[i];
            nm = max(nm, nc);

            if (nc < 0) {
                nc = 0;
            }
        }

        return nm;
    }
};
*/