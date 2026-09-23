#ifndef CHIP8_H
#define CHIP8_H

class chip8 {
private:

public:
    void initialize() {
        //Initialize registers and memory once
        unsigned short opcode;
        unsigned char memory[4096];
        unsigned char V[16];
        unsigned short I;
        unsigned short pc;
        unsigned char graphics[64 * 32]; //array to hold pixel state
        unsigned char delay_timer;
        unsigned char sound_timer;
        unsigned short stack[16];
        unsigned short stack_ptr;
        unsigned char key[16];
    }
    void load_game();
    void emulate_cycle();
};

#endif