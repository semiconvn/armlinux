#Sample Makefile 
CFLAGS= -Wall -O0
CC = gcc

INSTDIR=install
SRC_DIR=src

all: app
app: main.o
	arm-linux-gcc -o app main.o
main.o: main.c
	arm-linux-gcc -I$(SRC_DIR) -c main.c
clean:
	rm *.o app
install: app
	if [ -d $(INSDIR) ]; then\
		cp app $(INSTDIR) ;\
		chmod 777 $(INSTDIR)/app;\
		echo "Install ok!";\
	else \
		echo "Install errror!" ;\
	fi
