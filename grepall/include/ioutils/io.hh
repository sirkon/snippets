#pragma once

#include <cstdint>
#include <unistd.h>

namespace io {

    class Reader {
    public:
        virtual int64_t read(char *buf, int64_t count) = 0;
        virtual ~Reader() {};
    };

    class Writer {
    public:
        virtual int64_t write(const char *buf, int64_t count) = 0;
        virtual ~Writer() {};
    };
}
