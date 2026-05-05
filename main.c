#include "libft.h"
#include <stdio.h>

int main(void)
{
	char str[] = "ola";
    char *arr = ft_strdup(str);
    printf("basic:      '%s'\n", arr);
    free(arr);
}
