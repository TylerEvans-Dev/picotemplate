//Tyler Evans u1313811
//Code based off of examples from the pico example lib.
//https://github.com/raspberrypi/pico-examples/blob/master/pico_w/wifi/blink/picow_blink.c

//this is the standard lib for the pico included in the sdk.
//#include "pico/stdlib.h"
//this is the lib for the wifi chip on the board.
//#include "pico/cyw43_arch.h"
#include <stdio.h>
#include "include/pico/stdlib.h"
#include "pico/cyw43_arch.h"

//here is the documentation of the board that we could choose
//that could work with this setup.
//pico

//pico W -- already in the stock room advantage. + has bluetooth and wifi.

//pico 2 -- next interation of the pico, has a faster clock and two experimental RISC cores + 2 ARM based cores.
//but can only opreate one or the other.

// pico 2 w same capablity but with wifi and bluetooth.

//here is the documentation
int main(){
    stdio_init_all();
    while(1){
        printf("hello  world!\n");
    }

    return 0;
}
