#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter num:";
    cin>>n;
     string s = to_string(n);

        int l = 0, r = s.size() - 1;

        while (l < r) {
            if (s[l] != s[r])
                return false;
            l++;
            r--;
        }
    return 0;
}

/*

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        long long rev = 0;
        int original = x;

        while (x > 0) {
            rev = rev * 10 + (x % 10);
            x /= 10;
        }

        return original == rev;
    }
};



class Solution {
public:
    bool isPalindrome(int x) {
        long long number = 0;
        int y = x;
        if(x < 0){
            return false;
        }
        if(x >= 0 && x < 10){
            return true;
        }
        while(x != 0){
            int valid = x % 10;
            x /= 10;
            number = (number * 10) + valid;
        }
        if(number == y){
            return true;
        }
        return false;
    }
};
*/