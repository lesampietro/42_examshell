#ifndef VECT2_HPP
# define VECT2_HPP

class vect2 {
	private:
		int _x;
		int _y;
	public:
		vect2();
		vect2(int num1,int num2);
		vect2(const vect2& copy);
		vect2	&operator=(const vect2& obj);
		~vect2();

		int	index[](const int num) const;
		int	&index[](int num);

		
}

#endif VECT2_HPP