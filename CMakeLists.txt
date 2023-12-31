cmake_minimum_required(VERSION 3.14)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED true)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/out)
set(CMAKE_CXX_COMPILER "/usr/bin/g++-13")
project(checkers)

find_package(SFML 2.5 REQUIRED COMPONENTS graphics audio window system)
include_directories(libs)

add_executable(checkers
		src/communication/debugging.cpp
		src/meta/timer.cpp
		src/communication/game.cpp
		src/ai/search_algorithms.cpp
		src/ai/evaluation.cpp
		src/ai/cache.cpp
		src/ai/hyperparameters.cpp
		src/ai/agent.cpp
        src/meta/statistics.cpp
		src/meta/tournament.cpp
		src/app/app.cpp
        src/ai/console_interface.cpp
		src/tests/functionality_tests.cpp
		src/tests/performance_tests.cpp
		src/main.cpp
)

target_link_libraries(checkers sfml-graphics sfml-audio sfml-window sfml-system)

set_property(TARGET checkers PROPERTY INTERPROCEDURAL_OPTIMIZATION TRUE)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -march=native")
