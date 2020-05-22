#pragma once
#include "engine/alice/alice.hpp"
#include "messages/messages.hpp"

class Pong : public isaac::alice::Codelet {
 public:
  void start() override;
  void tick() override;

  // An incoming message channel on which we receive pings.
  ISAAC_PROTO_RX(PingProto, trigger);

  // Specifies how many times we print 'PONG' when we are triggered
  ISAAC_PARAM(int, count, 3);
};

ISAAC_ALICE_REGISTER_CODELET(Pong);
