// Write a program that finds the summation of every number from 1 to num. The number will always be a positive integer greater than 0.

int summation(int num) {
  int i, val = 0;
//   int i;
  for (i = 1; i <= num; i++){
    val += i;    
  }
  return val;
}