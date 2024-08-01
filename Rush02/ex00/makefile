# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nade-lim <nade-lim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/28 19:14:53 by nade-lim          #+#    #+#              #
#    Updated: 2024/07/28 19:41:26 by nade-lim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror

TARGET = rush-02

SRC = rush-02.c write.c main.c

all: $(TARGET)

$(TARGET): $(SRC)
		$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

clean:
		rm -f $(TARGET)

fclean: clean
		rm -f *.o

debug: CFLAGS += -g
debug: $(TARGET)

re: fclean all
