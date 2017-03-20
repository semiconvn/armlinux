#include <stdio.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
  int fd = 0;
  fd = open("/dev/chardrv", O_RDWR);
  if(fd < 0){
    printf("cannot open device \n");
    goto exit;
  }
   ioctl(fd, 0, 0);
exit:
   if(fd > 0){
	close(fd);
   }
}
