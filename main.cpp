#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;
    int tempNumber = 0;

    while (tempNumber != -2) {
        std::cout << "Input the number (-2 for exit): ";
        std::cin >> tempNumber;
        if (tempNumber == - 1) {
            if (numbers.size() < 5) {
                std::cout << "Not enough elements in the array.";
            } else {
                for (int i = 0; i < numbers.size(); ++i) {
                    for (int j = 0; j < numbers.size() - i - 1; ++j) {
                        if (numbers[j] > numbers[j + 1]) {
                            int temp = numbers[j];
                            numbers[j] = numbers[j+1];
                            numbers[j+1] = temp;
                        }
                    }
                }
                std::cout << numbers[4] << std::endl;
            }
        } else {
            numbers.push_back(tempNumber);
        }
    }
    std::cout << "The End!";
    return 0;
}
