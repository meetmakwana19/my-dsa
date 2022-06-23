// n = 456
// want to separate 4 | 5 | 6

// n%10 -> will give 6
// 456÷10 -> 45

// 45%10 -> will give 5
// 45÷10 -> 4

// 4%10 -> will give 4

// Leetcode 128.1
class Solution
{
public:
    int subtractProductAndSum(int n)
    {
        int prod = 1;
        int sum = 0;

        while (n != 0)
        {
            int digit = n % 10; // got a digit from backwards
            prod = prod * digit;
            sum = sum + digit;

            n = n / 10; // to get the remaining digits
        }
        int answer = prod - sum;
        return answer;
    }
};