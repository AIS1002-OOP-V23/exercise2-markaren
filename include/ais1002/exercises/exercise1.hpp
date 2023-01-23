
#ifndef AIS1002_LAB_WEEK_4_EXERCISE1_HPP
#define AIS1002_LAB_WEEK_4_EXERCISE1_HPP

#include <string>
#include <unordered_map>
#include <utility>
#include <vector>
#include <algorithm>
#include <numeric>

namespace ais1002 {

    double multiplyDoubles(double a, double b) {
        return a * b;
    }

    int computeSum(const std::vector<int> &values) {
        return std::accumulate(values.begin(), values.end(), 0);
    }

    int countValuesBelowThreshold(const std::vector<double> &values) {
        return std::count_if(values.begin(), values.end(), [](double val){
            return val < 50;
        });
    }

    void capitalizeString(std::string &str) {
        if (str.empty()) return;
        str[0] = static_cast<char>(std::toupper(str[0]));
    }

    std::unordered_map<std::string, int> convert(const std::vector<std::pair<std::string, int>> &list) {

        std::unordered_map<std::string, int> res;
        for (auto& [str, val]: list) {
            res[str] = val;
        }

        return res;
    }

}// namespace ais1002

#endif// AIS1002_LAB_WEEK_4_EXERCISE1_HPP
