#include "Ceasar.h"
#include <string>
#include <iostream>

using namespace std;


    Ceasar::Ceasar(string k) {
        key = k;
    }
    
    string Ceasar::get_key() const {
        return key;
    }
    
    string Ceasar::decode(string message) const {
        int minchar = 32;
        int minchar = 122;
        
        string result = "";
        
        for(int i=0; i<message.length(); i++) {
            char intchar = message[i] 
        }
    }
        
    
    string Ceasar::encode(string message) const {
        int minchar = 32;
        int maxchar = 122;
        
        string result = "";
        
        for (int i = 0; i<message.length(); i++) {
            char intchar = message[i] - minchar;
            char shiftedchar = (intchar + key[i%len(key)] - minchar) % (maxchar + 1 - minchar);
            char temp = shiftedchar + minchar;
            result += temp;
        }
        return result;    
    }
    



    
//        for (int i = 0; i<message.length(); i++) {
//
  //          int keyIndex = i % key.length();
    //        char tempKey = key[keyIndex];
//
  //          if (message[i] >= 32 && message[i] <= 122) {
    //            message[i] += tempKey;
      //          if (message[i] > 122) {
        //            message[i] = (message[i] %  122) + 32;
          //      }
//                  }

//            return message;