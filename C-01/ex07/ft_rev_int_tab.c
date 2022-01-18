/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 11:51:19 by jsegovia          #+#    #+#             */
/*   Updated: 2021/12/02 11:51:26 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_rev_int_tab(int *tab, int size)
{
    int temp;
    int count;

    temp = 0;
    count = 0;
    while (count < size /2)
    {
        temp = tab[count];
        tab[count] = tab[size - 1 - count];
        tab[size - 1 - count] = temp;
        count++;
    }
}
