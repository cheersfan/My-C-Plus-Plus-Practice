cmake_minimum_required(VERSION 3.12)
project(Linux_C_ExerciseCode)

set(CMAKE_C_FLAGS )

add_executable(Linux_C_ExerciseCode main.cpp pipe-communication.cpp pipe-communication.h pipe-dup.cpp pipe-dup.h read-write.cpp read-write.h execve.cpp execve.h signal-test.cpp signal-test.h create-process-test.cpp create-process-test.h asy-clean-child-process.cpp asy-clean-child-process.h)