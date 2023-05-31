#include "DuelMessageSender.h"

void DuelMessageSender::send(uint8_t team, std::vector<uint8_t> message)
{
  std::string payload = "CMD:MESSAGE|";
  payload += std::to_string(team) + "|";
  for (const auto &element : message)
  {
    payload += std::to_string(static_cast<int>(element)) + "|";
  }
  std::cout << payload << std::endl;
}