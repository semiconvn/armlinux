#Sample Makefile
CFLAGS= -Wall -Oo
CC = gcc

INSTDIR=install
SCR_DIR=scr

all: app
app: main.o sum.o subtract.o
 gcc -o app main.o sum.o subtract.o
main.o: main.c
 gcc -I$(SCR_DIR) -C main.c
sum.o:
 gcc -c -I$(SCR_DIR) $(SCR_DIR)/sum.c
subtract.o:
 gcc -I$(SCR_DIR) -c $(SCR_DIR)/subtract.c
clean:
 rm *.o app
install: app
 @if [ -d $(INSTDIR) ]; then\
 cp app $(INSTDIR);\
 chmod 777 $(INSTDIR)/app;\
 echo "Install ok";\
 else\
 echo "Install error!";\
 fi
