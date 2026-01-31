
#ifndef VECT2_HPP
#define VECT2_HPP

#include <iostream>

class vect2 {
	private:
		int _x;
		int _y;
	public:
		vect2();
		vect2(int num1, int num2);
		vect2(const vect2 &obj);
		vect2	&operator=(const vect2 &obj);
		~vect2();

		//index
		int	operator[](const int idx) const;
		int &operator[](int idx);

		//increment/decrement
		vect2	&operator++(void); //pre-increment
		vect2	operator++(int); //post-increment -> int: phantom parameter for compiler differentiation
		vect2	&operator--(void); //pre-decrement
		vect2	operator--(int); //post-decrement -> int: phantom parameter for compiler differentiation

		//arithmetic
		vect2	&operator+=(const vect2 &obj);
		vect2	&operator-=(const vect2 &obj);
		vect2	&operator*=(const vect2 &obj);

		vect2	operator+(const vect2 &obj) const;
		vect2	operator-(const vect2 &obj) const;
		vect2	operator*(const vect2 &obj) const;

		vect2	operator-() const;
		vect2	operator*(int scalar) const;
		vect2	&operator*=(int scalar);

		//booleans
		bool	operator==(const vect2 &obj) const;
		bool	operator!=(const vect2 &obj) const;

		//getters
		int		getX() const;
		int		getY() const;
};

vect2			operator*(int scalar, const vect2 &obj);
std::ostream	&operator<<(std::ostream &out, const vect2 &obj);

#endif

//functions that alter the "this" obj instance, need "&" and return a copy or new object
//functions that do not alter the "this" obj instance, need "const" as a promise to the compiler
//scalar operation which leftmost parameter is a member outside of the class -> function must be called outside the class