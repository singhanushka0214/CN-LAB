//Bit stuffing
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100

int main()
{
  char *p,*q;
  char temp;
  char in[MAXSIZE];
  char stuff[MAXSIZE];
  char destuff[MAXSIZE];
  
  int count=0;
  
  printf("enter the input character string (0‘s & 1‘s only):\n");
  scanf("%s",in);
  
  p=in;
  q=stuff;

  //in  =    0110111111101100111111101
  //stuff  = 0110111110
  
  while(*p!='\0')
  {
    if(*p=='0')
    {
      *q=*p;
      q++;
      p++;
    }
    else
    {
      while(*p=='1' && count!=5)
      {
        count++;
        *q=*p;
        q++;
        p++;
      }
      
      if(count==5)
      {
        *q='0';
        q++;
      }
      count=0;
    }
  }
  *q='\0';
  printf("\nthe stuffed character string is");
  printf("\n%s",stuff);
  
  p=stuff;
  q=destuff;
  while(*p!='\0')
  {
    if(*p=='0')
    {
      *q=*p;
      q++;
      p++;
    }
    else
    {
      while(*p=='1' && count!=5)
      {
        count++;
        *q=*p;
        q++;
        p++;
      }
      if(count==5)
      {
        p++;  //skip
      }
      count=0;
    }
  }
  *q='\0';
  printf("\nthe destuffed character string is");
  printf("\n%s\n",destuff);
  return 0;

}
