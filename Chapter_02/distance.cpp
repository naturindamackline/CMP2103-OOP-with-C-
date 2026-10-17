// Write a program that takes two coordinate points and outputs the distance between the two points.
// Example: (x1, y1) and (x2, y2)
// plane distance is given by sqrt((x1-x2)**2 * (y1-y2)**2).

import std;

int main() // read name and age
{
    std::cout << "Please enter coordinates\n";
    
    // Initialize coordinate values
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;

    // Why not initialize as below
    // int x1, y1, x2, y2 = 0;

    std::cin >> x1 >> y1 >> x2 >> y2; // Read coordinate values

    double sum_of_powers = 0.0;
    sum_of_powers = std::pow(x1 - x2, 2) + std::pow(y1 - y2, 2);

    double distance = std::sqrt(sum_of_powers); // Calculate distance

    // std::cout << "Distance between coordinates " << '(' <<x1 << ',' << y1 << ')' <<  " and " << '(' <<x2 << ',' << y2 << ')' << " is " << distance << "\n";

    // print
    std::print("Distance between coordinates ({},{}) and ({},{}) is {}\n", x1, y1, x2, y2, distance);

    return 0;
}

// Try
// The distance calculated above is true for a 2D plane.
// For spherical surfaces such as the Earth, the Haversine formula is used. Reference: https://scikit-learn.org/stable/modules/generated/sklearn.metrics.pairwise.haversine_distances.html
// Rewrite this program to calculate the distance Makerere University Freedom Square and Entebbe Airport.