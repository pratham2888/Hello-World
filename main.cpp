#include <iostream>
#include <unicode/ustream.h>
#include <unicode/resbund.h>
#include <unicode/locid.h>

int main() {
    icu::UnicodeString hello_world = u"Hello, World!";
    std::cout << hello_world.toUTF8() << std::endl;
    return 0;
}
