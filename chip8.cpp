#include "chip8.h"
#include <fstream>

void chip8::initialize() {
    for (int i = 0; i < 4096; i++) {
        memory[i] = 0;
    }
}

void chip8::load_game(std::fstream& hex_file) {
    char ch;
    int array_index = 0;
    while (hex_file.get(ch)) {
        memory[array_index] == ch;
    }
}

void chip8::emulate_cycle() {
    //fetch, decode, and execute opcode
    
    //update timers
}