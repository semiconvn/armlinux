#Duong Van Thanh

Cac lenh github co ban:

1. Cài đặt git cho ubuntu gõ lệnh `*sudo apt-get install git*`.
2. Để kiểm tra việc cài đặt đã thành công gõ lệnh `*git --version*` nếu hiển thị phiên bản thì có nghĩa là cài đặt thành công.
3. Bây giờ để cấu hình git trên Ubuntu ta làm như sau:
	`*git config --global user.name "Tên tài khoản github của bạn"*`
	`*git config --global user.email "Email bạn dùng để đăng ký github"*`
	Ví dụ:
	Tên tài khoản github của mình là thanhduongvs, email là thanh.duong.vs@gmail.com thì mình gõ như sau:
	`*git config --global user.name "thanhduongvs"*`
	`*git config --global user.email "thanh.duong.vs@gmail.com"*`
4. Ta bắt đầu khởi tạo kho chứa ở local (tức là trên máy tính của chúng ta) bằng lệnh `*git init <tên kho chứa>*`. Ví dụ: `*git init MyGithub*`.
5. Clone Repository có sẵn về máy tính bằng lệnh `*git clone địa_chỉ*`. Ví dụ: `*git clone https://github.com/semiconvn/armlinux.git*`.
6. Xem mình đang đứng tronh nhánh nào bằng lệnh `*git branch*`.
7. Để chuyển tới nhánh khác gõ lệnh `*git checkout tên_nhánh*`. Ví dụ: `*git checkout 20161223*` là chuyển tới nhánh 20161223.
8. Để thên folder/file gõ lệnh `*git add thanhduong/baitapvim*`. Ví dụ: `*git add thanhduong/baitapvim*` là thêm thư mục.
9. Để pull từ nhánh 20161223 về máy tính gõ lệnh `*git pull origin 20161223*`.
10. Mô tả hành động trước khi push gõ lệnh `*git commit -a -m "mo ta hanh dong vua thuc hien"*`.
11. Để push lên github gõ lệnh `*git push -u origin 20161223*`. Sau đó nhập user và password. 
