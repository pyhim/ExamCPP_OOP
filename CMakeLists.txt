cmake_minimum_required(VERSION 3.30)
project(ExamCPP_OOP)

set(CMAKE_CXX_STANDARD 23)

add_executable(ExamCPP_OOP main.cpp
        src/headers/AbstractParticipant.h
        src/headers/Obstacle.h
        src/headers/Human.h
        src/headers/Cat.h
        src/headers/Robot.h
        src/AbstractParticipant.cpp
        src/headers/Wall.h
        src/headers/RunningRoad.h
        test/examTest.cpp
        test/examTest.h
)

set(CMAKE_CXX_FLAGS_DEBUG "-O0 -g")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")
