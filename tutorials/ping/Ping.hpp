#pragma once
#include "engine/alice/alice_codelet.hpp"
#include "engine/alice/alice.hpp"
#include "messages/messages.hpp"

class Ping : public isaac::alice::Codelet {
 public:
  void start() override;
  void tick() override;
  void stop() override;
  ISAAC_PARAM(std::string, message, "Hello World!");
  ISAAC_PROTO_TX(PingProto, ping);
};
ISAAC_ALICE_REGISTER_CODELET(Ping);
