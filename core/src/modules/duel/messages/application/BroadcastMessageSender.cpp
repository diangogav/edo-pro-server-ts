#include "BroadcastMessageSender.h"

void BroadcastMessageSender::send(std::vector<uint8_t> message)
{
  std::string payload = "CMD:BROADCAST|";

  for (const auto &element : message)
  {
    payload += std::to_string(static_cast<int>(element)) + "|";
  }
  std::cout << payload << std::endl;
}

void BroadcastMessageSender::sendExceptTo(uint8_t team, std::vector<uint8_t> message)
{
  std::string payload = "CMD:EXCEPT|";
  payload += std::to_string(team) + "|";

  for (const auto &element : message)
  {
    payload += std::to_string(static_cast<int>(element)) + "|";
  }
  std::cout << payload << std::endl;
}