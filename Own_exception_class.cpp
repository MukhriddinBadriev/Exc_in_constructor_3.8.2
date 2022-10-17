#include "Own_exception_class.h"
Own_exception_class::Own_exception_class(std::string corner):std::domain_error(corner) {}