#include <stdio.h>

int main(){
  
  int array[5] = {1,3,5,7,9};

  //pointer
  int *p = arr;

  for(int i = 0; i < 5; i++){
    printf("%d\n", array[i]);
  }
  return 0;
}


//function pointers

int sum(int a, intb){
  return a+b;
}

int *(func_ptr) (int, int);
