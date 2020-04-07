cmake_minimum_required(VERSION 3.10)

# set the project name
project(ancestor-tree-a)

# add the executable
add_executable(ancestor-tree-a Demo.cpp doctest.h TestCounter.cpp Test.cpp FamilyTree.hpp FamilyTree.cpp)