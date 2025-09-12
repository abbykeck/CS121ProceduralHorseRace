# CS121ProceduralHorseRace
1. include iostream, random
1. declare functions
1. const int TRACKLENGTH = 15;
1. const int ARRAYLENGTH = 5;
## Algorithm for main
1. int[ARRAYLENGTH] horseArray = {0, 0, 0, 0, 0};
1. boolean keepGoing = true;
1. print "STARTING POSITION:"
1. for (int i = 0; i < ARRAYLENGTH; i++)
    1. printLane(i, horseArray);
1. end for
1. int bet = -1;
1. int winner = -1;
1. print "Which horse will win? Enter your bet:"
1. put user input into bet
1. while (keepGoing == true)
    1. for (int i = 0; i < ARRAYLENGTH; i++)
        1. advance(i, horseArray);
        1. printLane(i, horseArray);
        1. if (isWinner(i, horseArray))
            1. keepGoing = false;
            1. winner = i;
        1. end if
        1. print "Press enter for another turn";
        1. wait for user to press enter (cin.ignore());
    1. end for
1. end while
1. if (winner == bet)
    1. print "Congrats, you won your bet! You can have a cookie.";
1. else
    1. print "Sorry, you lost your bet. Better luck next time!"
1. end if
1. end main
## Algorithm for advance
0. Parameters: int horseNum, int pointer horses
1. int coin = -1;
1. randomly assign coin either 0 or 1
1. horses[horseNum] += coin;
1. end advance
## Algorithm for printLane
0. Parameters: int horseNum, int pointer horses
1. for (int i = 0; i < TRACKLENGTH; i++)
    1. if (i == horses[horseNum])
        1. print horseNum;
    1. else
        1. print ".";
    1. end if
1. end for
1. print new line
1. end printLane
## Algorithm for isWinner
0. Parameters: int horseNum, int pointer horses; return a boolean
1. If (horses[horseNum] >= TRACKLENGTH)
    1. print "Horse " + horseNum + " WINS!!!";
    1. return true;
1. else
    1. return false;
1. end if
1. end isWinner
