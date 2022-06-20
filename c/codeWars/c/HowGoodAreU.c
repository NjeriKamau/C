// There was a test in your class and you passed it. Congratulations!
// But you're an ambitious person. You want to know if you're better than the average student in your class.

// You receive an array with your peers' test scores. Now calculate the average and compare your score!

// Return True if you're better, else False!
// Note:

// Your points are not included in the array of your class's points. For calculating the average point you may add your point to the given array!





int better_than_average(int class_points[], int class_size, int your_points) {
  // Your code here :)
  // Note: class_size is the length of class_points.
//   printf("Enter your marks");
//   scanf("%d",&your_points);
  
  int avg, i,  sum = 0;
  for (i = 0;i < class_size; i ++){
    sum += class_points[i];
  }
  
  avg = sum/class_size;
  if (avg > your_points){
    return 0;
  }
  else
    return 1;
}