obj-m+=chardriver.o
BBB_KERNEL_SRC=/lib/modules/$(shell uname -r)/build
all:
	make -C $(BBB_KERNEL_SRC) M=$(PWD) modules
clean:
	make -C $(BBB_KERNEL_SRC) M=$(PWD) clean
