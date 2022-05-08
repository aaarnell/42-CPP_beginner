#pragma once

class Fixed
{
private:
	int					rawBits;
	static const int	fracBitsCount = 8;

public:
	Fixed();
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	~Fixed();
};
