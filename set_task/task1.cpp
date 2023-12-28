#include <iostream>
#include <set>
#include <vector>

int main() {
    std::set<int> uniqueNumbers;
    int n, num;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> num;
        uniqueNumbers.insert(num);
    }

    std::cout << "Answer: " << uniqueNumbers.size() << std::endl;

    return 0;
}

