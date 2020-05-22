#include "Pong.hpp"

#include <cstdio>

void Pong::start() {
  tickOnMessage(rx_trigger());
}

void Pong::tick() {
  // Parse the message we received
  auto proto = rx_trigger().getProto();
  const std::string message = proto.getMessage();

  // Print the desired number of 'PONG!' to the console
  const int num_beeps = get_count();
  std::printf("%s:", message.c_str());
  for (int i = 0; i < num_beeps; i++) {
    std::printf(" PONG!");
  }
  if (num_beeps > 0) {
    std::printf("\n");
  }
}
