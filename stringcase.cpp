#include <iostream>
#include <cstring>
using namespace std;

int main()
{
   char s[30];
   int i;
   cout<<"Enter the String in lowercase: ";  
   cin>>s;
   for(i=0;i<=strlen(s);i++) { 
      
      if(s[i]>=97 && s[i]<=122)
      {
		s[i]=s[i]-32;
      }
   }
   cout<<"The entered string in uppercase: "<<s;
   return 0;
}