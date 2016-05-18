#include "stdafx.h"
#include <iostream>
#include "globalGameInd.h"
#include "globalBit.h"

extern const unsigned int OPT_Mask_Map_Height{ opt::OPT_1 | opt::OPT_2 | opt::OPT_3 | opt::OPT_4 };
extern const unsigned int OPT_Mask_Map_Width{ opt::OPT_5 | opt::OPT_6 | opt::OPT_7 | opt::OPT_8 };


unsigned int mapStart(unsigned int OPT_N, unsigned int OPT_M) {
	return game::mapFlag = game::mapFlag | (OPT_N | OPT_M);
}

unsigned int mapShiftEast(unsigned int mapflag) {
	unsigned int y = (mapflag & OPT_Mask_Map_Height);
	unsigned int x = (mapflag & OPT_Mask_Map_Width);

	std::cout << x << std::endl;
	std::cout << y << std::endl;

	if (x > opt::OPT_5 && x <= opt::OPT_8) {
		unsigned int mapVault = mapflag & ~x;
		x = (x >> 1);
		mapflag = (mapVault | x);
		std::cout << "You shifted East.";
		return mapflag;
	}
	else {
		std::cout << "That move cannot be made.";
		return mapflag;
	}
}


unsigned int mapShiftWest(unsigned int mapflag) {
	unsigned int y = (mapflag & OPT_Mask_Map_Height);
	unsigned int x = (mapflag & OPT_Mask_Map_Width);

	std::cout << x << std::endl;
	std::cout << y << std::endl;

	if (x >= opt::OPT_5 && x < opt::OPT_8) {
		unsigned int mapVault = mapflag & ~x;
		x = (x << 1);
		mapflag = (x | mapVault);
		std::cout << "You shifted West.";
		return mapflag;
	}
	else {
		std::cout << "That move cannot be made.";
		return mapflag;
	}
}

unsigned int mapShiftNorth(unsigned int mapflag) {
	unsigned int y = (mapflag & OPT_Mask_Map_Height);
	unsigned int x = (mapflag & OPT_Mask_Map_Width);

	std::cout << x << std::endl;
	std::cout << y << std::endl;

	if (y >= opt::OPT_1 && y < opt::OPT_4) {
		unsigned int mapVault = mapflag & ~y;
		y = (y << 1);
		mapflag = (mapVault | y);
		std::cout << "You shifted North.";
		return mapflag;
	}
	else {
		std::cout << "That move cannot be made.";
		return mapflag;
	}
}

unsigned int mapShiftSouth(unsigned int mapflag) {
	unsigned int y = (mapflag & OPT_Mask_Map_Height);
	unsigned int x = (mapflag & OPT_Mask_Map_Width);

	std::cout << x << std::endl;
	std::cout << y << std::endl;

	if (y > opt::OPT_1 && y <= opt::OPT_4) {
		unsigned int mapVault = mapflag & ~y;
		y = (y >> 1);
		mapflag = (mapVault | y);
		std::cout << "You shifted South.";
		return mapflag;
	}
	else {
		std::cout << "That move cannot be made.";
		return mapflag;
	}
}

void currentPosition(unsigned int myflag) {
	if (myflag == (opt::OPT_1 | opt::OPT_5)) {
		std::cout << "You are currently at position (1 ,1).\n\n";
		std::cout << "o--o--o--o\no--o--o--o\no--o--o--o\nx--o--o--o\n";
	}
	else if (myflag == (opt::OPT_1 | opt::OPT_6)) {
		std::cout << "You are currently at position (2 ,1).\n\n";
		std::cout << "o--o--o--o\no--o--o--o\no--o--o--o\no--x--o--o\n";
	}
	else if (myflag == (opt::OPT_1 | opt::OPT_7)) {
		std::cout << "You are currently at position (3 ,1).\n\n";
		std::cout << "o--o--o--o\no--o--o--o\no--o--o--o\no--o--x--o\n";
	}
	else if (myflag == (opt::OPT_1 | opt::OPT_8)) {
		std::cout << "You are currently at position (4 ,1).\n\n";
		std::cout << "o--o--o--o\no--o--o--o\no--o--o--o\no--o--o--x\n";
	}
	else if (myflag == (opt::OPT_2 | opt::OPT_5)) {
		std::cout << "You are currently at position (1 ,2).\n\n";
		std::cout << "o--o--o--o\no--o--o--o\nx--o--o--o\no--o--o--o\n";
	}
	else if (myflag == (opt::OPT_2 | opt::OPT_6)) {
		std::cout << "You are currently at position (2 ,2).\n\n";
		std::cout << "o--o--o--o\no--o--o--o\no--x--o--o\no--o--o--o\n";
	}
	else if (myflag == (opt::OPT_2 | opt::OPT_7)) {
		std::cout << "You are currently at position (3 ,2).\n\n";
		std::cout << "o--o--o--o\no--o--o--o\no--o--x--o\no--o--o--o\n";
	}
	else if (myflag == (opt::OPT_2 | opt::OPT_8)) {
		std::cout << "You are currently at position (4 ,2).\n\n";
		std::cout << "o--o--o--o\no--o--o--o\no--o--o--x\no--o--o--o\n";
	}
	else if (myflag == (opt::OPT_3 | opt::OPT_5)) {
		std::cout << "You are currently at position (1 ,3).\n\n";
		std::cout << "o--o--o--o\nx--o--o--o\no--o--o--o\no--o--o--o\n";
	}
	else if (myflag == (opt::OPT_3 | opt::OPT_6)) {
		std::cout << "You are currently at position (2 ,3).\n\n";
		std::cout << "o--o--o--o\no--x--o--o\no--o--o--o\no--o--o--o\n";
	}
	else if (myflag == (opt::OPT_3 | opt::OPT_7)) {
		std::cout << "You are currently at position (3 ,3).\n\n";
		std::cout << "o--o--o--o\no--o--x--o\no--o--o--o\no--o--o--o\n";
	}
	else if (myflag == (opt::OPT_3 | opt::OPT_8)) {
		std::cout << "You are currently at position (4 ,3).\n\n";
		std::cout << "o--o--o--o\no--o--o--x\no--o--o--o\no--o--o--o\n";
	}
	else if (myflag == (opt::OPT_4 | opt::OPT_5)) {
		std::cout << "You are currently at position (1 ,4).\n\n";
		std::cout << "x--o--o--o\no--o--o--o\no--o--o--o\no--o--o--o\n";
	}
	else if (myflag == (opt::OPT_4 | opt::OPT_6)) {
		std::cout << "You are currently at position (2 ,4).\n\n";
		std::cout << "o--x--o--o\no--o--o--o\no--o--o--o\no--o--o--o\n";
	}
	else if (myflag == (opt::OPT_4 | opt::OPT_7)) {
		std::cout << "You are currently at position (3 ,4).\n\n";
		std::cout << "o--o--x--o\no--o--o--o\no--o--o--o\no--o--o--o\n";
	}
	else if (myflag == (opt::OPT_4 | opt::OPT_8)) {
		std::cout << "You are currently at position (4 ,4).\n\n";
		std::cout << "o--o--o--x\no--o--o--o\no--o--o--o\no--o--o--o\n";
	}
}