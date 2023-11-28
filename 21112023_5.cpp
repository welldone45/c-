#include <iostream>

int main() {
    int choice;
    
    do {
        // Display menu
        std::cout << "Menu:" << std::endl;
        std::cout << "1. Find sum of all natural numbers" << std::endl;
        std::cout << "2. Find factorial of a number" << std::endl;
        std::cout << "3. Find Fibonacci numbers" << std::endl;
        std::cout << "4. Find sum of even and odd numbers" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter your choice (1-5): ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                // Find sum of all natural numbers
                int n, sum = 0;
                std::cout << "Enter a positive integer: ";
                std::cin >> n;

                // Check if the entered number is positive
                if (n <= 0) {
                    std::cout << "Please enter a positive integer." << std::endl;
                    break;
                }

                // Calculate the sum of natural numbers up to n
                for (int i = 1; i <= n; ++i) {
                    sum += i;
                }

                // Display the sum
                std::cout << "Sum of natural numbers up to " << n << " is: " << sum << std::endl;
                break;
            }

            case 2: {
                // Find factorial of a number
                int num, factorial = 1;
                std::cout << "Enter a non-negative integer: ";
                std::cin >> num;

                // Calculate factorial
                for (int i = 1; i <= num; ++i) {
                    factorial *= i;
                }

                // Display the factorial
                std::cout << "Factorial of " << num << " is: " << factorial << std::endl;
                break;
            }

            case 3: {
                // Find Fibonacci numbers
                int terms;
                std::cout << "Enter the number of terms for Fibonacci series: ";
                std::cin >> terms;

                int first = 0, second = 1, next;

                std::cout << "Fibonacci Series: ";

                for (int i = 0; i < terms; ++i) {
                    std::cout << first << " ";
                    next = first + second;
                    first = second;
                    second = next;
                }

                std::cout << std::endl;
                break;
            }

            case 4: {
                // Find sum of even and odd numbers
                int n, evenSum = 0, oddSum = 0;
                std::cout << "Enter a positive integer: ";
                std::cin >> n;

                // Check if the entered number is positive
                if (n <= 0) {
                    std::cout << "Please enter a positive integer." << std::endl;
                    break;
                }

                // Calculate sum of even and odd numbers
                for (int i = 1; i <= n; ++i) {
                    if (i % 2 == 0) {
                        evenSum += i;
                    } else {
                        oddSum += i;
                    }
                }

                // Display the sums
                std::cout << "Sum of even numbers up to " << n << " is: " << evenSum << std::endl;
                std::cout << "Sum of odd numbers up to " << n << " is: " << oddSum << std::endl;
                break;
            }

            case 5:
                // Exit the program
                std::cout << "Exiting the program. Goodbye!" << std::endl;
                break;

            default:
                std::cout << "Invalid choice. Please enter a number between 1 and 5." << std::endl;
        }

    } while (choice != 5);

    return 0;
}
