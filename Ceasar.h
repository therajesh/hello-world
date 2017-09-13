#ifndef CAESAR_H
#define CAESAR_H

#include <string>
#include <iostream>

// ASCII ordinal range for shifts
#define MIN_ORD 32
#define MAX_ORD 122

using namespace std;

class Caesar {
  public:
    
    // Caesar constructor, accepts a single string argument as the cipher key
    Caesar(string);
    // return the current cipher key
    string get_key() const;
    // decode the string argument using the key, return decoded string
    string decode(string) const;
    // encode the string argument using the key, return encoded string
    string encode(string) const;

  private:
    string key;


};

#endif