#include<iostream>
using namespace std;
int main()
{
    int prices[6]={7,1,5,3,6,4};
    int n=sizeof(prices)/sizeof(int);
    int bestbuy=prices[0],maxProfit=0;
    for(int i=0;i<n;i++)
    {
        if(prices[i]>bestbuy)
        {
            maxProfit=max(maxProfit,prices[i]-bestbuy);
        }
        bestbuy=min(bestbuy,prices[i]);
    }
    cout<<maxProfit;
    return 0;
}

/*
O(n)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestbuy=prices[0],maxProfit=0;
        int n=prices.size();
        for(int i=0;i<n;i++)
        {
            if(prices[i]>bestbuy)
            {
                maxProfit=max(maxProfit,prices[i]-bestbuy);
            }
            bestbuy=min(bestbuy,prices[i]);
        }
        return maxProfit;
    }
};


*/