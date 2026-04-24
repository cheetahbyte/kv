#pragma once
#include "kvstore.hpp"
#include <string>

class CMDHandler {
    public:
        std::string execute(const std::string& line);
    private:
        KVStore store;
};
