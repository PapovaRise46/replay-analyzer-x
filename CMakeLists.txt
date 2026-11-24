cmake_minimum_required(VERSION 3.16)
project(replay-analyzer-x CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(replayanalyzerx
    src/main.cpp
    src/replay.cpp
    src/analyze.cpp
)

target_include_directories(replayanalyzerx PRIVATE include)

if(WIN32)
    target_link_libraries(replayanalyzerx PRIVATE userenv)
endif()
