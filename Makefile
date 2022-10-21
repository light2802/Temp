CC = cc
DEPS = add.h
OBJ = main.o add.o

%.o:	%.c	$(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

add:	$(OBJ)
	$(CC) -o $@ $^

clean:
	rm -rf add $(OBJ)
