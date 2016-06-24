#include <stdio.h>
 
void print_floyd(int);
 
int main() 
{

int i, j, k, l, sum, a, b=1, c=2;

printf("Enter number of rows(odd numbers): ");
scanf("%d", &sum);
if(sum%2==0){
  printf("Please enter odd numbers only.\n");
  sum=0;
  main();
}

for(i=0; i<sum; i++){

  if(b==sum){
    a = 0;
  }else{
    a = (sum-b)/2;
  }

  for(j=0;j<a;j++){
    printf(" ");
  }

  for(k=0;k<b;k++){
    printf("*");
  }

  printf("\n");

  if(b==sum){
    c = -2;
  }

  b += c;


}


}
