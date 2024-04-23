SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c\
	   ft_isascii.c ft_isprint.c ft_isprint.c\
	   ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c\
	   ft_memmove.c ft_strlcpy.c ft_strlcat.c\
	   ft_toupper.c ft_tolower.c ft_strchr.c

OBJS = $(SRCS:.c=.o)

NAME = libft.a

RM = rm -f

AR = ar rc

CFLAGS = -Wall -Wextra -Werror

%.o:%.c
	cc $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHNOY: all clean fclean re

