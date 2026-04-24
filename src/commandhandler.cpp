#include "commandhandler.hpp"
#include "kvstore.hpp"
#include <optional>
#include <sstream>

std::string CMDHandler::execute(const std::string &line) {
  std::istringstream iss(line);
  std::string cmd;
  iss >> cmd;

  if (cmd == "PUT") {
    std::string key, value;
    iss >> key >> value;
    store.put(key, value);
    return "OK";
  } else if (cmd == "GET") {
    std::string key;
    iss >> key;
    std::optional<std::string> value = store.get(key);
    return value.value_or("NOT FOUND");
  } else {
    return "UNKNOWN COMMAND";
  }
}
