#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>

using namespace std;

// Define the main inputs to the code: number of darts, and rounds of play.
int Darts = 1000;           // number of darts used in each round.
int Rounds = 100;           // total number of rounds.

// ==================================================================================================
// ==================================================================================================
// ==================================================================================================

double ThrowDarts(int darts) {
    double x_coord, y_coord, pi, r;
    int score = 0;

    // Creating the random generator.
    random_device seed_value;                           // Obtain a random number from hardware
    mt19937 gen(seed_value());                          // Seed the generator
    uniform_real_distribution<> distr(0.0, 1.0);        // Define the range

    // Start simulation of dart thorwning.
    for (int n = 1; n <= darts; n++) {
        x_coord = distr(gen);           // Generate a random number [0.0, 1.0)
        y_coord = distr(gen);           // Generate another random number [0.0, 1.0]
        // Check if the dart hits inside the circle.
        if ((x_coord * x_coord + y_coord * y_coord) <= 1.0)
            score++;
    }

    pi = 4.0 * score / darts;
    return pi;
}
// ==================================================================================================
// ==================================================================================================
// ==================================================================================================

int main() {
    double Pi;              // average of pi after "darts" is thrown in a given round.
    double AvgPi;           // average pi value for all rounds.
    
    cout << "Starting serial version of pi calculation using dartboard algorithm..." << endl;

    AvgPi = 0.0;
    for (int i = 0; i < Rounds; i++) {          // Start a loop over different rounds.
        Pi = ThrowDarts(Darts);                 // Simulate thrown of the darts.
        AvgPi = ((AvgPi * i) + Pi) / (i + 1);   // Calculate the average Pi value, till now.
        // print the results to the user.
        cout << "   After " << (Darts * (i + 1)) << " throws, average value of pi = " << AvgPi << endl;
    }
    cout << "\nReal value of PI: 3.1415926535897" << endl;

    return 0;
}
// ==================================================================================================
// ==================================================================================================
// ==================================================================================================



