CC:=gcc

ifeq ($(THREAD_CHECK),1)
	CFLAGS = -Wall -std=gnu99 -fsanitize=thread -O2
	LFLAGS = -fsanitize=thread
else
	CFLAGS = -Wall -std=gnu99
endif

LP = -lpthread
DFLAGS = -D_GNU_SOURCE

exe:=qsort-mt
obj:=qsort-mt.o

all:$(obj)
	 $(CC) -o $(exe) $(obj) $(LFLAGS)

%.o:%.c
	$(CC) -g -c $^ -o $@  $(LP) $(CFLAGS) $(DFLAGS)

FORCE:
.PHONY: FORCE

.PHONY:clean
clean: FORCE
	 rm -rf $(obj) $(exe)
