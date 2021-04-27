cmake_minimum_required(VERSION 3.17)
project(sanders_script C)

set(CMAKE_C_STANDARD 99)

add_executable(sanders_script main.c lexer.c include/lexer.h token.c include/token.h include/file.h file.c)