SRCS		= ft_atoi.c ft_isalnum.c ft_isascii.c ft_isprint.c  ft_memcpy.c  ft_memset.c  ft_putnbr_fd.c  				ft_strlcat.c ft_strlen.c ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memccpy.c ft_memcmp.c  				ft_memmove.c ft_putchar_fd.c ft_strchr.c  ft_strlcpy.c ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putstr_fd.c ft_putendl_fd.c ft_memchr.c ft_strnstr.c

BONUSSRCS	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c 

OBJS        = $(SRCS:%.c=%.o)

BONUSOBJ    = $(BONUSSRCS:%.c=%.o)

CFLAGS         = -Werror -Wextra -Wall

NAME        = libft.a

CC             = gcc

HEAD        = libft.h

all     :
	@make $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

bonus : $(OBJS) $(BONUSOBJ)
	@make all OBJS="$(OBJS) $(BONUSOBJ)"

%.o     : %.c
	$(CC) $(CFLAGS) -I$(HEAD) -o $@ -c $<

clean    :
	@rm -rf $(OBJS) $(BONUSOBJ)

fclean    :
	@make clean
	@rm -f $(NAME)

re        :
	@make fclean
	@make $(NAME)

.PHONY : all clea/n fclean re	 bonus
