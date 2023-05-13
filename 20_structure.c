// ?WAP to define a structure time having sec, min, and hrs. fields, read the fields for t1 and t2 time, and pass a structure to a user-defined function to add two time t1 and t2 and returns the time structure variable

#include <stdio.h>

// Define a struct for time
struct time
{
  int sec, min, hrs;
};

// Function to add two time values and return the result
struct time add_time(struct time t1, struct time t2);

int main()
{
  // Declare three time variables
  struct time t1, t2, result;

  // Prompt the user to enter two time values
  printf("Enter time t1 (hh:mm:ss): ");
  scanf("%d:%d:%d", &t1.hrs, &t1.min, &t1.sec);
  printf("Enter time t2 (hh:mm:ss): ");
  scanf("%d:%d:%d", &t2.hrs, &t2.min, &t2.sec);

  // Add the two time values and store the result in a third variable
  result = add_time(t1, t2);

  // Display the result
  printf("Result: %dhrs:%dmin:%dsec\n", result.hrs, result.min, result.sec);

  return 0;
}

// Function to add two time values and return the result
struct time add_time(struct time t1, struct time t2)
{
  struct time result;
  result.sec = t1.sec + t2.sec;
  result.min += t1.min + t2.min;
  result.hrs += t1.hrs + t2.hrs;

  // Return the result
  return result;
}