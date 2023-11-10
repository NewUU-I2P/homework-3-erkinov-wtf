#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here
    std::string result;

    int firstOctet;
    //i did some digging on the internet, cuz i dont know this function
    std::istringstream stream(macAddress.substr(0, 2));
    stream >> std::hex >> firstOctet;

    if (firstOctet == 0xFF) {
        result = "Broadcast";
    }
    else if (firstOctet % 2 == 0) {
        result = "Unicast";
    }
    else {
        result = "Multicast";
    }

    return result;
    // make use of control flow statements
    // return result;
}
