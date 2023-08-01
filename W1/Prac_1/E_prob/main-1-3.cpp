#include <iostream>

extern int num_count(int array[], int n, int number);
int main() {
    int a,b;
    std::cout<<"Enter the number:"<<std::endl;
    std::cin>>a;
    std::cout<<"The range of array:"<<std::endl;
    std::cin>>b;
    int array[18] = {1,1,1,2,2,2,3,3,3,4,4,4,5,5,5,6,6,6};
    std::cout << "The same number you entered in this range of array is: " <<num_count(array, b, a) << std::endl;
    return 0;
}