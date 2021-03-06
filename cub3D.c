/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3D.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myael <myael@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 13:06:17 by myael             #+#    #+#             */
/*   Updated: 2022/06/14 15:01:34 by myael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3D.h"

int	main(int argc, char **argv)
{
	t_all	all;
	int		len;

	if (argc != 2)
		error_exit("Wrong amount of arguments", 1);
	len = ft_strlen(argv[1]);
	if (len < 5 || ft_strncmp(".cub", argv[1] + len - 4, 5))
		error_exit("Wrong format of map", 2);
	parse_data(argv, &all);
	executing(&all);
}
