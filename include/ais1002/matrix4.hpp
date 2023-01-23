
#ifndef AIS1002_LAB_WEEK_4_MATRIX4_HPP
#define AIS1002_LAB_WEEK_4_MATRIX4_HPP

#include "vector3.hpp"

#include <array>
#include <ostream>

namespace ais1002 {

    class vector3;// forward reference

    class matrix4 {

    private:
        std::array<float, 16> elements{1.f, 0.f, 0.f, 0.f, 0.f, 1.f, 0.f, 0.f,
                                       0.f, 0.f, 1.f, 0.f, 0.f, 0.f, 0.f, 1.f};

    public:
        matrix4() = default;

        float &operator[](unsigned int index);
        float operator[](unsigned int index) const;

        matrix4 &set(float n11, float n12, float n13, float n14, float n21, float n22,
                     float n23, float n24, float n31, float n32, float n33, float n34,
                     float n41, float n42, float n43, float n44);

        matrix4 &identity();

        matrix4 &setPosition(const vector3 &v);

        matrix4 &setPosition(float x, float y, float z);

        bool operator==(const matrix4 &m) const;

        friend std::ostream &operator<<(std::ostream &os, const matrix4 &m) {
            // clang-format off
            os << "matrix4(\n" <<
                    m.elements[0] << ", " << m.elements[1] << ", " << m.elements[2] << ", " << m.elements[3] << "\n" <<
                    m.elements[4] << ", " << m.elements[5] << ", " << m.elements[6] << ", " << m.elements[7] << "\n" <<
                    m.elements[8] << ", " << m.elements[9] << ", " << m.elements[10] << ", " << m.elements[11] << "\n" <<
                    m.elements[12] << ", " << m.elements[13] << ", " << m.elements[14] << ", " << m.elements[15] << "\n" <<
                    ")";
            // clang-format on
            return os;
        }
    };

}// namespace ais1002

#endif// AIS1002_LAB_WEEK_4_MATRIX4_HPP
