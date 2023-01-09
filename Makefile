NAME = cub3D

CC = gcc
FLAGS = -g -Wall -Werror -Wextra

#LIBPATH = ../mlx
HEADERS = ./headers

SRC_DIR = ./
SRC = main.c

ERRORS_DIR = errors/
ERRORS_SRC = error_usage.c		error_message_print.c

LIBFT_DIR = libft/
LIBFT_SRC = ft_putchar_fd.c		ft_putstr_fd.c		ft_strchr.c\
	ft_strlen.c		ft_strdup.c		ft_strcpy.c		ft_strjoin.c\
	ft_strncmp.c 	ft_isdigit.c	ft_substr.c		ft_iswhitespace.c\
	ft_atoi.c\
	ft_lstnew.c		ft_lstadd_back.c\
	get_next_line.c

PARSE_DIR = parse/
PARSE_SRC = map_file_parse.c	map_file_read.c		map_settings_parse.c\
	param_int_parse.c	param_str_parse.c		player_parse.c\
	cub_atoi.c

UTILS_DIR = utils/
UTILS_SRC = whitespaces_skip.c	init_variables.c	end_of_line_check.c\
	segment_len.c

#добавить сюда новые подпапки
SRCS = $(SRC)\
	$(addprefix $(ERRORS_DIR), $(ERRORS_SRC))\
	$(addprefix $(LIBFT_DIR), $(LIBFT_SRC))\
	$(addprefix $(PARSE_DIR), $(PARSE_SRC))\
	$(addprefix $(UTILS_DIR), $(UTILS_SRC))

OBJ_DIR = ./objects/
OBJ_FILES = $(patsubst %.c,%.o,$(SRCS))
OBJECTS	= $(addprefix $(OBJ_DIR), $(OBJ_FILES))

SUBDIRS_LIST = $(ERRORS_DIR) $(LIBFT_DIR) $(PARSE_DIR) $(UTILS_DIR) #добавить сюда новые подпапки
OBJ_SUBDIRS = $(addprefix $(OBJ_DIR), $(SUBDIRS_LIST))
$(warning $(OBJ_SUBDIRS))

FRAMEWORKS = -framework OpenGL -framework AppKit


.PHONY: all clean fclean re

all: $(OBJ_DIR) $(NAME)

$(NAME): $(OBJECTS) $(HEADERS)
#	$(CC) $(FLAGS) -I$(LIBPATH) -L$(LIBPATH) -lmlx $(FRAMEWORKS) $(OBJECTS) -o $(NAME)
	$(CC) $(FLAGS) -I$(HEADERS) $(OBJECTS) -o $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)
	mkdir -p $(OBJ_SUBDIRS)

$(OBJ_DIR)%.o: $(SRC_DIRS)%.c
	$(CC) $(FLAGS) -I$(HEADERS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
