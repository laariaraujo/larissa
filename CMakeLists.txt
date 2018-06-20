cmake_minimum_required(VERSION 3.10)
project(aula02)

set(CMAKE_CXX_STANDARD 11)

add_executable(${PROJECT_NAME} main.c malloc.h strings.h passagem.h)