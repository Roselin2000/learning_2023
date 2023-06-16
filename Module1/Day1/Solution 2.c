#include <stdio.h>

int main() {

  int marks;

  // take input from the user
  printf("Enter the marks: ");
  scanf("%d", &marks);

  // check the marks and print the grade
  if (marks >= 90 && marks <= 100) {
    printf("Grade A\n");
  } else if (marks >= 75 && marks <= 89) {
    printf("Grade B\n");
  } else if (marks >= 60 && marks <= 74) {
    printf("Grade C\n");
  } else if (marks >= 50 && marks <= 59) {
    printf("Grade D\n");
  } else {
    printf("Grade F\n");
  }

  return 0;
}
