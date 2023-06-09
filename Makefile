# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yakary <yakary@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/14 15:09:39 by yakary            #+#    #+#              #
#    Updated: 2023/03/14 15:09:41 by yakary           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
SRC = ft_bzero.c \
      ft_isalnum.c \
      ft_isalpha.c \
      ft_isascii.c \
      ft_isdigit.c \
      ft_isprint.c \
      ft_memcpy.c \
	  ft_memmove.c \
      ft_memset.c \
      ft_strlen.c \
	  ft_strlcat.c \
	  ft_strlcpy.c \
	  ft_toupper.c \
	  ft_tolower.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_strncmp.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_strnstr.c \
	  ft_atoi.c \
	  ft_calloc.c \
	  ft_strdup.c \
	  ft_substr.c \
	  ft_strjoin.c \
	  ft_strtrim.c \
	  ft_split.c \
	  ft_itoa.c \
	  ft_strmapi.c \
	  ft_striteri.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c
BSRC = ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c
OBJS = $(addprefix $(BIN_DIR)/, $(SRC:.c=.o))
BOBJS = $(addprefix $(BIN_DIR)/, $(BSRC:.c=.o))
NAME = libft.a
CFLAGS = -Wall -Werror -Wextra -o test
LIBC = ar rc
LIBR = ranlib
RM = rm -f
RM_DIR = rm -rf
BIN_DIR = bin
VPATH = .
ifdef IS_BONUS
OBJS_LIST = $(OBJS) $(BOBJS)
else
OBJS_LIST = $(OBJS)
endif
all: $(NAME)
$(BIN_DIR)/%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
$(NAME): $(BIN_DIR) $(OBJS_LIST)
	$(LIBC) $(NAME) $(OBJS_LIST)
	$(LIBR) $(NAME)
$(BIN_DIR):
	mkdir -p $(BIN_DIR)
bonus:
	make IS_BONUS=1 all
clean:
	$(RM_DIR) $(BIN_DIR)
fclean: clean
	$(RM) $(NAME)
re: fclean all
