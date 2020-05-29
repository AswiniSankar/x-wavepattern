/*
5
4
*       * 
  *   *   
    *     
  *   *   
*       * 
*       * 
  *   *   
    *     
  *   *   
*       * 
*       * 
  *   *   
    *     
  *   *   
*       * 
*       * 
  *   *   
    *     
  *   *   
*       * 
*/
#include<stdio.h>
int main()
{
  int h,l,i,j,k;
  scanf("%d%d",&h,&l);
 for(i=0;i<l;i++)
  {
     for(j=0;j<h;j++)
     {for(k=0;k<h;k++)
      {
      if(j==k || (j+k)==h-1)
         printf("* ");
      else
       printf("  ");
      }
     //printf("\n");
     }
  } 
  printf("\n");
  return 0;
}
/*
*          * *          * *          * *          * 
   *    *       *    *       *    *       *    *    
      *            *            *            *       
   *    *       *    *       *    *       *    *    
*          * *          * *          * *          * 
*/
#include<stdio.h>
int main()
{
  int h,l,i,j,k;
  scanf("%d%d",&h,&l);
 for(i=0;i<h;i++)
  {
     for(j=0;j<h*l;j++)
     {
      if((i%h)==(j%h)||((j%h)+(i%h))==h-1)
         printf("* ");
      else
       printf("  ");
      
  
     }
     printf("\n");
  } 
  printf("\n");
  return 0;
}
/*
5
4
>>          >> >>          >> >>          >> >>          >> 
   >>    >>       >>    >>       >>    >>       >>    >>    
      >>             >>             >>             >>       
   >>    >>       >>    >>       >>    >>       >>    >>    
>>          >> >>          >> >>          >> >>          >> 
*/
#include<stdio.h>
int main()
{
  int h,l,i,j,k;
  scanf("%d%d",&h,&l);
 for(i=0;i<h;i++)
  {
     for(j=0;j<h*l;j++)
     {
      if((i%h)==(j%h)||((j%h)+(i%h))==h-1)
         printf(">> ");
      else
       printf("   ");
      
  
     }
     printf("\n");
  } 
  printf("\n");
  return 0;
}
/*
5
4
][          ][ ][          ][ ][          ][ ][          ][ 
   ][    ][       ][    ][       ][    ][       ][    ][    
      ][             ][             ][             ][       
   ][    ][       ][    ][       ][    ][       ][    ][    
][          ][ ][          ][ ][          ][ ][          ][ 

*/
#include<stdio.h>
int main()
{
  int h,l,i,j,k;
  scanf("%d%d",&h,&l);
 for(i=0;i<h;i++)
  {
     for(j=0;j<h*l;j++)
     {
      if((i%h)==(j%h)||((j%h)+(i%h))==h-1)
         printf("][ ");
      else
       printf("   ");
      
  
     }
     printf("\n");
  } 
  printf("\n");
  return 0;
}
/*
5
4
-+          -+ -+          -+ -+          -+ -+          -+ 
   -+    -+       -+    -+       -+    -+       -+    -+    
      -+             -+             -+             -+       
   -+    -+       -+    -+       -+    -+       -+    -+    
-+          -+ -+          -+ -+          -+ -+          -+ 

*/
#include<stdio.h>
int main()
{
  int h,l,i,j,k;
  scanf("%d%d",&h,&l);
 for(i=0;i<h;i++)
  {
     for(j=0;j<h*l;j++)
     {
      if((i%h)==(j%h)||((j%h)+(i%h))==h-1)
         printf("-+ ");
      else
       printf("   ");
      
  
     }
     printf("\n");
  } 
  printf("\n");
  return 0;
}
/*
5
4
:)          :) :)          :) :)          :) :)          :) 
   :)    :)       :)    :)       :)    :)       :)    :)    
      :)             :)             :)             :)       
   :)    :)       :)    :)       :)    :)       :)    :)    
:)          :) :)          :) :)          :) :)          :) 
*/
#include<stdio.h>
int main()
{
  int h,l,i,j,k;
  scanf("%d%d",&h,&l);
 for(i=0;i<h;i++)
  {
     for(j=0;j<h*l;j++)
     {
      if((i%h)==(j%h)||((j%h)+(i%h))==h-1)
         printf(":) ");
      else
       printf("   ");
      
  
     }
     printf("\n");
  } 
  printf("\n");
  return 0;
}
/*
5
4
`       ` `       ` `       ` `       ` 
  `   `     `   `     `   `     `   `   
    `         `         `         `     
  `   `     `   `     `   `     `   `   
`       ` `       ` `       ` `       ` 

*/
#include<stdio.h>
int main()
{
  int h,l,i,j,k;
  scanf("%d%d",&h,&l);
 for(i=0;i<h;i++)
  {
     for(j=0;j<h*l;j++)
     {
      if((i%h)==(j%h)||((j%h)+(i%h))==h-1)
         printf("` ");
      else
       printf("  ");
      
  
     }
     printf("\n");
  } 
  printf("\n");
  return 0;
}
/*
5
3
*-          *- *-          *- *-          *- 
   *-    *-       *-    *-       *-    *-    
      *-             *-             *-       
   *-    *-       *-    *-       *-    *-    
*-          *- *-          *- *-          *- 
*/
#include<stdio.h>
int main()
{
  int h,l,i,j,k;
  scanf("%d%d",&h,&l);
 for(i=0;i<h;i++)
  {
     for(j=0;j<h*l;j++)
     {
      if((i%h)==(j%h)||((j%h)+(i%h))==h-1)
         printf("*- ");
      else
       printf("   ");
      
  
     }
     printf("\n");
  } 
  printf("\n");
  return 0;
}
