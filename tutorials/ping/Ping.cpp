#include "Ping.hpp"
void Ping::start() {
	tickPeriodically();
}
void Ping::tick() {
	//LOG_INFO("ping");
	//LOG_INFO(get_message().c_str());
	// create and publish a ping message
  	auto proto = tx_ping().initProto();
  	proto.setMessage(get_message());
  	tx_ping().publish();
}
void Ping::stop() {}

