// Bitwise_Project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <bitset>
#include "mapSource.h"
#include "globalBit.h"
#include "globalGameInd.h"
#include "map.h"

extern unsigned int mapFlag{ 0 };
extern unsigned int gameTrack{ 0 };



void puzzleGame(unsigned int myflag) {
	if (myflag == (opt::OPT_1 | opt::OPT_5)) {
		std::cout << "Game 1: Your ship has crashed. In the distance, you see a small town. As you approach, a guardsman stops you. Something. Something.";
		if ((gameTrack & opt::OPT_1) == opt::OPT_1) {
			std::cout << "You've played this game.\n";
		}
		gameTrack |= opt::OPT_1;
		std::cout << std::endl;
	}
	else if (myflag == (opt::OPT_1 | opt::OPT_6)) {
		std::cout << "Game 2: ";
		//Tag game on vector
		gameTrack |= opt::OPT_2;
		if ((gameTrack & opt::OPT_2) == opt::OPT_2) {
			std::cout << "You've played this game.\n";
		}
		gameTrack |= opt::OPT_2;
	
	}
	else if (myflag == (opt::OPT_1 | opt::OPT_7)) {
		std::cout << "Game 3: ";
		if ((gameTrack & opt::OPT_3) == opt::OPT_3) {
			std::cout << "You've played this game.\n";
		}
		gameTrack |= opt::OPT_3;
		std::cout << std::endl;
	}
	else if (myflag == (opt::OPT_1 | opt::OPT_8)) {
		std::cout << "Game 4: ";
		if ((gameTrack & opt::OPT_4) == opt::OPT_4) {
			std::cout << "You've played this game.\n";
		}
		gameTrack |= opt::OPT_4;
		std::cout << std::endl;
	}
	else if (myflag == (opt::OPT_2 | opt::OPT_5)) {
		std::cout << "Game 15: ";
		if ((gameTrack & opt::OPT_F) == opt::OPT_F) {
			std::cout << "You've played this game.\n";
		}
		gameTrack |= opt::OPT_F;
		std::cout << std::endl;
	}
	else if (myflag == (opt::OPT_2 | opt::OPT_6)) {
		std::cout << "Game 5: ";
		if ((gameTrack & opt::OPT_5) == opt::OPT_5) {
			std::cout << "You've played this game.\n";
		}
		gameTrack |= opt::OPT_5;
		std::cout << std::endl;
	}
	else if (myflag == (opt::OPT_2 | opt::OPT_7)) {
		std::cout << "Game 6: ";
		if ((gameTrack & opt::OPT_6) == opt::OPT_6) {
			std::cout << "You've played this game.\n";
		}
		gameTrack |= opt::OPT_6;
		std::cout << std::endl;
	}
	else if (myflag == (opt::OPT_2 | opt::OPT_8)) {
		std::cout << "Game 7: ";
		if ((gameTrack & opt::OPT_7) == opt::OPT_7) {
			std::cout << "You've played this game.\n";
		}
		gameTrack |= opt::OPT_7;
		std::cout << std::endl;
	}
	else if (myflag == (opt::OPT_3 | opt::OPT_5)) {
		std::cout << "Game 8: ";
		if ((gameTrack & opt::OPT_8) == opt::OPT_8) {
			std::cout << "You've played this game.\n";
		}
		gameTrack |= opt::OPT_8;
		std::cout << std::endl;
	}
	else if (myflag == (opt::OPT_3 | opt::OPT_6)) {
		std::cout << "Game 9";
		if ((gameTrack & opt::OPT_9) == opt::OPT_9) {
			std::cout << "You've played this game.\n";
		}
		gameTrack |= opt::OPT_9;
		std::cout << std::endl;
	}
	else if (myflag == (opt::OPT_3 | opt::OPT_7)) {
		std::cout << "Game 10";
		if ((gameTrack & opt::OPT_A) == opt::OPT_A) {
			std::cout << "You've played this game.\n";
		}
		gameTrack |= opt::OPT_A;
		std::cout << std::endl;
	}
	else if (myflag == (opt::OPT_3 | opt::OPT_8)) {
		std::cout << "Game 11: ";
		if ((gameTrack & opt::OPT_B) == opt::OPT_B) {
			std::cout << "You've played this game.\n";
		}
		gameTrack |= opt::OPT_B;
		std::cout << std::endl;
	}
	else if (myflag == (opt::OPT_4 | opt::OPT_5)) {
		std::cout << "Game 12: ";
		if ((gameTrack & opt::OPT_C) == opt::OPT_C) {
			std::cout << "You've played this game.\n";
		}
		gameTrack |= opt::OPT_C;
		std::cout << std::endl;
	}
	else if (myflag == (opt::OPT_4 | opt::OPT_6)) {
		std::cout << "Game 13: ";
		if ((gameTrack & opt::OPT_D) == opt::OPT_D) {
			std::cout << "You've played this game.\n";
		}
		gameTrack |= opt::OPT_D;
		std::cout << std::endl;
	}
	else if (myflag == (opt::OPT_4 | opt::OPT_7)) {
		std::cout << "Game 14: ";
		if ((gameTrack & opt::OPT_E) == opt::OPT_E) {
			std::cout << "You've played this game.\n";
		}
		gameTrack |= opt::OPT_E;
		std::cout << std::endl;
	}
	else if (myflag == (opt::OPT_4 | opt::OPT_8)) {
		std::cout << "Game 16: ";
		if ((gameTrack & opt::OPT_G) == opt::OPT_G) {
			std::cout << "You've played this game.\n";
		}
		gameTrack |= opt::OPT_G;
		std::cout << std::endl;
	}
}

void movementPhase(unsigned int myflag) {
	std::cout << "Welcome to DOStiny. Explore the martian wastes.\n\nYour current location is: ";
	currentPosition(myflag);
	std::cout << std::endl;
	int turn{ 15 };
	int direct;

	while (turn > 0) {
		std::cout << "\n____________________________________________________________________";
		std::cout << "\nYou have " << turn << " turns remaining. ";
		currentPosition(myflag);
		puzzleGame(myflag);


		std::cout << "\n____________________________________________________________________";

		//end step
		std::cout << "\n\n\tSelect a direction : 8 - " << char{ 30 } << " / 2 - " << char{ 31 } << " / 6 - " << char{ 16 } << " / 4 - "<<char{17}<<"\n ";
		std::cin >> direct;

		if (direct == 8) {
			myflag = mapShiftNorth(myflag);
		}
		else if (direct == 2) {
			myflag = mapShiftSouth(myflag);
		}
		else if (direct == 6) {
			myflag = mapShiftEast(myflag);
		}
		else if (direct == 4) {
			myflag = mapShiftWest(myflag);
		}
		else {
			std::cout << "UNABLE TO MOVE IN THAT DIRECTION.";
		}

		turn = turn - 1;

	}
}



int main()
{
	//std::cout << mapStart(OPT_1, OPT_2) << std::endl;

	movementPhase(mapStart(opt::OPT_1, opt::OPT_5));
	std::cin.get();
    return 0;
}

