#include <Logger.h>

void setup() {
  const char *logTag = __func__;

  Logger::debug(logTag, "Logging at DEBUG level");
}

void loop() {
  // intentionally left empty
}
