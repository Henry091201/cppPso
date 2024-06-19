#include <random>
#include <chrono>
#include <vector>
#include <cmath>

double generateRandomNumber(double start, double end)
{
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

    static std::mt19937 generator(seed);
    std::uniform_real_distribution<double> distribution(start, end);
    return distribution(generator);
}

double sphereFunction(std::vector<double>& position) {
    double sum = 0.0;
    for (double xi : position) {
        sum += xi * xi;
    }
    return sum;
}