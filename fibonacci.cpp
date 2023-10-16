#include <iostream>
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } 
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Please enter a non-negative integer." << std::endl;
    } 
    else {
        std::cout << "Fibonacci sequence up to " << n << " terms:" << std::endl;
        for (int i = 0; i < n; i++) {
            std::cout << fibonacci(i) << " ";
        }
        std::cout << std::endl;
    }
