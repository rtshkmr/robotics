load("//engine/build:isaac.bzl", "isaac_app", "isaac_cc_module")

isaac_app(
     name = "ping",
     modules = ["//packages/ping:ping_components"]
)


isaac_cc_module(
  name = "ping_components",
  srcs = ["Ping.cpp", "Pong.cpp"],
  hdrs = ["Ping.hpp", "Pong.hpp"],
)


