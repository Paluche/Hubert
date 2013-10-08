#include <stdlib.h>
#include <stdio.h>

int main (int argc, char **argv)
{
  if(argc == 1) {
    printf("Error, usage %s <text>\n", argv[0]);
    return -1;
  }

  for (int u = 1; u < argc; u++) {
    char *text = argv[u];
    for (int i = 0; text[i]; i++) {
      unsigned char letter = text[i];
      if (((letter >= 'a') && (letter < 'n')) ||
          ((letter >= 'A') && (letter < 'N'))) {
        letter += 13;
      } else if (((letter >= 'n') && (letter <= 'z')) ||
                 ((letter >= 'N') && (letter <= 'Z'))) {
        letter -= 13;
      } else {
       // Special characters : do nothing
      }
        printf("%c", letter);
    }
    printf(" ");
  }
  printf("\n");
  return 0;
}
