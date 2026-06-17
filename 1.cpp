#include<iostream>
using namespace std;
int main()
{
    int nums[3] = {3,2,4};
int target = 6;

int n = sizeof(nums)/sizeof(int);
int i = 0;
int j = n - 1;
while(i<j)
{
    int sum=nums[i]+nums[j];
    if(sum<target)
    {
        i++;
    }
    else if()

}
    return 0;
}