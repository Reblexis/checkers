#include <stdlib.h>
#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>

#include "includes/constants.hpp"

#include "communication/includes/game.hpp"
#include "ai/includes/agent.hpp"
#include "app/includes/app.hpp"
#include "communication/includes/console_interface.hpp"
#include "meta/includes/tournament.hpp"

//#define CLI
//#define APP
#define TOURNAMENT

int main()
{
#ifdef CLI
    Agent agent(CURRENT_AGENT_CONFIG);
    ConsoleInterface consoleInterface(&agent);
    consoleInterface.run();
#endif
#ifdef APP
    App app;
    app.launch();
#endif
#ifdef TOURNAMENT
    Tournament tournament;
    Agent agent1(AGENTS_PATH / "agent1");
    Agent agent2(AGENTS_PATH / "agent2");
    std::vector<Agent*> agents = {&agent1, &agent2};
    tournament.randomMatches(agents, 2, 6);
#endif
}
