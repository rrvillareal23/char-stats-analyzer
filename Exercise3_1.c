#include <stdio.h>

int main()
{
  int spaceCount = 0;
  int lineCount = 0;
  int otherCharacters = 0;
  char ch;

  printf("Enter a string to get its stats(enter # when complete): \n");

  //while loop goes through input and as long is inputs aren't # and % then it will continue to loop.
  while((ch = getchar()) != '#' && ch != '%'){
      //if ch = new line, line counter gets plus 1
      if (ch == '\n'){
        lineCount++;
      }
      //if ch = a space, space counter gets plus 1
      else if (ch == ' '){
        spaceCount++;
      }
      //used ++other... to get rid of the spaces that would be included in this input.
      else{
        ++otherCharacters; 
      }
  } 

  //prints
  printf("Number of lines: %d \n", lineCount);
  printf("Number of spaces: %d \n", spaceCount);
  printf("Number of other characters: %d \n", otherCharacters);

  return 0;
}
