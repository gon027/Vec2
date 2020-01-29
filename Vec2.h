#ifndef VEC2_H
#define VEC2_H

template<class T> class Vec2; 
using Vec2I = Vec2<int>;
using Vec2F = Vec2<float>;

template<class T>
class Vec2{
public:
    T x;
    T y;

public:
    Vec2() = default;
    Vec2(T _x, T _y)
        : x(_x)
        , y(_y)
    {}
    ~Vec2() = default;

    const Vec2 operator+() const{
        return *this;
    }

    const Vec2 operator-() const{
        return { -this->x, -this->y };
    }

    const Vec2 operator+(const Vec2& _rvec) const{
        return { this->x + _rvec.x, this->y + _rvec.y };
    }

    const Vec2 operator-(const Vec2 &_rvec) const{
        return { this->x - _rvec.x, this->y - _rvec.y };
    }

    const Vec2 operator*(const Vec2 &_rvec) const{
        return { this->x * _rvec.x, this->y * _rvec.y };
    }

    const Vec2 operator/(const Vec2 &_rvec) const{
        return { this->x / _rvec.x, this->y / _rvec.y };
    }

    const Vec2& operator+=(const Vec2& _rvec){
        this->x += _rvec.x;
        this->y += _rvec.y;
        return *this;
    }

    const Vec2 &operator-=(const Vec2 &_rvec){
        this->x -= _rvec.x;
        this->y -= _rvec.y;
        return *this;
    }

    const Vec2 &operator*=(const Vec2 &_rvec){
        this->x *= _rvec.x;
        this->y *= _rvec.y;
        return *this;
    }

    const Vec2 &operator/=(const Vec2 &_rvec){
        this->x /= _rvec.x;
        this->y /= _rvec.y;
        return *this;
    }
};

#endif // VEC2_H