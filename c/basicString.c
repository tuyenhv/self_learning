#include <stdio.h> // thư viện này cần dùng để vào ra dữ liệu
#include <string.h> // thư viện này cần dùng cho các xử lý string

int main ()
{
    // khai báo hai mảng ký tự
   char str1[15];
   char str2[15];
   
   // biến này chứa giá trị trả về của hàm so sánh hai string sau này
   int ret;

   // copy abcdef đến string thứ nhất
   strcpy(str1, "abcdef");
   // copy ABCDEF đến string thứ hai
   strcpy(str2, "ABCDEF");

   // So sánh hai strings, giá trị trả về của hàm gán vào biến ret
   ret = strcmp(str1, str2);

   if(ret < 0)
   {
      printf("Chuoi str1 la ngan hon chuoi str2");
   }
   else if(ret > 0) 
   {
      printf("Chuoi str2 la ngan hon chuoi str1");
   }
   else 
   {
      printf("Chuoi str1 la bang chuoi str2");
   }
   
   return(0);
}
