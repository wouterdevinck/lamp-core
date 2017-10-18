#include "HttpHandler.h"

using namespace lamp;
	
string HttpHandler::handleHttpRequest(string method, string path) {
	if (method == "GET") {
		if (path == "/r") {
			const RgbLedColor color = { 255, 0, 0 };
			_led->setLedColor(color);
		} else if (path == "/g") {
			const RgbLedColor color = { 0, 255, 0 };
			_led->setLedColor(color);
		} else if (path == "/b") {
			const RgbLedColor color = { 0, 0, 255 };
			_led->setLedColor(color);
		}
	}
	return "<h1>Lamp Control</h1>"
		"<div><a href=\"/r\">RED</a></div>"
		"<div><a href=\"/g\">GREEN</a></div>"
		"<div><a href=\"/b\">BLUE</a></div>";
}