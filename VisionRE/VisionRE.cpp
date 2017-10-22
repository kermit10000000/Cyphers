/**
 * \class VisionRE
 *
 * @par Licence
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 */

#include "VisionRE.hpp"

VisionRE::VisionRE(std::string Text, std::string Key)
            : Text{Text}, Key{Key} {
}


VisionRE::VisionRE() {
    this -> Text = " ";
    this -> Key = "";
}

void VisionRE::setText(std::string Text) {
    this -> Text = Text;
}
    
void VisionRE::setKey(std::string Key) {
        this -> Key = Key;
}


int VisionRE::calculate_interval(char letter) {
    int change_interval=0;
    if(letter>=ASCII_for_A&&letter<=ASCII_for_Z) {
        change_interval = ASCII_for_A;
    }
    else if (letter>=ASCII_for_a&&letter<=ASCII_for_z) {
        change_interval = ASCII_for_a;
    }
    else {
        change_interval=-1;
    }
    return change_interval;
}

void VisionRE::calculations(bool isEncryption){
    New_text="";
    //variable to iterate over the Key
    unsigned int Key_letter=0;
    /* variables moving the numbers to interval [0-25]
    *  just for the calculations and the moving back to
    *  ASCII representation  */
    int change_interval_for_Text;
    int change_interval_for_Key;
    for(char letter : Text){
        change_interval_for_Text=calculate_interval(letter);
        if(change_interval_for_Text==-1){
            New_text+=letter;
            continue;
        }
        change_interval_for_Key=calculate_interval(Key[Key_letter]);
        if(change_interval_for_Key==-1){
            change_interval_for_Key=0;
        }
        letter -= change_interval_for_Text;
        Key[Key_letter] -= change_interval_for_Key;
        if(isEncryption) {
            letter= (letter + Key[Key_letter]) % latin_alphabet;
        }
        else {
            letter= (letter - Key[Key_letter]);
            if(letter<0) {
                letter += latin_alphabet;
            }
            letter = letter % latin_alphabet;
        }
        letter += change_interval_for_Text;
        New_text += letter;
        Key_letter++;
        if(Key_letter==Key.length()) {
            Key_letter=0;
        }
    } 
}

void VisionRE::encryptMessage() {
    calculations(1);
    std::cout << "Text before encryption: " << Text << std::endl;
    std::cout << "Text after encryption: " << New_text << std::endl;
}

void VisionRE::decryptMessage() {
    calculations(0);
    std::cout << "Text before decryption: " << Text << std::endl;
    std::cout << "Text after decryption: " << New_text << std::endl;
}


