#include <iostream>
#include <map>

int main() {
    std::map<int, int> m;
    int n;
    std::cin >> n;

    int *nums = new int[n];

    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }

    int k;
    std::cin >> k;

    for (int i = 0; i < n; ++i) {
        if (m.find(nums[i]) != m.end()) {
            if (abs(m[nums[i]] - i) <= k) {
                std::cout << "true";
                delete[] nums;  
                return 0;
            } else {
                m[nums[i]] = i;
            }
        } else {
            m.insert(std::pair<int, int>(nums[i], i));
        }
    }

    std::cout << "false";

    delete[] nums;

    return 0;
}

