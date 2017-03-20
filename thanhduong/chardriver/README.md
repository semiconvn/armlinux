#Vân Sơn @thanhduongvs

Các bước thực hiện:  
1. gõ lệnh `make` để build ra file *chardriver.ko*  
2. gõ lệnh `gcc -o testchar testchar.c` để buid ra file test chardriver   
3. gõ lệnh `sudo insmod chardriver.ko` để chèn file thực thi vào kernel  
4. gõ lệnh `lsmod | grep "char"` để xem driver có driver đã chèn vào kernel chưa  
5. gõ lệnh `sudo ./testchar` để kiểm tra code của driver  
6. gõ lệnh `dmesg | tail` để xem tiến trình  
7. gõ lệnh `sudo rmmod chardriver` để xóa khỏi kernel  
