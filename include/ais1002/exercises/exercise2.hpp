
#ifndef AIS1002_LAB_WEEK_4_EXERCISE2_HPP
#define AIS1002_LAB_WEEK_4_EXERCISE2_HPP

#include "../real_random_generator.hpp"

namespace ais1002 {

    std::vector<double> generateRandomNumbersInRange(int count, double min, double max) {
        real_random_generator rng(min, max);
        std::vector<double> res(count);
        for (int i = 0; i < count; ++i) {
            res[i] = rng.generate();
        }
        return res;
    }

}// namespace ais1002

#endif// AIS1002_LAB_WEEK_4_EXERCISE2_HPP
