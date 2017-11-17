#pragma once

#include "IHttpServer.h"
#include "IRgbLed.h"
#include "HttpHandler.h"

namespace lamp {

  class Lamp {

    public:
      explicit Lamp(IHttpServer* http, IRgbLed* led) : _http(http), _handler(new HttpHandler(led)), _led(led) {}

      void start(int port) const;

    private:
      IHttpServer* _http;
      IHttpHandler* _handler;
      IRgbLed* _led;

  };

}
