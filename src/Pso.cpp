#include <iostream>
#include <random>
#include "Pso.h"
#include "Utils.cpp"


Pso::Pso(int swarm_size, double inertia, double c1, double c2, int dimensions) 
    : m_swarm_size(swarm_size), m_inertia(inertia), m_c1(c1), m_c2(c2), m_dimensions(dimensions), 
    positions(swarm_size, std::vector<double>(dimensions)), velocities(swarm_size, std::vector<double>(dimensions)),
    pbest_positions(swarm_size, std::vector<double>(dimensions)), objective_function(nullptr){
    // Initialize positions, velocities, and pbest_positions with appropriate sizes and values
}

int Pso::get_swarm_size() {
    return static_cast<int>(m_swarm_size);
}

double Pso::get_inertia() {
    return m_inertia;
}

double Pso::get_c1() {
    return m_c1;
}

double Pso::get_c2() {
    return m_c2;
}

void Pso::set_objective_function(const std::vector<double>& vec) {
    objective_function* = vec;
}
void Pso::initialise()
{
    Pso::initialise_positions();
    Pso::initialise_velocities();
}

void Pso::initialise_positions()
{
    for (std::vector<double>& particle_position : positions)
    {
        for (double& local_position : particle_position)
        {
            local_position = generateRandomNumber(-1, 1);
        }
    }
}

void Pso::initialise_velocities()
{
    for (std::vector<double>& particle_velocity : velocities)
    {
        for (double& local_velocity : particle_velocity)
        {
            local_velocity = generateRandomNumber(-1, 1);
        }
    }
}

void Pso::print_mvalues() {
    std::cout << "Swarm Size: " << m_swarm_size << std::endl;
    std::cout << "Inertia: " << m_inertia << std::endl;
    std::cout << "C1: " << m_c1 << std::endl;
    std::cout << "C2: " << m_c2 << std::endl;
    std::cout << "Dimensions: " << m_dimensions << std::endl;
    std::cout << "Positions: " << std::endl;
    print_2d_matrix_double(positions);
}

void Pso::print_2d_matrix_double(const std::vector<std::vector<double>>& vector) {
    for (const auto& row : vector) {
        for (const auto& elem : row) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }
}