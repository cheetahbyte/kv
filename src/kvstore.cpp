#include "kvstore.hpp"

std::optional<std::string> KVStore::get(const std::string &key) const {
  auto it = store.find(key);

  if (it != store.end()) {
    return it->second;
  }

  return std::nullopt;
}

void KVStore::put(const std::string &key, const std::string &value) {
  store[key] = value;
}
