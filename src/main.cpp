#include <boost/date_time.hpp>
#include <iostream>

void now() {
    using namespace boost::posix_time;
    ptime timeLocal = second_clock::local_time();

    // The following date is in ISO 8601 extended format (CCYY-MM-DD)
    std::cout << "Now the time is " << timeLocal << std::endl;
}

int main() {
    std::cout << "Hello there, I'm main" << std::endl;
    now();
    return 0;
}
