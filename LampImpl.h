#pragma once

#include "IHttpServer.h"
#include "IRgbLed.h"
#include "ILedBoardChain.h"
#include "HttpHandler.h"

#include <cstdint>

namespace lamp {

  template<uint8_t N>
  class Lamp {

    public:
      explicit Lamp(IHttpServer* http, IRgbLed* led, ILedBoardChain* leds) : 
        _http(http), _handler(new HttpHandler(led)), _led(led), _leds(leds) {}

      void start(int port) const; // move port to template?

    private:
      IHttpServer* _http;
      IHttpHandler* _handler;
      IRgbLed* _led;
	  ILedBoardChain<N>* _leds;

  };

}
