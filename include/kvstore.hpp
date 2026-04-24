#pragma once
#include <optional>
#include <string>
#include <unordered_map>

class KVStore {
    public:
        void put(const std::string&, const std::string&);
        std::optional<std::string> get(const std::string&) const;
        void remove(std::string);
    private:
        std::unordered_map<std::string, std::string> store;
};
