#include <stdio.h>
#include <stdlib.h>

float average(const float *array1, int arsize)
{
  float result = 0;
  for(int i = 0; i < arsize; i++){
    result += *(array1 + i);
  }
  return result / arsize;
}

int main()
{
  int amount;
  printf("Give me the amount of numbers: ");
  scanf("%i", &amount);
  float *arr = (float *) malloc(amount * sizeof(float));
  for(int i = 0; i < amount; i++){
    printf("Give me the %d number: ", i + 1);
    scanf("%f", arr + i);
  }
  for(int i = 0; i < amount; i++){
    printf("%.2f\n", *(arr + i));
  }
  printf("The average is: %.2f\n", average(arr, amount));
  free(arr);
}
