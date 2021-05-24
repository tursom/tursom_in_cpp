//
// Created by tursom on 21/5/24.
//

#ifndef TURSOM_IM_CPP_THREADPOOL_HPP
#define TURSOM_IM_CPP_THREADPOOL_HPP


#include <functional>

class ThreadPool {
    virtual void execute(std::function<void> f) = 0;
};


#endif //TURSOM_IM_CPP_THREADPOOL_HPP
