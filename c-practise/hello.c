#include<stdio.h>
char *strcpy_own(char *s1, const char *s2);
char *strcat_own(char *s1, const char *s2);
int main()
{
  char s2[20] = "anuj";
  char s1[20] = "kumar";
  char *s;
  s= strcat_own(s1,s2);
  printf("%s\n",s1);
  printf("hello world\n");
 return 0;
}

char *strcpy_own(char *s1, const char *s2)
{
   while( *s2 != '\0')
   {
           *s1 =  *s2; 
          s1++;
          s2++;
   }
 *s1 = '\0';
   return s1;

}
#if 1
char *strcat_own(char *s1, const char *s2)
{
   char *s;
   //s= s1;
   while( *s1 != '\0')
   {
      s++;
   }
   while( (*s1= *s2) != '\0')
   {
          s1++;
          s2++;
   }
   return s1;

}
#endif
//gcc -o hello hello.c
//./hello
