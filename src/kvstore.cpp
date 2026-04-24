#include "kvstore.hpp"

std::string KVStore::get(std::string key) {
    if (store.contains(key)) {
        return store[key];
    } else {
        return "NOT FOUND";
    }
}

void KVStore::put(std::string key, std::string value) {
    store[key] = value;
}
