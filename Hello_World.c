#include <stdio.h>
#include <stdlib.h>

struct Phone
{
  /* data */
  int Display;
  int Ram ;
  int Memory;
};



int main()
{
  struct Phone IPHONE;
  IPHONE.Display =5.5;
  IPHONE.Ram = 4;
  IPHONE.Memory=64;


  printf("%d",IPHONE.Ram); 
  return 0; 

}

