CC		= gcc
CFLAGS		= -std=gnu99 -I .
LDFLAGS		= -L .

libflexsc.a: flexsc.o
	$(AR) rcs $@ $^

libflexsc.so: flexsc.o
	$(CC) $(LDFLAGS) -shared -fPIC $^ -o $@

flexsc.o: flexsc.c flexsc.h

clean:
	rm -rf *.{o,a,so}
