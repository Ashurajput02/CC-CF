#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    // std::cout << "Enter the number of elements: ";
    std::cin >> n;

    if (n == 1)
    {
        cout << n << endl;
        return 0;
    }
    else if (n == 2)
    {
        int x, y;
        cin >> x >> y;
        if (x > y)
        {
            cout << 2 * y << endl;
            return 0;
        }
        else
        {
            cout << 2 * x << endl;
            return 0;
        }
    }
    else
    {
        std::vector<std::pair<int, int>> numbers;

        for (int i = 0; i < n; ++i)
        {
            int value;
            //  std::cout << "Enter a number: ";
            std::cin >> value;
            numbers.push_back(std::make_pair(i, value));
        }

        std::sort(numbers.begin(), numbers.end(), [](const auto &a, const auto &b)
                  { return a.second > b.second; });

        int k = numbers.size();
        for (int i = k - 1; i >= 0; --i)
        {
            int b = min(numbers[0].second, numbers[1].second);
            if (numbers[0].second == numbers[i].second || numbers[1].second == numbers[i].second)
                break;
            else
                numbers[i].second = b;

            std::sort(numbers.begin(), numbers.end(), [](const auto &a, const auto &b)
                      { return a.first < b.first; });

            int sum = 0;
            for (const auto &pair : numbers)
            {
                sum += pair.second;
            }
        }
    }
}
