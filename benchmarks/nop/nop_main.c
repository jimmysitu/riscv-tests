// See LICENSE for license details.

//**************************************************************************
// Nop bencmark
//--------------------------------------------------------------------------
//
// Mess nop for IPC testing
//
#include "util.h"


//--------------------------------------------------------------------------
// Input/Reference Data


//--------------------------------------------------------------------------
// Main
int nop(){
    int i;
    for(i=0; i < 128; i++){
        asm("nop");
        asm("nop");
        asm("nop");
        asm("nop");
        asm("nop");
        asm("nop");
        asm("nop");
        asm("nop");
        asm("nop");
        asm("nop");
        asm("nop");
        asm("nop");
        asm("nop");
        asm("nop");
        asm("nop");
        asm("nop");
        asm("nop");
        asm("nop");
        asm("nop");
        asm("nop");
        asm("nop");
        asm("nop");
        asm("nop");
        asm("nop");
        asm("nop");
        asm("nop");
        asm("nop");
        asm("nop");
        asm("nop");
        asm("nop");
        asm("nop");
        asm("nop");
    }
}
int main( int argc, char* argv[] )
{

  setStats(1);
  nop();
  setStats(0);

  return 0;
}
