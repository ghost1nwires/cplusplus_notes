#include <iostream>
#include <vector>

int main() {
    const int data_size = 8;
    const std::vector<int> data = { 1,2,3,4,5,6,7,8 };
    int sum = 0;

    for (int i = 0; i < data_size; ++i) {
        sum += data[i];
    }

    std::cout << "Sum: " << sum << std::endl;
    return 0;
}