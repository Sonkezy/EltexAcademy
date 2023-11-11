CC = gcc
CFLAGS = -Wall -Wextra -Werror

.PHONY: all
all: main1 main2 main3 main4
	./$(word 1,$^)
	./$(word 2,$^)
	./$(word 3,$^)
	./$(word 4,$^)

main1 : main1.c
	$(CC) $(CFLAGS) -o $@ $<

main2 : main2.c
	$(CC) $(CFLAGS) -o $@ $<

main3 : main3.c
	$(CC) $(CFLAGS) -o $@ $<

main4 : main4.c
	$(CC) $(CFLAGS) -o $@ $<