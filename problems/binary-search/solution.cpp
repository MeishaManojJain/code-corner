#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // input
    int target, n;
    cin >> target >> n;

    // Make a ector
    vector<int> nums(n);

    // input vector
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    // set high and low
    int lo = 0, hi = nums.size() - 1;
    int answer = -1;

    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;

        if (nums[mid] == target)
        {
            answer = mid;
            break;
        }

        if (nums[mid] < target)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }

    // output
    cout << answer << endl;

    return 0;
}