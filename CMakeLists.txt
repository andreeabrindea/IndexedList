cmake_minimum_required(VERSION 3.19)
project(IndexedList)

set(CMAKE_CXX_STANDARD 14)

add_executable(IndexedList main.cpp ShortTest.cpp ShortTest.h ListIterator.cpp ListIterator.h IndexedList.cpp IndexedList.h ExtendedTest.cpp ExtendedTest.h)