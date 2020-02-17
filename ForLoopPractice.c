#include <stdio.h>

int main() {
  printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
  int i = 0;
  for (i=0;i<10;i++){
    printf("i = %d\n", i);
  }
  printf("\nThe Value of i after exiting the loop is %d\n\n",i);
  printf("\nRemember that the loop condition checks the conditional statement before it loops again");
  printf("Consequently, when i equals 10, the loop breaks.\n\n");
  printf("i is updated before the conditon is checked- hence the value of i after exiting the loop is 10.");
  printf("\n\n\t\t\tCoding is Fun !\n\n\n");
  return 0;
}