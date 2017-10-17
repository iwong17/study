#src := $(shell ls *.c)
#obj := $(patsubst %.c,%.o,$(src))
obj = main.o lianbiao.o sort.o

main:$(obj) #$@:obj file name $<:depended file name
	gcc -g -o $@ $^  
%.o:%.c     #$<:first depended file name
	gcc -c -o $@ $<  

.PHONY: clean
clean:
	del *.o *.exe main