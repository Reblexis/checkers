#ifndef CONSTANTS_HPP
#define CONSTANTS_HPP

#include <filesystem>
#include <string>

// Paths
const std::filesystem::path DATA_PATH = std::filesystem::current_path().parent_path() / "data/";


const std::string CURRENT_AGENT_CONFIG = R"(
{
    "diff_multiplier": 100,
            "evaluation_algorithm": 1,
            "king_table": [
    2,
            3,
            3,
            2,
            4,
            4,
            4,
            4,
            4,
            5,
            5,
            4,
            4,
            6,
            6,
            4,
            4,
            6,
            6,
            4,
            5,
            6,
            6,
            5,
            6,
            6,
            6,
            6
    ],
    "king_value": 1,
            "max_depth": 5,
            "move_time_limit": 10000,
            "pawn_table": [
    15,
            15,
            15,
            15,
            8,
            8,
            6,
            4,
            8,
            8,
            4,
            4,
            6,
            8,
            4,
            2,
            2,
            4,
            4,
            2,
            2,
            4,
            4,
            2,
            4,
            4,
            10,
            10,
            7,
            9,
            10,
            10
    ],
    "pawn_value": 1,
            "search_algorithm": 1,
            "use_alpha_beta": true,
            "use_cache": false,
            "reorder_moves": false
}
)";
#endif