NAME = ft_traceroute

INC = ft_traceroute.h
SRC = main.c \
	parser.c \
	error_input.c

INC_DIR = ./include
SRC_DIR = ./srcs
OBJ_DIR = ./obj

INCS = $(INC:%=$(INC_DIR)/%)
SRCS = $(SRC:%=$(SRC_DIR)/%)
OBJS = $(SRC:%.c=$(OBJ_DIR)/%.o)

LIBFT = libft.a
LIB_DIR = ./libft
LFT = $(LIB_DIR)/$(LIBFT)
LIB = -L $(LIB_DIR) -l$(LIBFT:lib%.a=%)

CC = gcc
WFLG = -Wall -Werror -Wextra
INC_FLG = -I $(INC_DIR)
FLGS = $(INC_FLG) \
	$(WFLG)


#------------------------------------------------------------#

all:
	@make -C $(LIB_DIR)
	@$(MAKE) $(NAME)


$(NAME): $(OBJS)
	$(CC) $(FLGS) $^ -o $@ -lm ./libft/libft.a

$(OBJS): $(INCS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(FLGS) -o $@ -c $< 

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean
	@$(MAKE) all

print-%:
	@echo $*=$($*)
