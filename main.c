#include <stdio.h>
int main(void) {
  //this is the change i made
  int x;
  int y;
  int i=1;

  printf("Enter the command number:\n");
  printf("0) Exit\n");
  printf("1) AND\n");
  printf("2) OR\n");
  scanf("%d", &i);

  while(i!=0){
    if(i==0){
      break;
    }

    else if(i==1){
      printf("x=");
      scanf("%d", &x);
      
      while(x!=0 && x!=1){
        printf("INVALID INPUT\n");
        printf("x=");
        scanf("%d", &x);
      }
      
      printf("y="); 
      scanf("%d", &y);

      while(y!=0 && y!=1){
        printf("INVALID INPUT\n");
        printf("y=");
        scanf("%d", &y);
      }
      printf("%d AND %d is %d\n", x, y, x & y);
      printf("Enter the command number:\n");
      printf("0) Exit\n");
      printf("1) AND\n");
      printf("2) OR\n");
      scanf("%d", &i);
    }
	else if(i==2){
      printf("x=");
      scanf("%d", &x);
      
      while(x!=0 && x!=1){
        printf("INVALID INPUT\n");
        printf("x=");
        scanf("%d", &x);
      }
      
      printf("y="); 
      scanf("%d", &y);

      while(y!=0 && y!=1){
        printf("INVALID INPUT\n");
        printf("y=");
        scanf("%d", &y);
      }
      printf("%d OR %d is %d\n", x, y, x | y);
      printf("Enter the command number:\n");
      printf("0) Exit\n");
      printf("1) AND\n");
      printf("2) OR\n");
      scanf("%d", &i);
  }
}
return 0;
}