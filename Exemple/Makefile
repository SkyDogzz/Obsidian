NAME	:= exemple

CC		:= g++
CFLAGS	:= -Wall -Wextra -Werror -std=c++23 -MMD -MP

SRCDIR	:= src
OBJDIR	:= obj
BINDIR	:= bin

COREDIR	:= ../Core
CORELIB	:= $(COREDIR)/lib/obsidian.a
INCLUDES := -I$(COREDIR)/include

SRCS	:= main.cpp
OBJS	:= $(SRCS:%.cpp=$(OBJDIR)/%.o)

all: $(BINDIR)/$(NAME)

$(BINDIR)/$(NAME): $(OBJS) corelib
	@mkdir -p $(BINDIR)
	$(CC) $(CFLAGS) $(OBJS) $(CORELIB) -o $@
	@echo "🖤✨ Linked with obsidian.a"

corelib:
	$(MAKE) -C $(COREDIR) fclean all

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
	@echo "🛠️🖤 Compiled: $<"

-include $(OBJS:.o=.d)

clean:
	rm -rf $(OBJDIR)
	@echo "🧹💀 Cleaned objects"

fclean: clean
	rm -rf $(BINDIR)
	@echo "🧹🖤 Fully cleaned"

re: fclean all

.PHONY: all clean fclean re corelib
