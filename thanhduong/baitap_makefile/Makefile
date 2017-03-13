#Sample Makefile
CFLAGS = - Wall -O0
CC = gcc

INSTDIR=install
SRC_DIR=src
all:app
app: main.o sum.o sub.o
	gcc -o app main.o sum.o sub.o
main.o: main.c
	gcc -I$(SRC_DIR) -c main.c
sum.o:
	gcc -I$(SRC_DIR) -c $(SRC_DIR)/sum.c
sub.o:
	gcc -I$(SRC_DIR) -c $(SRC_DIR)/sub.c
clean:
	rm *.o app
install: app
	@if [ -d $(INSTDIR) ]; then \
		cp app $(INSTDIR) ;\
		chmod 777 $(INSTDIR)/app ;\
		echo "Install is ok!" ;\
	else \
		echo "Install is error" ;\
	fi
