
#ifndef AIS1002_LAB_WEEK_4_VECTOR3_HPP
#define AIS1002_LAB_WEEK_4_VECTOR3_HPP

#include "matrix4.hpp"

#include <ostream>

namespace ais1002 {

    class matrix4;// forward reference

    class vector3 {

    public:
        float x{0.f};
        float y{0.f};
        float z{0.f};

        vector3() = default;

        vector3(float x, float y, float z);

        vector3 operator+(const vector3 &v) const;

        vector3 operator-(const vector3 &v) const;

        vector3 operator*(const vector3 &v) const;

        vector3 operator/(const vector3 &v) const;

        vector3 &set(float x, float y, float z);

        vector3 &applyMatrix4(const matrix4 &m);

        float dot(const vector3 &v) const;

        float lengthSq() const;

        float length() const;

        float distanceTo(const vector3 &v) const;

        float distanceToSquared(const vector3 &v) const;

        vector3 &setFromMatrixPosition(const matrix4 &m);

        bool operator==(const vector3 &v) const;

        friend std::ostream &operator<<(std::ostream &os, const vector3 &v) {
            os << "vector3(x=" << v.x << ", y=" << v.y << ", z=" << v.z << ")";
            return os;
        }
    };

}// namespace ais1002

#endif// AIS1002_LAB_WEEK_4_VECTOR3_HPP
