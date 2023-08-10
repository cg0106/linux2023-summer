CC:=gcc
CFLAGS = -Wall -std=gnu99
LP = -lpthread
DFLAGS = -D_GNU_SOURCE

exe:=qsort-mt
obj:=qsort-mt.o

all:$(obj)
	 $(CC) -o $(exe) $(obj)

%.o:%.c
	$(CC) -c $^ -o $@  $(LP) $(CFLAGS) $(DFLAGS)

.PHONY:clean
	clean:
	 rm -rf $(obj) $(exe)
