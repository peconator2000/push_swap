/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vellie <vellie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 19:45:55 by vellie            #+#    #+#             */
/*   Updated: 2021/09/15 16:40:47 by vellie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				data;
	int				sort_ind;
	int				clust_ind;
	int				num_clust;
	int				is_remind;
	char			stack;
	struct s_stack	*next;
}					t_stack;

typedef struct s_oper
{
	char			stack;
	char			*oper;
	struct s_oper	*next;
}					t_oper;

void				finish_move(int rev, int rot, t_stack **a);
int					can_i(t_stack *head, int next, int size);
void				direction_b(t_stack **a, t_stack **b, int *next);
int					*free_func(char **spl, int **res, int size);
int					check_enter_data(char *spl);
int					*many_nums(char **argv, int argc);
void				finish_step(t_stack **a, int *next, int size);
void				reminder_a(t_stack **a, t_stack **b, int *next, int rs);
int					closest_remind(t_stack *head, int size);
int					rotate_remind(t_stack *head);
void				reminder_b(t_stack **a, t_stack **b);
void				cluster_sort_a(t_stack **a, t_stack **b, int *next, int sz);
void				cluster_sort_b(t_stack **a, t_stack **b);
void				way_a(t_stack **a, t_stack **b, int *next, int real_size);
void				way_b(t_stack **a, t_stack **b, int *next);
void				algo(t_stack **a, t_stack **b, int real_size);
int					is_minus_clust(t_stack *a, t_stack *b);
void				new_reboot(t_stack *head);
int					is_all_rigth(t_stack *a, t_stack *b);
int					is_lonely_3(t_stack *a, t_stack *b);
void				algo(t_stack **a, t_stack **b, int real_size);
void				q_sort(int *mas, int l_start, int r_start, int size);
void				sort_station(int mas[], t_stack *head, int size);
void				distribution(t_stack **a, t_stack **b, int *next);
void				lonely_direction(t_stack **a, t_stack **b, int ta, char st);
void				distribution_b(t_stack **a, t_stack **b, int *next);
void				dis2(t_stack **a, t_stack **b, int *next);
void				dis3(t_stack **a, t_stack **b, int *next);
void				dis4(t_stack **a, t_stack **b, int *next);
void				dis6(t_stack **a, t_stack **b, int *next);
void				dis5(t_stack **a, t_stack **b, int *next);
void				dis5_lonely(t_stack **a, t_stack **b, char stack, int type);
void				dis5_lonely_s(t_stack **a, t_stack **b, int type);
void				dis2b(t_stack **a, t_stack **b, int *next);
void				dis3b(t_stack **a, t_stack **b, int *next);
void				dis4b(t_stack **a, t_stack **b, int *next);
void				dis6b(t_stack **a, t_stack **b, int *next);
void				dis5b(t_stack **a, t_stack **b, int *next);
void				move_list_oper(t_stack **a, t_stack **b, t_oper *oper);
t_oper				*synergy1s(char stack);
t_oper				*synergy2s(void);
t_oper				*synergy3s(char stack);
t_oper				*synergy4s(char stack);
t_oper				*synergy5s(char stack);
t_oper				*synergy1(char stack);
t_oper				*synergy2(char stack);
t_oper				*synergy3(char stack);
t_oper				*synergy4(char stack);
t_oper				*synergy5(char stack);
t_oper				*synergy11(void);
t_oper				*synergy12(char stack1);
t_oper				*synergy13(char stack2);
t_oper				*synergy14(char stack2);
t_oper				*synergy15(char stack2);
t_oper				*synergy22(void);
t_oper				*synergy23(char stack2);
t_oper				*synergy24(char stack2);
t_oper				*synergy25(char stack2);
t_oper				*synergy45(char stack2);
t_oper				*synergy33(void);
t_oper				*synergy34(char stack1, char stack2);
t_oper				*synergy35(char stack2);
t_oper				*synergy44(void);
t_oper				*synergy55(void);
t_stack				*ft_lstnew(int data);
int					ft_lstsize(t_stack *lst);
void				ft_lstclear(t_stack **lst);
void				ft_lstadd_front(t_stack **lst, t_stack *newelem);
t_oper				*new_oper(char stack, char data[]);
int					ft_lstsize_oper(t_oper *lst);
void				ft_lstclear_oper(t_oper **lst);
void				ft_lstadd_front_oper(t_oper **lst, t_oper *newelem);
void				ft_lstadd_back_oper(t_oper **lst, t_oper *newel);
int					mediana_finder_a(t_stack **a, t_stack **b, int *next);
void				mediana_move_a(t_stack **a, t_stack **b, int med, int *n);
int					mediana_finder_b(t_stack **a, t_stack **b);
void				mediana_move_b(t_stack **a, t_stack **b, int med);
int					clust_min(t_stack *head);
int					clust_max(t_stack *head);
void				reboot_clust_num(t_stack *head, int current_flag);
void				push_b(t_stack **a, t_stack **b, int wis);
void				push_a(t_stack **a, t_stack **b, int wis);
void				push(t_stack **lst, t_stack *newelem);
void				swap_b(t_stack **head, int wis);
void				swap_a(t_stack **head, int wis);
void				swap_all(t_stack **a, t_stack **b, int wis);
void				rotate_b(t_stack **b, int wis);
void				rotate_a(t_stack **a, int wis);
void				rotate_all(t_stack **a, t_stack **b, int wis);
void				rev_rotate_a(t_stack **a, int wis);
void				rev_rotate_b(t_stack **b, int wis);
void				rev_rotate_all(t_stack **a, t_stack **b, int wis);
char				**ft_split(char *s, char c);
int					*zapolnenie(int *argc, char **argv);
int					ft_strcmp(char *s1, char *s2);
int					*many_nums(char **argv, int argc);
int					ft_strlen(char *str);
char				*ft_substr(char *s, int start, int len);
int					ft_atoi(char *str);
int					ft_isdigit(int ch);
int					how_in_clust(t_stack *head);
int					first_step(t_stack *a, t_stack *b);
void				main_traffic(t_stack **a, t_stack **b, int *next);
void				ft_traffic_cop(t_stack **a, t_stack **b, int *next);
int					the_last_elem(t_stack *head);
int					what_type_3(t_stack *head);
void				type_direction(t_stack **a, t_stack **b);
void				type_dir2(t_stack **a, t_stack **b, int ta, int tb);
void				type_dir3(t_stack **a, t_stack **b, int ta, int tb);
void				type_dir4(t_stack **a, t_stack **b, int ta, int tb);
void				type_dir5(t_stack **a, t_stack **b, int ta, int tb);
void				type_dir0(t_stack **a, t_stack **b, int ta, int tb);
void				type_dir1(t_stack **a, t_stack **b, int ta, int tb);
t_oper				*lonely1(char stack);
t_oper				*lonely2(char stack);
t_oper				*lonely3(char stack);
t_oper				*lonely4(char stack);
t_oper				*lonely5(char stack);
t_oper				*lonely1s(char stack2);
t_oper				*lonely2s(void);
t_oper				*lonely3s(char stack1, char stack2);
t_oper				*lonely4s(char stack1, char stack2);
t_oper				*lonely5s(char stack);

#endif