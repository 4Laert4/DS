#include <iostream>
#include <set>
#include <string>

int main() {
    std::set<char> charSet;
    std::string str;

    std::cout << "Enter a string: ";
    std::cin >> str;

    int begin = 0;
    int maxLength = 0;

    for (int i = 0; i < str.length(); ++i) {
        while (charSet.count(str[i]) > 0) {
            charSet.erase(str[begin]);
            ++begin;
        }

        charSet.insert(str[i]);
        maxLength = std::max(maxLength, i - begin + 1);
    }

    std::cout << "Answer: " << maxLength << std::endl;

    return 0;
}

