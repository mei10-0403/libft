#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (*(str++) != '\0')
	{
		len++;
	}
	return (len);
}
