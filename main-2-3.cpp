#include <iostream>
#include <vector>

bool isPalindrome(std::vector<int>& arr, int length) {
    if (length <= 0) {
        return false;
    }

    int start = 0;
    int end = length - 1;

    while (start < end) {
        if (arr[start] != arr[end]) {
            return false;
        }
        start++;
        end--;
    }

    return true;
}

int calculateSum(std::vector<int>& arr, int length) {
    if (length <= 0) {
        return -1;
    }

    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += arr[i];
    }

    return sum;
}

int sumIfPalindrome(std::vector<int>& arr, int length) {
    if (isPalindrome(arr, length)) {
        return calculateSum(arr, length);
    }

    return -2;
}

int main() {
    std::vector<int> arr = {3, 5, 7, 7, 5, 3};
    int length = arr.size();

    int result = sumIfPalindrome(arr, length);
    if (result == -2) {
        std::cout << "The array is not a palindrome." << std::endl;
    } else {
        std::cout << "The sum of elements in the palindrome array: " << result << std::endl;
    }

    return 0;
}
