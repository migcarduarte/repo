#include <allegro.h>
#include <stdio.h>
#include <stdlib.h>
#include "mi_allegro.h"

#define MAXFILAS 20  
#define MAXCOLS 31
#define SPRITESHEET "Imágenes/roca.bmp"

BITMAP *buffer;
BITMAP *roca;

char mapa[MAXFILAS][MAXCOLS]={
    "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX",
    "X           XXXXX           X",
    "X XXX XXXXX       XXXXX XXX X",
    "X XXX XXXXX XXXXX XXXXX XXX X",
    "X                           X",
    "X XXX XX XXXXX XXXXX XX XXX X",
    "X     XX     XXX     XX     X",
    "X XXX XXXXXX XXX XXXXXX XXX X",
    "X XXX XX             XX XXX X",
    "X     XX XXXXXXXXXXX XX     X",
    "      XX XXXXXXXXXXX XX      ",
    "X XXX XX             XX XXX X",
    "X XXX    XXX XXX XXX    XXX X",
    "X     XX     XXX     XX     X",
    "X XXX XX XXXXXXXXXXX XX XXX X",
    "X X X                   X X X",
    "X X X XXXX XXXXXXX XXXX X X X",
    "X XXX XXXX         XXXX XXX X",
    "X          XXXXXXX          X",
    "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX",
};
void dibujar_mapa(){
    int row,col;

    for(row = 0 ; row< MAXFILAS ; row++){
	for(col = 0; col< MAXCOLS; col++){
	    if(mapa[row][col] == 'X'){
		draw_sprite(buffer, roca, col*30, row*30);
	    }
	}
    }
}

void pantalla(){
  blit(buffer, screen, 0,0,0,0,880, 600);
}

int main()
{
   allegro_init();
  install_keyboard();

   set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED, 880, 600, 0, 0);

    buffer = create_bitmap(880, 640);
    roca = load_bitmap("Imágenes/roca.bmp", NULL);

    while(!key[KEY_ESC]){
	dibujar_mapa();
	pantalla();
    }

    }
