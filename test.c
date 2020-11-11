/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuguimo <esuguimo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 20:26:22 by esuguimo          #+#    #+#             */
/*   Updated: 2020/11/11 20:41:01 by esuguimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int artifacts;
	int rooms;
	int paintings;
	int sculptures;

	rooms = 12;
	paintings = 16;
	sculptures = 4;
	artifacts = rooms * (paintings + sculptures);
	return (0);
}
