#pragma once

#include <string>
#include <functional>

namespace cpptoolkit {
    /*
     * creates a socket on address @param string bind_to and @param int port_no 
     * and waits for incoming connections.
     * 
     * when a connection is made, it creates a new thread which will handle 
     * the connection by calling the @param function callback with the received
     * data as ascii text.
     * 
     * @return void
     */
    void server_module(std::string const& bind_to, int port_no, std::function<void (std::string const&)> const& callback);
}
