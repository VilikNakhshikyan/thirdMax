#include <vector>
#include <algorithm>
std::vector<int> twoSum(const std::vector<int> &nums, int target)
{
    std::vector<std::pair<int, int>> answer;
    int n = nums.size();
    for (int i = 0; i < n; ++i)
        answer.push_back({nums[i], i});
    std::sort(answer.begin(), answer.end());
    unsigned int start = 0;
    n--;
    while (start < n)
    {
        if (answer[start].first + answer[n].first == target)
            return {answer[start].second, answer[n].second};
        else if (answer[start].first + answer[n].first > target)
            --n;
        else
            ++start;
    }
    return {-1, -1};
}

int main()
{
    // Runtime: 8 ms, faster than 98.17% of C++ online submissions for Two Sum.
    // Memory Usage: 11.1 MB, less than 21.05% of C++ online submissions for Two Sum.
}