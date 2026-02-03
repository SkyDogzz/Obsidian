NAME	:= obsidian.a

CC		:= g++
AR		:= ar rcs
CFLAGS	:= -Wall -Wextra -Werror -std=c++23 -MMD -MP
INCLUDES := -Iinclude

SRCDIR	:= src
OBJDIR	:= obj
BINDIR	:= lib

SRCS	:= Vector.cpp \
				 Window.cpp

OBJS	:= $(SRCS:%.cpp=$(OBJDIR)/%.o)

all: $(BINDIR)/$(NAME)

$(BINDIR)/$(NAME): $(OBJS)
	@mkdir -p $(BINDIR)
	$(AR) $@ $^
	@echo "🖤📦 Static library forged: $(NAME)"

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
	@echo "🛠️🖤 Compiled: $<"

-include $(OBJS:.o=.d)

clean:
	rm -rf $(OBJDIR)
	@echo "🧹💀 Cleaned object files"

fclean: clean
	rm -rf $(BINDIR)
	@echo "🧹🖤 Fully cleaned (lib + obj)"

re: fclean all

.PHONY: all clean fclean re

