/*

1. greater than 0.
2. only have one '1' bit in their binary notation,so we use x&(x-1) to delete the lowest '1',and if then it becomes 0,it prove that there is only one '1' bit.
3. the only '1' bit should be locate at the odd location,for example,16.It's binary is 00010000.So we can use '0x55555555' to check if the '1' bit is in the right place.

*/

class Solution
{
public:
    bool isPowerOfFour(int num)
    {
        return num > 0 && (num & (num - 1)) == 0 && (num & 0x55555555) != 0;
    }
};

/*
// recursive-solution
class Solution {
public:
    bool isPowerOfFour(int num) {
        return (num>0 && (num==1 || (num%4==0 && isPowerOfFour(num/4))));
    }
};
*/