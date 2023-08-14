#include <stdexcept>

class NullPointerException : public std::logic_error {
public:
    NullPointerException() : std::logic_error("Null pointer exception") {}
};

class null_pointer : public NullPointerException {
public:
    null_pointer() : NullPointerException() {}
};
