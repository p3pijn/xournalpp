#include "util/serializing/InputStreamException.h"

const char* XML_VERSION_STR = "XojStrm1:";

InputStreamException::InputStreamException(const std::string& message, const std::string& filename, int line) {
    this->message = message + ", " + filename + ": " + std::to_string(line);
}

InputStreamException::~InputStreamException() = default;

const char* InputStreamException::what() const noexcept { return this->message.c_str(); }
