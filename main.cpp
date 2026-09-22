#include "chip8.h" // Your cpu core implementation
#include <iostream>

chip8 my_chip8;

int main(int argc, char **argv) {
    // Set up render system and register input callbacks
    setup_input();

    // Initialize the Chip8 system and load the game into the memory  
    my_chip8.initialize();
    my_chip8.load_game("pong");
    // Emulation loop
    for(;;) {
    // Emulate one cycle
    my_chip8.emulate_cycle();

    // If the draw flag is set, update the screen
    if(my_chip8.draw_flag)
    draw_graphics();
    // Store key press state (Press and Release)
    my_chip8.setKeys();	
    }
    
    return 0;
}