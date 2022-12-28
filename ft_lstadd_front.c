/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osajide <osajide@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 18:45:16 by osajide           #+#    #+#             */
/*   Updated: 2022/12/28 19:50:51 by osajide          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void ft_lstadd_front(t_list **lst, t_list *n)
{
	if (!n)
		return;
	n->next = *lst;
	*lst = n;
}

int main()
{
	t_list *node0 = (t_list *)malloc(sizeof(t_list));
	t_list *node1 = (t_list *)malloc(sizeof(t_list));
	t_list *node2 = (t_list *)malloc(sizeof(t_list));
	t_list *node3 = (t_list *)malloc(sizeof(t_list));
	t_list *node4 = (t_list *)malloc(sizeof(t_list));
	t_list *node5 = (t_list *)malloc(sizeof(t_list));
	node0->content = 0;
	node1->content = 1;
	node2->content = 2;
	node3->content = 3;
	node4->content = 4;
	node5->content = 5;
	node0->next = node1;
	printf("adress of node0: %p\n", node0);
	printf("adress of node0->next: %p\n", node0->next);
	node1->next = node2;
	printf("adress of node1: %p\n", node1);
	printf("adress of node1->next: %p\n", node1->next);
	node2->next = node3;
	printf("adress of node2: %p\n", node2);
	printf("adress of node2->next: %p\n", node2->next);
	node3->next = node4;
	printf("adress of node3: %p\n", node3);
	printf("adress of node3->next: %p\n", node3->next);
	node4->next = node5;
	printf("adress of node4: %p\n", node4);
	printf("adress of node4->next: %p\n", node4->next);
	node5->next = NULL;
	printf("adress of node5: %p\n", node5);
	printf("adress of node5->next: %p\n", node5->next);
	// t_list *n = (t_list *)malloc(sizeof(t_list));
	// t_list *n = NULL;
	// n->content = 6;
	// n->next = NULL;
	// ft_lstadd_front(&node0, n);
	// // printf("node0: %d\n", node0->content);
	// // printf("node1: %d\n", node0->next->content);
	while (node0 != NULL)
	{
		printf("new adress of node0: %p\n", node0);
		printf("%d\n", node0->content);
		node0 = node0->next;
	}
}