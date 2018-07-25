class Solution {
public:
    int reverse(int x) {
        long rev_num = 0;
        while(x != 0) {
            rev_num = (rev_num * 10) + (x % 10);
            x = x / 10;
        }
        return rev_num > INT_MAX || rev_num < INT_MIN ? 0 : rev_num;
    }
};
