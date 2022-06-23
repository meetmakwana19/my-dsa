// Leetcode 191
// #include <stdint.h>
// #include <iostream>
// using namespace std;

class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        // cout << "Enter n = " << n;
        // cin >> n;

        int count = 0; // to count how many set bits will be there
        while (n != 0)
        {
            // checking last bit
            if (n & 1)
            {
                // is returns true(1) means found set bit at the last position and increment count to count it.
                count++;
            }
            n = n >> 1; // right shift the number by 1 bit
        }

        // alternate better approach without rightshifting
        // while (n != 0)
        // {
        //     n = n & (n - 1);
        //     count++;
        // }
        return count;
    }
};
