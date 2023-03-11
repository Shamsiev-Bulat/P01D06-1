#include <stdio.h>
  

#define width 80
#define hight 25

int main(){
    char space = ' ';
    char weight = '|';
    char high = '|';
    for (int i = 1; i <= 25; i++)
    {
        printf("|");
        for (int j = 1; j <= 81; j++)
        {
            
            if((i == 1 || i == 25) && j > 1);
            else printf("%c", space);
            if(j == 80) printf("%c", weight);
            if(j == 40) printf("%c", high);
        }
        printf("\n");
    }
    
}


