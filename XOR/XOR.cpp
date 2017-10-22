/**
 * \class XOR
 *
 * @par Licence
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 */

#include "XOR.hpp"

XOR::XOR(std::string Text, int8_t Key)
            : Text{Text}, Key{Key} {
    if(Key<0) {
        Key=0;
        std::cout << "Key can not be negative. Setting Key to 0." << std::endl;
    } 
}

void XOR::XOR() {
    this -> Text = " ";
    this -> Key = 0;
}

void XOR::setText(string Text) {
    this -> Text = Text;
}
    
void XOR::setKey(int Key) {
    if(Key<0) {
        Key=0;
        std::cout << "Key can not be negative. Setting Key to 0." << std::endl;
    }
    else { 
        this -> Key = Key;
    }        
}
    this -> Key = Key;
}
void XOR::calculations(){
    New_text="";
    for(char letter : Text){
        letter^= Key;
        New_text += letter;
    }   
}
void XOR::encryptMessage() {
    calculations();
    std::cout << "Text before encryption: " << Text << std::endl;
    std::cout << "Text after encryption: " << New_text << std::endl;
}
void XOR::decryptMessage() {
    calculations();
    std::cout << "Text before decryption: " << Text << std::endl;
    std::cout << "Text after decryption: " << New_text << std::endl;
}


