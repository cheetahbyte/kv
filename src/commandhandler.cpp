#include "commandhandler.hpp"
#include "kvstore.hpp"

CMDHandler::CMDHandler() { this->store = new KVStore(); }

CMDHandler::~CMDHandler() {
  delete store;
  store = nullptr;
}

std::string CMDHandler::parse(std::istringstream& iss) {
  std::string cmd;
  iss >> cmd;

  if (cmd == "PUT") {
    std::string key, value;
    iss >> key >> value;
    this->store->put(key, value);
    return "OK";
  } else if (cmd == "GET") {
      std::string key;
      iss >> key;
      const std::string value = this->store->get(key);
      return value;
  } else {
      return "UNKNOWN COMMAND";
  }
}
