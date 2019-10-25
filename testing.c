/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuonper <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 11:37:50 by jsuonper          #+#    #+#             */
/*   Updated: 2019/10/24 16:29:56 by jsuonper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

void			test_f(char *c)
{
	*c = 'a';
}

int				main(int ac, char **av)
{
	char		*function;

	function = av[1];
	if (strcmp(function, "ft_strdup") == 0)
	{
		printf("Correct result: %s.\n", strdup(av[2]));
		printf("Your result: %s.\n", ft_strdup(av[2]));
	}
	else if (strcmp(function, "ft_striter") == 0)
	{
		char	dst[10] = "asdasdd";

		printf("%s\n", dst);
		ft_striter(dst, test_f);
		printf("%s\n", dst);
	}
	else if (strcmp(function, "ft_lstnew") == 0)
	{
		t_list	*result;

		result = ft_lstnew(av[2], sizeof(char) * strlen(av[2]));
		printf("content: %s\nsize: %zu\nnext: %s\n", result->content, result->content_size, result->next);
	}
	else if (strcmp(function, "ft_itoa") == 0)
	{
		char	*res;
		size_t	i;

		i = 0;
		res = ft_itoa(atoi(av[2]));
		while (res[i])
		{
			printf("%c\n", res[i]);
			i++;
		}
	}
	else if (strcmp(function, "ft_strsplit") == 0)
	{
		char	**result;
		int		i;

		i = 0;
		result = ft_strsplit(av[2], av[3][0]);
		while (result[i])
		{
			printf("%s\n", result[i]);
			i++;
		}
	}
	else if (strcmp(function, "ft_strtrim") == 0)
	{
		char	*dst;

		dst = ft_strtrim(av[2]);
		printf("%s\n", dst);
	}
	else if (strcmp(function, "ft_strjoin") == 0)
	{
		char	*dst;

		dst = ft_strjoin(av[2], av[3]);
		printf("%s\n", dst);
	}
	else if (strcmp(function, "ft_strsub") == 0)
	{
		char	*dst;

		dst = ft_strsub(av[2], atoi(av[3]), atoi(av[4]));
		printf("%s\n", dst);
	}
	else if (strcmp(function, "ft_strnstr") == 0)
	{
		size_t	len;

		len = (size_t)atoi(av[4]);
		printf("\n----------CORRECT---------\n");
		printf("%s\n", strnstr(av[2], av[3], len));
		printf("\n-----------YOURS----------\n");
		printf("%s\n", ft_strnstr(av[2], av[3], len));
	}
	else if (strcmp(function, "ft_strstr") == 0)
	{
		printf("\n----------CORRECT---------\n");
		printf("%s\n", strstr(av[2], av[3]));
		printf("\n-----------YOURS----------\n");
		printf("%s\n", ft_strstr(av[2], av[3]));
	}
	else if (strcmp(function, "ft_strrchr") == 0)
	{
		printf("\n----------CORRECT---------\n");
		printf("%s\n", strrchr(av[2], av[3][0]));
		printf("\n-----------YOURS----------\n");
		printf("%s\n", ft_strrchr(av[2], av[3][0]));
	}
	else if (strcmp(function, "ft_strchr") == 0)
	{
		printf("\n----------CORRECT---------\n");
		printf("%s\n", strchr(av[2], av[3][0]));
		printf("\n-----------YOURS----------\n");
		printf("%s\n", ft_strchr(av[2], av[3][0]));
	}
	else if (strcmp(function, "ft_strlcat") == 0)
	{
		size_t	size;

		size = atoi(av[4]);
		printf("\n----------CORRECT---------\n");
		printf("%zu\n", strlcat(av[2], av[3], size));
		printf("\n-----------YOURS----------\n");
		printf("%zu\n\n", ft_strlcat(av[2], av[3], size));

	}
	else if (strcmp(function, "ft_memcmp") == 0)
	{
		size_t	len;

		len = atoi(av[4]);
		printf("\n----------CORRECT---------\n");
		printf("%d\n", memcmp(av[2], av[3], len));
		printf("\n-----------YOURS----------\n");
		printf("%d\n\n", ft_memcmp(av[2], av[3], len));
	}
	else if (strcmp(function, "ft_memchr") == 0)
	{
		char	*src;

		src = av[2];
		printf("\n----------CORRECT---------\n");
		printf("%s\n", memchr(src, av[3][0] + 0, 20));
		printf("\n-----------YOURS----------\n");
		printf("%s\n\n", ft_memchr(src, av[3][0] + 0, 20));
	}
	else if (strcmp(function, "ft_memmove") == 0)
	{
		char	*dst;
		char	*dst2;
		void	*dst_ptr;
		void	*dst2_ptr;

		dst = av[2];
		dst2 = av[3];
		dst_ptr = (void*)dst;
		dst2_ptr = (void*)dst2;
		
		printf("\n----------CORRECT---------\n");
		memmove(dst_ptr, dst_ptr + 3, atoi(av[4]));
		printf("%s\n", dst);
		printf("\n-----------YOURS----------\n");
		ft_memmove(dst2_ptr, dst2_ptr + 3, atoi(av[4]));
		printf("%s\n", dst2);
	}
	else if (strcmp(function, "ft_memccpy") == 0)
	{
		char	dst1[20];
		char	dst2[20];
		int		c;
		void	*ptr_dst1;
		void	*ptr_dst2;
		void	*ptr_src1;
		void	*ptr_src2;
		char	*src1;
		char	*src2;

		src1 = "kattokassinen1";
		src2 = "kattokassinen2";
		c = av[2][0] + 0;
		ptr_dst1 = (void*)dst1;
		ptr_dst2 = (void*)dst2;
		ptr_src1 = (void*)src1;
		ptr_src2 = (void*)src2;
		printf("\n----------CORRECT---------\n");
		printf("dst before: %s\n", dst1);
		memccpy(ptr_dst1, ptr_src1, c, 20);
		printf("dst after: %s\n", dst1);
		printf("\n-----------YOURS----------\n");
		printf("dst before: %s\n", dst2);
		ft_memccpy(ptr_dst2, ptr_src2, c, 20);
		printf("dst after: %s\n\n", dst2);
	}
	else if (strcmp(function, "ft_memset") == 0)
	{
		int		arr1[] = { 1 , 2 };
		int		arr2[] = { 1 , 2 };

		printf("\n----------CORRECT---------\n");
		printf("arr1 before: %d %d\n", arr1[0], arr1[1]);
		memset(arr1, atoi(av[2]), 2 * sizeof(int));
		printf("arr1 after: %d %d\n\n", arr1[0], arr1[1]);
		printf("\n-----------YOURS----------\n");
		printf("arr2 before: %d %d\n", arr2[0], arr2[1]);
		ft_memset(arr2, atoi(av[2]), 2 * sizeof(int));
		printf("arr2 after: %d %d\n\n", arr2[0], arr2[1]);
	}
	else if (strcmp(function, "ft_memcpy") == 0)
	{
		int		arr1[] = { 1 , 2 };
		int		arr2[] = { 1 , 2 };
		int		arr3[] = { 3 , 4 };

		printf("\n----------CORRECT---------\n");
		printf("arr1 before: %d %d\n", arr1[0], arr1[1]);
		memcpy(arr1, arr3, 2 * sizeof(int));
		printf("arr1 after: %d %d\n", arr1[0], arr1[1]);
		printf("\n-----------YOURS----------\n");
		printf("arr2 before: %d %d\n", arr2[0], arr2[1]);
		ft_memcpy(arr2, arr3, 2 * sizeof(int));
		printf("arr2 after: %d %d\n\n", arr2[0], arr2[1]);
	}
	else if (strcmp(function, "ft_atoi") == 0)
	{
		printf("Correct result: %d.\n", atoi(av[2]));
		printf("Your result: %d.\n", ft_atoi(av[2]));
	}
	else if (strcmp(function, "ft_strcmp") == 0)
	{
		printf("Correct result: %d.\n", strcmp(av[2], av[3]));
		printf("Your result: %d.\n", ft_strcmp(av[2], av[3]));
	}
	else if (strcmp(function, "ft_strncmp") == 0)
	{
		printf("Correct result: %d.\n", strncmp(av[2], av[3], atoi(av[4])));
		printf("Your result: %d.\n", ft_strncmp(av[2], av[3], atoi(av[4])));
	}
	else if (strcmp(function, "ft_strlen") == 0)
	{
		printf("Correct result: %lu.\n", strlen(av[2]));
		printf("Your result: %lu.\n", ft_strlen(av[2]));
	}
	else if (strcmp(function, "ft_strcpy") == 0)
	{
		char	dest[10];
		char	dest2[10];

		printf("\n----------CORRECT---------\n");
		printf("dest_before: %s\n", dest);
		printf("dest_after: %s\n", strcpy(dest, av[2]));
		printf("\n-----------YOURS----------\n");
		printf("dest2_before: %s\n", dest2);
		printf("dest2_after: %s\n\n", ft_strcpy(dest, av[2]));
	}
	else if (strcmp(function, "ft_strncpy") == 0)
	{
		char	dest[10];
		char	dest2[10];

		printf("\n----------CORRECT---------\n");
		printf("dest_before: %s\n", dest);
		printf("dest_after: %s\n", strncpy(dest, av[2], atoi(av[3])));
		printf("\n-----------YOURS----------\n");
		printf("dest2_before: %s\n", dest2);
		printf("dest2_after: %s\n\n", ft_strncpy(dest, av[2], atoi(av[3])));
	}
	else if (strcmp(function, "ft_strcat") == 0)
	{
		char	dest[10] = "jizz";
		char	dest2[10] = "fart";

		printf("\n----------CORRECT---------\n");
		printf("dest_before: %s\n", dest);
		printf("dest_after: %s\n", strcat(dest, av[2]));
		printf("\n-----------YOURS----------\n");
		printf("dest2_before: %s\n", dest2);
		printf("dest2_after: %s\n\n", ft_strcat(dest2, av[2]));
	}
	else if (strcmp(function, "ft_strncat") == 0)
	{
		char	dest[10] = "jizz";
		char	dest2[10] = "fart";

		printf("\n----------CORRECT---------\n");
		printf("dest_before: %s\n", dest);
		printf("dest_after: %s\n", strncat(dest, av[2], atoi(av[3])));
		printf("\n-----------YOURS----------\n");
		printf("dest2_before: %s\n", dest2);
		printf("dest2_after: %s\n\n", ft_strncat(dest2, av[2], atoi(av[3])));
	}
	return (0);
}
