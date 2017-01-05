CLAGS= -Wall -O0
CC = gcc

INSTDIR-install
SCR_DIR=src

all: app
app: main.o sum.o subtract.o
	gcc -o app main.o sum.o subtract.o
main.o: main.c
	gcc -I$ (SRC_DIR) -c main.c
sum.o
	gcc -c -I$	(SRC_DIR)	$ (SRC_DIR)/sum.c
subtract.o:
	gcc -I$ (SRC_DIR) -C $ (SRC_DIR)/subtract.c
clean:
	rm *.o app
install: app
	@if [-d $ (INSTDIR) ]; then\
	cp app $ (INSTDIR) ;\
	chmod 777 $ (INSTDIR) /app;\
	echo "Install ok!"\
	else\
	echo"Install error!" ;\
	fi
