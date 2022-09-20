#include <stdio.h>
#include <stdlib.h> 
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image/stb_image.h"
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image/stb_image_write.h"

#include"solo_yasuo.h"

void change_to_gray();
void change_to_sepia();

int main(void) 
{  
  int width, height, channels;   
  unsigned char *img = stbi_load("meo.jpg", &width, &height, &channels, 0);
  if(img == NULL) {
        printf("Error in loading the image\n");
        exit(404);
    }
   printf(YELHB BMAG"Your Image has loaded with a width of %dpx, a height of %dpx and %d channels\n"reset, width, height, channels);

   printf("\n");

   int choise;

    printf(BGRN"Enter 1 for convert image to gray and 2 for convert image to sepia: ");
    scanf("%d", &choise);

   if( choise == 1){
     change_to_gray();
     printf(BRED".....it's done");
   } else if ( choise == 2){
     change_to_sepia();
     printf(BRED".....it's done");
   }

  printf("\n");

}
