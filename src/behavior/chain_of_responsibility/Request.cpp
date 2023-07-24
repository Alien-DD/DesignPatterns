#include <iostream>
#include "Request.hpp"

Request::Request(std::string userName, uint32_t numbers)
    : userName_(userName), numbers_(numbers)
{
    std::cout << "Request construct~" << std::endl;
}