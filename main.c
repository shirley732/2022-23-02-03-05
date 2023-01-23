// write a program that reverses a character array

#include <stdio.h>
#include <string.h>
int main() {

  char s2[] = "sampleword";
  int i = strlen(s2);
  while (i != -1) { //run through the word from the back
    printf("%c",s2[i]);  //print every character
    i--;
  }
  return 0;
  
}