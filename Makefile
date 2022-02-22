SRCS =  ns_algorithm.c	ns_dis_types_part2.c	ns_lib_synergy2.c	ns_lst_oper_func.c	ns_remind_a.c\
		ns_swap_operations.c	ns_algorithm_helper.c	ns_distribution_main.c	ns_lib_synergy3.c\
		ns_lst_stack_func.c	ns_remind_b.c	ns_traffic.c	ns_direction33_p1.c	 ns_enter_data.c\
		main.c	ns_lib_synergy_s.c	ns_mediana_a.c	ns_rev_rotate_operations.c	ns_type_finder.c\
		ns_direction33_p2.c	ns_enter_data_p2.c	ns_librarian.c	ns_mediana_b.c	ns_rotate_operations.c\
		ns_dis_types_b_p1.c	ns_lib_synergy.c	ns_lonely_lib.c	ns_preprocessing_data.c	ns_smart_rot.c\
		ns_dis_types_part1.c	ns_lib_synergy1.c	ns_lonely_lib_s.c	ns_push_operations.c	ns_string_func.c

NAME = push_swap
OBJ = $(SRCS:.c=.o)
REM = rm -rf
HEADER = push_swap.h

.PHONY: all clean fclean

all: $(NAME)

$(NAME): $(OBJ) $(HEADER) Makefile $(SRCS)
	gcc -Wall -Wextra -Werror -I $(HEADER) $(OBJ) -o $(NAME)

.c.o:
	gcc -Wall -Wextra -Werror -c $< -o ${<:.c=.o}

clean:
	$(REM) $(OBJ)

fclean:	clean
	$(REM) $(NAME)

re:	fclean all

