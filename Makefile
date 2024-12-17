NAME = push_swap
BONUS = checker

CC = cc
CFLAG = -Wall -Wextra -Werror #-g3 -fsanitize=address
RM = rm -f

SOURCES = src/rules/push \
		  src/rules/reverse_rotate \
		  src/rules/rotate \
		  src/rules/swap \
          src/sorting/sorting \
          src/utils/ascending \
		  src/utils/ft_atoi \
		  src/utils/ft_index \
		  src/utils/ft_inspect_char \
		  src/utils/ft_inspector_nbr \
		  src/utils/ft_list_add \
		  src/utils/ft_list_size \
		  src/utils/ft_strjoin \
		  src/utils/repetation_check \
		  src/utils/split \
          butterfly \
          free \
          push_swap

B_SRCS = checker_files/get_next_line/get_next_line_utils \
		 checker_files/get_next_line/get_next_line \
         checker_files/utils_checker/defining \
		 checker_files/utils_checker/definitely_sorting \
         src/rules/push \
		 src/rules/reverse_rotate \
		 src/rules/rotate \
		 src/rules/swap \
         src/utils/ascending \
		 src/utils/ft_atoi \
		 src/utils/ft_index \
		 src/utils/ft_inspect_char \
		 src/utils/ft_inspector_nbr \
		 src/utils/ft_list_add \
		 src/utils/ft_list_size \
		 src/utils/ft_strjoin \
		 src/utils/repetation_check \
		 src/utils/split \
		 checker \
         free

HEADERS = push_swap.h

SRCS = $(addsuffix .c, $(SOURCES))
OBJS = $(SRCS:.c=.o)

B_SRCS := $(addsuffix .c, $(B_SRCS))
B_OBJS := $(B_SRCS:.c=.o)

all: $(NAME)
bonus: $(BONUS)

$(NAME): $(OBJS)
	$(CC) $(CFLAG) $(OBJS) -o $(NAME)

$(BONUS): $(B_OBJS)
	$(CC) $(CFLAG) $(B_OBJS) -o $(BONUS)

%.o: %.c $(HEADERS) Makefile
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(B_OBJS)

fclean: clean
	$(RM) $(NAME) $(BONUS)

re: fclean all bonus

.PHONY: all bonus clean fclean re
