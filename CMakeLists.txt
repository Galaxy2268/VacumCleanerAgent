cmake_minimum_required(VERSION 3.27)
project(VacumCleanerAgent)

set(CMAKE_CXX_STANDARD 23)

include_directories(
        List
        Map
        Pair
        PriorityQueue
        Graph
        Vector
        FileReading
)

add_executable(VacumCleanerAgent
        Main.cpp)
