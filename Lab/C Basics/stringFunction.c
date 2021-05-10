#include <stdio.h>
#include <string.h>

int main() {
   char str1[20] = "C programming";
   char str2[20];
   char str3="Hello";

   // copying str1 to str2
   strcpy(str2, str1);

   puts(str2); // C programming
   int cmp ;
   cmp=strcmp(str1,str3);
   printf("%d",cmp);
   return 0;
}