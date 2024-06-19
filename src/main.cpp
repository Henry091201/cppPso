#include <iostream>
#include <random>
#include "Pso.h"
#include "Utils.h"

int main()
{
    auto sphere_pointer = sphereFunction;
    std::cout << "Hello world!" << std::endl;
    Pso state(50, 1, 1.1, 1.2, 2);
    state.set_objective_function(sphere_pointer);
    state.print_mvalues();
    state.initialise();
    state.print_mvalues();
}
