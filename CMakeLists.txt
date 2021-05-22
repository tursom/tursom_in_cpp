cmake_minimum_required(VERSION 3.19)
project(tursom_im_cpp)

set(CMAKE_CXX_STANDARD 14)

set(protobuf_VERSION "3.17.0")

include(import.cmake)

add_executable(tursom_im_cpp main.cpp proto/system.pb.cc proto/TursomMsg.pb.cc)
target_link_libraries(tursom_im_cpp libprotoc libprotobuf)