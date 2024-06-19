#ifndef PSO_H
#define PSO_H

#include <vector>
#include <iostream>

class Pso
{
    private:
        const double m_swarm_size;
        double m_inertia;
        const double m_c1;
        const double m_c2;
        const int m_dimensions;
        

        std::vector<std::vector<double>> positions;
        std::vector<std::vector<double>> velocities;
        std::vector<std::vector<double>> pbest_positions;

        void (*objective_function)(const std::vector<double>&);

    public:
        Pso(int swarm_size, double inertia, double c1, double c2, int dimensions);

        int get_swarm_size();
        double get_inertia();
        double get_c1();
        double get_c2();
        void set_objective_function(double (*sphere_pointer)(const std::vector<double> &));

        void print_mvalues();
        void print_2d_matrix_double(const std::vector<std::vector<double>>& vector);
        void initialise();
        void initialise_positions();
        void initialise_velocities();
};

#endif // PSO_H
