#include <iostream>
#include <set>
#include <string>

int main() {
    std::set<char> jewelSet;
    std::string jewels, stones;

    std::cout << "Enter types of jewels: ";
    std::cin >> jewels;

    std::cout << "Enter stones: ";
    std::cin >> stones;

    int count = 0;

    for (char c : jewels) {
        jewelSet.insert(c);
    }

    for (char c : stones) {
        if (jewelSet.count(c) > 0) {
            ++count;
        }
    }

    std::cout << "Answer: " << count << std::endl;

    return 0;
}

