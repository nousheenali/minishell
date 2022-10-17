/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_export4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 04:18:17 by rrangwan          #+#    #+#             */
/*   Updated: 2022/06/30 11:49:48 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_export8(char *cmd)
{
	int	i;

	i = 1;
	while (cmd[i] != '\0' && cmd[i] != '=')
	{
		if (!ft_isalnum(cmd[i]) && cmd[i] != '$')
			return (1);
		i++;
	}
	return (0);
}
