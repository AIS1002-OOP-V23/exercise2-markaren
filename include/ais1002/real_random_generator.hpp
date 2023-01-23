
#ifndef AIS1002_LAB_WEEK_4_REAL_RANDOM_GENERATOR_HPP
#define AIS1002_LAB_WEEK_4_REAL_RANDOM_GENERATOR_HPP

#include <random>

namespace ais1002 {

    // Class used to produced high quality random numbers
    class real_random_generator {

    public:
        real_random_generator() : dis(0.0, 1.0) {}

        // Generates and returns new random number when invoked
        double generate() {
            return dis(gen);
        }

    private:
        std::random_device dev;
        std::mt19937 gen{dev()};
        std::uniform_real_distribution<> dis;
    };

}// namespace ais1002

#endif// AIS1002_LAB_WEEK_4_REAL_RANDOM_GENERATOR_HPP
