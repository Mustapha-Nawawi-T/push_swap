/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 13:03:15 by mannouao          #+#    #+#             */
/*   Updated: 2021/12/21 15:39:17 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	free_and_error(t_data *data, int i)
{
	if (data->a)
		free(data->a);
	if (data->b)
		free(data->b);
	if (i == 0)
		print_error();
	else if (i == 1)
		exit(0);
}

void	free_tab_and_err(t_data *data, int **tmp, int len, int j)
{
	int	i;

	i = 0;
	while (i < len)
	{
		free(tmp[i]);
		i++;
	}
	free(tmp);
	if (j == 0)
		free_and_error(data, 0);
}

void	free_for_tmps(char *tmp1, char *tmp2)
{
	if (tmp1)
		free(tmp1);
	if (tmp2)
		free(tmp2);
}
