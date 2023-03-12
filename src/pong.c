#include <stdio.h>

// int rBoardKey(char key, int rPstart, int rPend);
// int lBoardKey(char key, int lPstart, int lPend);

int main() {
  int ballx = 41, bally = 12,
      start = 11; //, rPstart = 10, lPstart = 10, rPend, lPend;

  for (int y = 0; y < 25; y++) {
    for (int x = 0; x < 80; ++x) {
      if (y == 0 || y == 24) { //верхняя сетка
        printf("-");
      } else if (x == ballx && y == bally) { // мячь
        printf("0");
      } else if (x == 0 || x == 79) { // левая и правая линия
        printf("|");
      } else if (x == 40) { // ср. линия
        printf("|");
      } else if (x == 2 && y > start && y < start + 4) // 1 ракетка
      {
        printf("|");
      } else if (x == 77 && y > start && y < start + 4) // 2 ракетка
      {
        printf("|");
      }

      else {
        printf(" ");
      }
    }

    printf("\n");

    /* char key;

     scanf("%c", &key);

     if (rBoardKey(key, rPstart, rPend) == 1) {
         rPstart++;

         rPend++;

     } else if (rBoardKey(key, rPstart, rPend) == -1) {
         rPstart--;

         rPend--;
     } else {
         rPstart = rPstart;

         rPend = rPend;
     }

     if (lBoardKey(key, lPstart, lPend) == 1) {
         lPstart++;

         lPend++;

     } else if (lBoardKey(key, lPstart, lPend) == -1) {
         lPstart--;

         lPend--;
     } else {
         lPstart = lPstart;

         lPend = lPend;
     }

     if (key == '\n') {
         pointX += pointSpeedX;

         pointY += pointSpeedY;
     }
 */
  }
}

/*int rBoardKey(char key, int rPstart, int rPend) {
    int mov;

    if (key == 'a' && rPstart != 1) {
        mov = -1;

    } else if (key == 'z' && rPend != 21) {
        mov = 1;

    } else {
        mov = 0;
    }

    return mov;
}

int lBoardKey(char key, int lPstart, int lPend) {
    int mov;

    if (key == 'a' && lPstart != 1) {
        mov = -1;

    } else if (key == 'z' && lPend != 21) {
        mov = 1;

    } else {
        mov = 0;
    }

    return mov;
}*/
