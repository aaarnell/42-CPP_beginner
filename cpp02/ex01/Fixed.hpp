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

	Fixed&	operator=(const Fixed &other);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream&	operator<<(std::ostream &out, const Fixed &obj);
