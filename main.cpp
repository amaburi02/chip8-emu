#include "chip8.h" // Your cpu core implementation
#include <iostream>
#include <fstream>
#include <iomanip>
#include <filesystem>

chip8 my_chip8;

int main(int argc, char **argv) {
    // Set up render system and register input callbacks
    //setup_input();

    //Read rom
    std::string filename = "C:\\dev\\projects\\chip8-emu\\Particle Demo.ch8";
    //std::cin >> filename;
    unsigned char x;

    std::ofstream output_hex("hex.txt");
    std::ifstream hex(filename, std::ios::binary);

    if (!hex.is_open()) {
        std::cout << "Unable to open file" << std::endl;
        return 1;
    }

    hex >> std::noskipws;
    while (hex >> x) {
        output_hex << std::hex << std::setw(2) << std::setfill('0') << (int)x << " ";
    }
/*
    // Initialize the Chip8 system and load the game into the memory  
    my_chip8.initialize();
    my_chip8.load_game();
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
    */
    return 0;
}