src := $(shell ls *.c)
obj := $(patsubst %.c,%.o,$(src))

main : $(obj)
	gcc -g -o $@ $^
#main.o : lianbiao.h sort.h
#lianbiao.o : lianbiao.h

	#gcc -g -o main main.c lianbiao.c sort.c
	#gcc -c lianbiao.c
	#gcc -c sort.c
%.o:%.c
	gcc -c -o $@ $<


.PHONY: clean
clean:
	rm *.o main