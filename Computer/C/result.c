// Writing a program to see if a user passed the exam or not based on grades

#include <stdio.h>

int main()
{

  // Declaring the variables
  float a,b,c;

  // Taking the input
  printf("Enter the marks of subject A: \n");
  scanf("%f",a);
  printf("Enter the marks of subject B: \n");
  scanf("%f",b);
  printf("Enter the marks of subject C: \n");
  scanf("%f",c);

  // Calculating the scores
  float score_a, score_b, score_c;

  score_a = (a/100)*100;
  score_b = (b/100)*100;
  score_c = (c/100)*100;

  float total_score = score_a + score_b + score_c;

  // Conditional statements

  if( (score_a >= 33 && score_b >= 33 && score_c >= 33) && (total_score >= 40) )
  {
    printf("You have passed the exam");
  }

  else
  {
    printf("You are a failure");
  }

  return 0;
}
