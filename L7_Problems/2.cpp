// leetcode 1009

class Solution
{
public:
    int bitwiseComplement(int n)
    {

        // saving n
        int m = n;
        int mask = 0;

        // edge case
        if (m == 0)
        {
            return 1;
        }

        while (m != 0)
        {

            // creating mask by left shifting and OR 1
            mask = (mask << 1) | 1;

            // rightshift m to make all bits 0 to terminate loop
            m = m >> 1;
        }

        int ans = (~n) & mask;

        return ans;
    }
};