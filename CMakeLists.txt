cmake_minimum_required(VERSION 3.19)
project(tursom_im_cpp)

set(CMAKE_CXX_STANDARD 20)

#set(protobuf_VERSION "3.17.0")

#set(Boost_INCLUDE_DIR C:\\Boost\\include\\boost-1_76)
#set(Boost_LIBRARY_DIR C:\\Boost\\lib)
#
##FIND_PACKAGE(Boost 1.40 COMPONENTS program_options REQUIRED)
#INCLUDE_DIRECTORIES(${Boost_INCLUDE_DIR})
find_package(Boost REQUIRED COMPONENTS)
find_package(protobuf CONFIG REQUIRED)

#include(import.cmake)

add_executable(tursom_im_cpp main.cpp proto/system.pb.cc proto/TursomMsg.pb.cc utils/Iterable.hpp utils/Collection.hpp utils/List.hpp utils/ArrayList.hpp utils/concurrent/ThreadPool.hpp ThreadLocal.hpp)
target_link_libraries(tursom_im_cpp protobuf Boost::boost)