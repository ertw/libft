#include "libft.h"

size_t	pow2ciel(const char *str, size_t len)
{
	--len;
	len |= len >> 1;
	len |= len >> 2;
	len |= len >> 4;
	len |= len >> 8;
	len |= len >> 16;
	++len;
return (len);
}
