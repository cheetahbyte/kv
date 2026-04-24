#ifndef KVSTORE_H
#define KVSTORE_H
#include <string>
#include <unordered_map>

class KVStore {
    public:
        void put(std::string, std::string);
        std::string get(std::string);
        void remove(std::string);
    private:
        std::unordered_map<std::string, std::string> store;
};

#endif
