#include<bits/stdc++.h>
using namespace std;

int main()
{  int space =0;
   char a[30] = "p aj";
    if( (a[0]>64&&a[0]<91) ||(a[0]>96&&a[0]<123)||(a[0==95])  )
    { 
     for(int i=0;i<30;i++)
      {
         if((a[i]==' ') && (a[i]!='\0')) 
         {space = 1;}
      }
       if(space ==1) {printf("it is not a valid identifier");}
       else {printf("it is a valid identifier"); }
     }
     // just adding this comment to see what happens 
    else{printf("not valid ");}
    return 0;
}
