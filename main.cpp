#include <vector>
#include <algorithm>
int thirdMax(std::vector<int> &nums)
{
    std::sort(nums.begin(), nums.end());
    int n = nums.size() - 1;
    int count = 0;
    if (n == 0)
        return nums[n];
    while (true)
    {
        if (nums[n] != nums[n - 1])
        {
            ++count;
        }
        if (count == 2)
            return nums[n - 1];
        if (n == 1)
            break;
        --n;
    }
    return nums[nums.size() - 1];
}

int main()
{
    // Runtime: 3 ms, faster than 98.77% of C++ online submissions for Third Maximum Number.
    // Memory Usage: 9.2 MB, less than 65.86% of C++ online submissions for Third Maximum Number.
}