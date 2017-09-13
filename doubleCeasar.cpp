#include "gtest/gtest.h"
#include <string>

using namespace std;

string doubleCeasar(string message, string key) {
    
    for (int i = 0; i<message.length(); i++) {
        
        int keyIndex = i % key.length();
        char tempKey = key[keyIndex];
            
        if (message[i] >= 32 && message[i] <= 122) {
            message[i] += tempKey;
            if (message[i] > 122) {
                message[i] = (message[i] %  122) + 32;
            }
        }
        
        return message;
    }
}

int main(int argc, char **argv) {
    //::testing::InitGoogleTest(&argc, argv);
    //return RUN_ALL_TESTS();
    
}

