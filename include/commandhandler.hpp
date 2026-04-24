#ifndef CMDHandler_H
#define CMDHandler_H
#include "kvstore.hpp"
#include <sstream>

class CMDHandler {
    public:
        std::string parse(std::istringstream&);
    private:
        KVStore store;
};

#endif
