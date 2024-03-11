NAME        = testCub
LIBFT       = ./libft/
MLX         = minilibx-linux/
LIBFT_A     = $(addprefix $(LIBFT), libft.a)
MLX_A       = $(addprefix $(MLX), libmlx.a)
MLXF		=  -Lmlx_linux -lmlx_Linux

CC          = gcc  -g
RM          = rm -f
SRCS        = main.c

OBJS = $(SRCS:%.c=%.o)

all: $(NAME)


$(NAME): $(OBJS) includes/map.h $(LIBFT_A) $(MLX_A)
	@$(CC) $(OBJS) $(MLXF) -L$(LIBFT) -lft -L$(MLX) -Imlx_linux -lXext -lX11 -lm -lz -o $(NAME)
	@echo "Linked into executable \033[0;32m$(NAME)\033[0m."

%.o: %.c
	$(CC) -I/usr/include -Imlx_linux -O3 -c $< -o $@

$(LIBFT_A):
	@$(MAKE) -s -C $(LIBFT)
	@echo "Compiled $(LIBFT_A)."

$(MLX_A):
	@$(MAKE) -s -C $(MLX)
	@echo "Compiled $(MLX_A)."

localclean:
	@$(RM) $(OBJS)
	@echo "Removed object files."

clean: localclean
	@$(MAKE) clean -s -C $(LIBFT)
	@echo "Cleaned libft."
	@$(MAKE) clean -s -C $(MLX)
	@echo "Cleaned MLX."	
fclean: localclean
	@$(MAKE) fclean -s -C $(LIBFT)
	@echo "Fully cleaned libft."
	@$(MAKE) clean -s -C $(MLX)
	@echo "Cleaned MLX."
	@$(RM) $(NAME)
	@echo "Removed executable."

re: fclean all

.PHONY: all clean fclean re localclean
