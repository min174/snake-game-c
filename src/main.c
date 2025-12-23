#include <stdio.h>

#include "../include/menu.h"
#include "../include/gameplay.h"

int main() {
    int play_options = 1;
    int final_score = 0;
    int start_game = 1;

    while (start_game) {
        start_game=0;
        title_screen();

        while (play_options==1) {
            setup();
            game_loop();
            final_score = get_score();
            play_options = quit_menu(final_score);

            //if the input is 2, the user will be brought back to the menu
            if (play_options==2) {
                start_game = 1;
                play_options=1;
                break;
            }
        }
    }
    return 0;
}