/*
 * Ticker.hpp
 *
 *  Created on: May 4, 2020
 *      Author: pavel
 */

#ifndef TICKER_HPP_
#define TICKER_HPP_

#include <iostream>
#include <future>
#include <chrono>

static std::mutex cout_mutex;

class Ticker
{
public:
    // create but don't execute yet
    Ticker(std::shared_future<void> f, std::chrono::milliseconds interval)
    : interval{interval}, done{f}
    { }
    // run the thread
    std::future<void> run() {
        return std::async(std::launch::async, &Ticker::tickWrapper, this);
    }
private:
    void tickWrapper() {
        std::future_status status;
        do {
            status = done.wait_for(interval); // waits for the signal from main()
            if (status == std::future_status::timeout) {
                tickfunction();
            }
        } while (status != std::future_status::ready);
    }
    void tickfunction() {
        std::lock_guard<std::mutex> lock(cout_mutex);
        std::cout << "tick (" << std::this_thread::get_id() << ")" << std::endl;
    }

    const std::chrono::milliseconds interval;
    std::shared_future<void> done;
};



#endif /* TICKER_HPP_ */
