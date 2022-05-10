#pragma once

class Fixed
{
private:
	int					rawBits;
	static const int	fraction = 8;

public:
	Fixed(void);
	Fixed(int raw);
	Fixed(float raw);
	Fixed(const Fixed &other);
	~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	static Fixed& min(Fixed &obj1, Fixed &obj2);
	static const Fixed& min(const Fixed &obj1, const Fixed &obj2);
	static Fixed& max(Fixed &obj1, Fixed &obj2);
	static const Fixed& max(const Fixed &obj1, const Fixed &obj2);

	Fixed&	operator=(const Fixed &other);

	bool	operator>(const Fixed &other) const;
	bool	operator<(const Fixed &other) const;
	bool	operator>=(const Fixed &other) const;
	bool	operator<=(const Fixed &other) const;
	bool	operator==(const Fixed &other) const;
	bool	operator!=(const Fixed &other) const;

	Fixed	operator+(const Fixed &other) const;
	Fixed	operator-(const Fixed &other) const;
	Fixed	operator*(const Fixed &other) const;
	Fixed	operator/(const Fixed &other) const;

	Fixed&	operator++();
	Fixed&	operator--();
	Fixed	operator++(int);
	Fixed	operator--(int);
};

std::ostream&	operator<<(std::ostream &out, const Fixed &obj);
