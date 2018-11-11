#include <stdio.h>
void factors(int n){
  static int i=2;
//   printf("n %d =",n);
  if(n==1){
    return ;
  }
  else {
//     int flag=0;
    if((n%i)==0){
      printf("%d\n",i);
      factors(n/i);
//       flag=1;
    }
    else{
//       printf("i++ %d=",i);
     i++;
      factors(n);
    }
  }
}
int main()
{
   int n;
   scanf("%d",&n);
//   int i=2;
	factors(n);
   return 0;
}

