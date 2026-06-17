#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int eight[9] = {1,8,6,2,5,4,8,3,7};
    int n = sizeof(eight) / sizeof(int);

    int ans = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            int height = min(eight[i], eight[j]);
            int width = j - i;
            int area = height * width;

            ans = max(ans, area);
        }
    }

    cout << ans;
    return 0;
}

/*
O(n^2)

class Solution {
public:
int maxArea(vector<int>& height) {
int ans = 0;
int n = height.size();

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            int h = min(height[i], height[j]);
            int width = j - i;
            int area = h * width;

            ans = max(ans, area);
        }
    }

    return ans;
}

};


*/

/*
O(n)

class Solution {
public:
int maxArea(vector<int>& height) {
    int n=height.size(),lp=0,rp=n-1,maxWater=0;
    while(lp<rp)
    {
        int w=rp-lp;
        int h=min(height[lp],height[rp]);
        int area=h*w;
        maxWater=max(maxWater,area);
        height[lp]<height[rp] ? lp++ : rp--;
    }
    return maxWater;
}
};

*/