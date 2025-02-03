#include <iostream>
#include <string>

std::string obfuscate_(const std::string &input) {
    std::string output;
    std::string big_string = ".Aa0Bb1Cc2Dd3Ee4Ff5Gg6Hh7Ii8Jj9Kk_Ll+Mm-Nn*Oo)Pp(Qq=RrSsTtUuVvWwXxYyZz ";
    for (int i = 0; i < input.length(); i++) {
        for (int j = 0; j < big_string.length(); j++) {
            if (input[i] == big_string[j]) {
                output += std::to_string(j);
                output += " ";
            }
        }
    }
    return output;
}

std::string deobfuscate_(int *input, int size) {
    std::string output;
    std::string big_string = ".Aa0Bb1Cc2Dd3Ee4Ff5Gg6Hh7Ii8Jj9Kk_Ll+Mm-Nn*Oo)Pp(Qq=RrSsTtUuVvWwXxYyZz ";
    for (int i = 0; i < size; i++) {
        output += big_string[input[i]];
    }
    return output;
}

int main(void)
{
    std::string clean_text = "string to obfuscate";

    std::cout << "--- Obfuscation ---" << std::endl;
    std::string obf_out = obfuscate_(clean_text);
    std::cout << "String before : " << clean_text << std::endl;
    std::cout << "obfuscated string : " << obf_out << std::endl;

    std::cout << "--- Deobfuscation ---" << std::endl;
    int input[] = {55, 57, 53, 26, 41, 20, 70, 57, 44, 70, 44, 5, 17, 59, 55, 8, 2, 57, 14};
    int size = sizeof(input) / sizeof(input[0]);
    std::string output = deobfuscate_(input, size);
    std::cout << "Obfuscated string : " << obf_out << std::endl;
    std::cout << "Deobfuscated string : " << output << std::endl;

    return 0;
}
