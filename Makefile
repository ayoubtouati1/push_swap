SRC  = main.c push_swap.c libft/ft_split.c libft/ft_substr.c libft/ft_strdup.c libft/ft_strlen.c ft_strcmp.c libft/ft_atoi.c rr_operation.c  r_operation.c \
		 s_operation.c chech_function.c sort_3.c sort_4.c short_sort.c p_opearation.c get_min.c len_of_stack.c big_sort.c sorter2.c fill_stack.c add_and_sort_tab.c int_max_and_min.c
BONUS = main_bonus.c get_next_line/get_next_line_utils.c get_next_line/get_next_line.c ft_strcmp.c rr_operation.c  r_operation.c \
		 libft/ft_split.c libft/ft_substr.c libft/ft_strdup.c operation_bonus.c next_operation_bonus.c add_and_sort_tab.c int_max_and_min.c \
		 s_operation.c chech_function.c sort_3.c sort_4.c short_sort.c p_opearation.c get_min.c len_of_stack.c big_sort.c sorter2.c fill_stack.c libft/ft_atoi.c

CC = cc
NAME = push_swap
NAMB = checker

all : $(NAME)
$(NAME) : $(SRC)		
		$(CC) $(FLAGS) $(SRC) -o $(NAME)
bonus : $(OBJB)
		$(CC) $(FLAGS) $(BONUS) -D BUFFER_SIZE=4 -o $(NAMB)
clean :

fclean : clean  
		rm -f $(NAME) $(NAMB)
re	: fclean all
