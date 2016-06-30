#include <stdio.h>

int main(){


int n, i, j, num, temp;
int array[100];


printf("Enter number of integer:");
scanf("%d", &n);

printf("Enter sequence of %d integer(Press Enter after each integer):\n", n);

for(i=0;i<n;i++){
  scanf("%d", &num);
  array[i] = num;
}

for(i=0;i<n-1;i++){
  for(j=0;j<n-i-1;j++){
    if(array[j] > array[j+1]){
      temp = array[j];
      array[j] = array[j+1];
      array[j+1] = temp;
    }
  }
}


for(i=0; i<n;i++)
  printf("%d ", array[i]);

}
