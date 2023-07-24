#ifndef REQUEST_HPP
#define REQUEST_HPP

#include <memory>
#include <string>

class Request{
public:
    Request(std::string userName, uint32_t numbers);
    std::string userName_;
    uint32_t numbers_;
};

#endif