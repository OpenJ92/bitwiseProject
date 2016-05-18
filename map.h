#ifndef MAP
#define MAP

unsigned int mapStart(unsigned int OPT_N, unsigned int OPT_M);
unsigned int mapShiftEast(unsigned int mapflag);
unsigned int mapShiftWest(unsigned int mapflag);
unsigned int mapShiftNorth(unsigned int mapflag);
unsigned int mapShiftSouth(unsigned int mapflag);
void currentPosition(unsigned int myflag);

#endif