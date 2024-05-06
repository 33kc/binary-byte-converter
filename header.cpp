#include <iostream>
#include <string>
#include <bitset>
#include <algorithm>

using namespace std;
string binaryToEnglish(string binary) {
    string result = "";
    binary.erase(remove_if(binary.begin(), binary.end(), ::isspace), binary.end());
    for (size_t i = 0; i < binary.length(); i += 8) {
        string byte = binary.substr(i, 8);
        int decimal = stoi(byte, nullptr, 2);
        result += static_cast<char>(decimal);
    }
    return result;
}

int main() {
    string binaryCode;
    cout << "Enter binary code (with spaces between bytes): ";
    getline(cin, binaryCode);
    string englishText = binaryToEnglish(binaryCode);
    cout << "English translation: " << englishText << endl;

    return 0;
}
