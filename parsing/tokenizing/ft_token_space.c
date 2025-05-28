/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_token_space.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammal <sojammal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 17:00:07 by sojammal          #+#    #+#             */
/*   Updated: 2025/05/23 01:26:07 by sojammal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../minishell.h"

int	ft_handle_space(t_data *data, char *input)
{
	int	count;

	count = 0;
	while (ft_isspace(input[data->i + count]))
		count++;
	lst_add_back_token(data, lst_new_token(SPCE, ft_strdup_gc(" ")));
	return (count);
}
