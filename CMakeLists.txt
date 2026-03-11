cmake_minimum_required(VERSION 3.29.6)
project(Projet-AlgorithmeAES-Cryptographie)

include_directories(include)

add_executable(testAES testAES.cpp
        src/ChiffrementAES.cpp
        include/Octet.h
        src/Octet.cpp)