# -*- Makefile -*-

CC = gcc
SRC = main.c holberton.c
all: $(SRC) m.h
	$(CC) $(SRC) -o holberton
