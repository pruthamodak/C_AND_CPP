#include<iostream>
using namespace std;



void reverse(char *str)
{
   if (*str)
   {
       reverse(str+1);
       //printf("%c", *str);
       cout<<str;
   }
}
 
/* Driver program to test above function */
int main()
{
   char a[] = "Geeks for Geeks";
   reverse(a);
   return 0;
}



