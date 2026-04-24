#ifndef CMDHandler_H
#define CMDHandler_H
#include "kvstore.hpp"
#include <sstream>

class CMDHandler {
    public:
        std::string parse(std::istringstream&);
        CMDHandler();
        ~CMDHandler();
    private:
        KVStore *store;
};

#endif
