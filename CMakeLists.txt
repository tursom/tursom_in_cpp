cmake_minimum_required(VERSION 3.19)
project(tursom_im_cpp)

set(CMAKE_CXX_STANDARD 20)

find_package(Boost REQUIRED COMPONENTS)
find_package(Protobuf CONFIG REQUIRED)
find_package(fmt CONFIG REQUIRED)
find_package(yaml-cpp CONFIG REQUIRED)

#if (MSVC)
#    add_compile_options(/await)
#endif()

add_executable(tursom_im_cpp main.cpp proto/system.pb.cc proto/TursomMsg.pb.cc utils/utils.cpp utils/utils.h utils/CoroutineContext.cpp utils/CoroutineContext.h utils/Thread.cpp utils/Thread.h utils/concurrent/ConcurrentLinkedQueue.hpp)
target_link_libraries(tursom_im_cpp Boost::boost protobuf::libprotobuf-lite fmt::fmt yaml-cpp)