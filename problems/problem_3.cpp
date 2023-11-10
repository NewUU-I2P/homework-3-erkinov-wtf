#include <string>

std::string problemSolution3(float height, char S) {
    // write your code here
    std::string result;

    switch (S == 'M') {
        case 1:
            if (height < 1.70) {
                result = "Short";
            } else if (height >= 1.70 && height <= 1.85) {
                result = "Normal";
            } else if (height >= 1.85) {
                result = "Tall";
            }
            break;
        case 0:
            switch (S == 'F') {
                case 1:
                    if (height < 1.60) {
                        result = "Short";
                    } else if (height >= 1.60 && height <= 1.75) {
                        result = "Normal";
                    } else if (height >= 1.75) {
                        result = "Tall";
                    }
                    break;
                case 0:
                    result = "Undefined";
            }
    }
}