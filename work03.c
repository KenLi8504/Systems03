#include <stdio.h>

int problem1(){
  int sum = 0;
  for (int i = 0; i < 1000; i++){
    if (i % 3 == 0 || i % 5 == 0){
      sum = sum + i;
    }
  }
  printf("The sum of all multiples of 3 and/or 5 less than 1000 is %d \n", sum);
  return sum;
}

int problem2(){
  int sum = 0;
  int currentFib = 2;
  int prevFib = 1;
  while (currentFib < 4000000 &&
  prevFib < 4000000){
    if (currentFib % 2 == 0){
      sum = sum + currentFib;
    }
    int placeholder = currentFib;
    currentFib = currentFib + prevFib;
    prevFib = placeholder;
  }
  printf("The sum of all even fibonacci numbers less than 4 million is %d \n",sum);
  return sum;
}

int problem6(){
  int sumOfSquares = 0;
  int squareOfSum = 0;
  for (int naturalNum = 1; naturalNum <= 100; naturalNum++){
    sumOfSquares = sumOfSquares + (naturalNum * naturalNum);
    squareOfSum = squareOfSum + naturalNum;
  }
  squareOfSum = squareOfSum * squareOfSum;
  printf("The difference between the sum of squares and the square of the sum of the first 100 natural number is %d \n",squareOfSum - sumOfSquares);
}

int main(){
  problem1();
  problem2();
  problem6();
  return 0;
}
