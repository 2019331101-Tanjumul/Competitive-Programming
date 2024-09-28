#include <iostream>
#include <cmath> // For pow function

int main() {
    // Declare variables for a, b, c
    double a, b, c;

    // Input values for a, b, and c
  
    std::cin >> a;

    std::cin >> b;

    std::cin >> c;

    // Calculate x using the given equation
    double x = pow((pow(a, 4) + 3 * a * c), 2) + 4 * pow(b, 2) * c + pow(c, 2);

    // Output the result
    std::cout  << x << std::endl;

    return 0;
}
