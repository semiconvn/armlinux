obj-m+=hello.o
CROSS_COMPILE=0
if CROSS_COMPILE
	BBB_KERNEL_SRC=/media/phutruong/LINUX_DATA/semicon/workspace/bbb/linux-kernel-labs/bootloader/beaglebone-black/linux-3.12-bone-black
else
	BBB_KERNEL_SRC=/lib/modules/$(shell uname -r)/build/
endif

all:
	make -C $(BBB_KERNEL_SRC) M=$(PWD) modules
clean:
	make -C $(BBB_KERNEL_SRC) M=$(PWD) clean
