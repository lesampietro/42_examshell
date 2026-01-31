#include "vect2.hpp"

vect2::vect2() : _x(0), _y(0) {}

vect2::vect2(int num1, int num2) : _x(num1), _y(num2) {}

vect2::vect2(const vect2 &obj) : _x(obj._x), _y(obj._y) {}

vect2	&vect2::operator=(const vect2 &obj) {
    if (this != &obj) {
        this->_x = obj._x;
        this->_y = obj._y;
    }
    return *this;
}

vect2::~vect2() {};

int	vect2::operator[](const int idx) const {
    if (idx == 0)
        return this->_x;
    else if (idx == 1)
        return this->_y;
    else
        throw std::out_of_range("operator out of range");
}

int &vect2::operator[](int idx) {
    if (idx == 0)
        return this->_x;
    else if (idx == 1)
        return this->_y;
    else
        throw std::out_of_range("index out of range");
}

vect2	&vect2::operator++(void) {
    // ++this->_x;
    // ++this->_y;
    this->_x += 1;
    this->_y += 1;
    return *this;
}

vect2	vect2::operator++(int) {
    vect2 temp(*this); //save current state
    ++(*this);         //increment
    return temp;       //return old state
}   

vect2	&vect2::operator--(void) {
    // --this->_x;
    // --this->_y;
    this->_x -= 1;
    this->_y -= 1;
    return *this;
}

vect2	vect2::operator--(int) {
    vect2 temp(*this); //save current state
    --(*this);         //decrement
    return temp;       //return old state
}

vect2	&vect2::operator+=(const vect2 &obj) {
    this->_x += obj._x;
    this->_y += obj._y;
    return *this;
}

vect2	&vect2::operator-=(const vect2 &obj) {
    this->_x -= obj._x;
    this->_y -= obj._y;
    return *this;
}

vect2	&vect2::operator*=(const vect2 &obj) {
    this->_x *= obj._x;
    this->_y *= obj._y;
    return *this;
}

vect2	vect2::operator+(const vect2 &obj) const {
    return vect2((_x + obj._x), (_y + obj._y));
}

vect2	vect2::operator-(const vect2 &obj) const {
    return vect2((_x - obj._x), (_y - obj._y));
}

vect2	vect2::operator*(const vect2 &obj) const {
    return vect2((_x * obj._x), (_y * obj._y));
}

bool	vect2::operator==(const vect2 &obj) const {
    if ((this->_x == obj._x) && (this->_y == obj._y))
        return(true);
    return (false);
}

bool	vect2::operator!=(const vect2 &obj) const {
    if ((this->_x != obj._x) && (this->_y != obj._y))
		return(true);
    return (false);
}

vect2	vect2::operator-() const {
    return vect2(-this->_x, -this->_y);
}

vect2	vect2::operator*(int scalar) const {
    return vect2((this->_x * scalar), (this->_y * scalar));
}

vect2	&vect2::operator*=(int scalar) {
    this->_x *= scalar;
    this->_y *= scalar;
    return *this;
}


int		vect2::getX() const {
    return this->_x;
};

int		vect2::getY() const {
    return this->_y;
};

vect2	operator*(int scalar, const vect2 &obj) {
    // return vect2(scalar * obj._x, scalar * obj._) 
    return vect2(scalar * obj.getX(), scalar * obj.getY());
}

std::ostream	&operator<<(std::ostream &out, const vect2 &obj) {
    out << "{" << obj.getX() << ", " << obj.getY() << "}";
    return out;
};