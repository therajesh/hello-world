#include "gtest/gtest.h"
#include <string>

using namespace std;

string toLowerCase(string s) {
    
    //A-Z   65-90
    //a-z   97-122
    //add 32 to make it lowercase, IF IT ALREADY ISN'T (97-122)
    
    //if ascii between 65 and 90 inclusive
    //    counter
    //int length = string.length
    //for each character in string, 
    //if char >=65 && char <=90;
    //char = char + 32;
    
    for (int i = 0; i<s.length(); i++) {
        if(s[i] >= 65 && s[i] <= 90)
            s[i] += 32;  
    }
    
    return s;
}

void toLowerCaseWithRef(string& s) {
    
    //A-Z   65-90
    //a-z   97-122
    //add 32 to make it lowercase, IF IT ALREADY ISN'T (97-122)
    
    //if ascii between 65 and 90 inclusive
    //    counter
    //int length = string.length
    //for each character in string, 
    //if char >=65 && char <=90;
    //char = char + 32;
    
    for (int i = 0; i<s.length(); i++) {
        if(s[i] >= 65 && s[i] <= 90)
            s[i] += 32;  
    }
}


TEST(toLower, all_lower){
    //ASSERT_EQ("dog", toLowerCase("dog"));
    ASSERT_EQ("dog", toLowerCase("DOG"));
}

TEST(toLower, all_lowers) {
    ASSERT_EQ("d0g", toLowerCase("D0G"));
}

TEST(toLower, empty) {
    ASSERT_EQ("", toLowerCase(""));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    
}