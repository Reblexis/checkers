#include <stdlib.h>
#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>

#include "communication/includes/interface.hpp"
#include "ai/includes/agent.hpp"
#include "app/includes/app.hpp"

#include "communication/includes/console_interface.hpp"


#include "app/includes/app.hpp"

//#define INTERFACE_TEST
//#define INTERFACE_PERFT
//#define SEARCH_ALGORITHM_TEST
//#define PLAY_TEST
#define PLAYER_VERSUS_BOT

void playerVersusBot() {
    Board board(0xfff00000, 0xfff);
    Agent agent(CURRENT_BOT_PATH);
    App app;

    launchApp();
    app.getMove(board);
    agent.findBestMove(board);
}

int main()
{
    initializeHashing();

#ifdef PLAYER_VERSUS_BOT
    playerVersusBot();
#endif
}
