#include <iostream>

int main() {
    // Declare an integer variable 'x'
    int x = 5;

    // Declare a pointer to an integer 'p'
    int* p;

    // Assign the address of 'x' to 'p'
    p = &x;

    // Print the address stored in 'p' and the value of 'x' using 'p'
    std::cout << "Address stored in p: " << p << std::endl;
    std::cout << "Value of x using p: " << *p << std::endl;

    // Change the value of 'x' using 'p'
    *p = 10;

    // Print the new value of 'x'
    std::cout << "New value of x: " << x << std::endl;

    // Pointer Arithmetic
    int arr[5] = { 1, 2, 3, 4, 5 }; // Create an array of integers with 5 elements

    // Print the address of each element in the array using pointer arithmetic
    std::cout << "\nAddresses of elements in the array:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "Address of element " << i << ": " << &arr[i] << std::endl;
    }

    // Increment a pointer to traverse the array and print each value
    int* ptr = arr; // Initialize pointer to the beginning of the array
    std::cout << "\nValues of elements in the array:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "Element " << i << ": " << *ptr << std::endl;
        ++ptr; // Increment pointer to point to the next element
    }

    return 0;
}