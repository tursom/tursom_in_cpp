cmake_minimum_required(VERSION 3.19)
project(tursom_im_cpp)

set(CMAKE_CXX_STANDARD 20)

include(cmake_msvc.cmake)
configure_msvc_runtime("${VCPKG_TARGET_TRIPLET}")

find_package(Boost REQUIRED)
find_package(Protobuf CONFIG REQUIRED)
find_package(fmt CONFIG REQUIRED)
find_package(yaml-cpp CONFIG REQUIRED)

if (MSVC)
    add_compile_options(/bigobj -D_WIN32_WINNT=0x0601)
endif ()

message(Boost_LIBRARY_DIRS ${Boost_LIBRARY_DIRS})
add_executable(tursom_im_cpp main.cpp proto/system.pb.cc proto/TursomMsg.pb.cc utils/utils.cpp utils/utils.h utils/CoroutineContext.cpp utils/CoroutineContext.h utils/Thread.cpp utils/Thread.h utils/concurrent/ConcurrentLinkedQueue.hpp utils/lazy.hpp)
target_link_libraries(tursom_im_cpp Boost::boost protobuf::libprotobuf-lite fmt::fmt
        ${Boost_LIBRARY_DIRS}/boost_coroutine-vc140-mt.lib
        )