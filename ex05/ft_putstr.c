/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pafernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 16:34:54 by pafernan          #+#    #+#             */
/*   Updated: 2020/07/09 16:50:27 by pafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<unistd.h>

void	ft_putstr(char	*str)
{
	write(1, &str, 1);
}

int		main(void)
{
	ft_putstr("Hi\n");
}
