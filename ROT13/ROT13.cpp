/**
 * \class ROT13
 *
 * @par Licence
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 */

#include "ROT13.hpp"

ROT13::ROT13(std::string Text)
            : Text{Text} {
}

ROT13::ROT13() {
    this -> Text = " ";
}

void ROT13::setText(std::string Text) {
    this -> Text = Text;
}

void ROT13::calculations(bool isEncryption){
    New_text="";
    /* variable moving the numbers to interval [0-25]
    *  just for the calculations and the moving back to
    *  ASCII representation  */
    int change_interval;
    for(char letter : Text){
        if(letter>=ASCII_for_A&&letter<=ASCII_for_Z) {
            change_interval = ASCII_for_A;
        }
        else if (letter>=ASCII_for_a&&letter<=ASCII_for_z) {
            change_interval = ASCII_for_a;
        }
        else {
            New_text+=letter;
            continue;
        }
            letter -= change_interval;
            letter= (letter + ROT13_shift) % latin_alphabet;
            letter += change_interval;
            New_text += letter;
    }   
}

void ROT13::encryptMessage() {
    calculations(1);
    std::cout << "Text before encryption: " << Text << std::endl;
    std::cout << "Text after encryption: " << New_text << std::endl;
}

void ROT13::decryptMessage() {
    calculations(0);
    std::cout << "Text before decryption: " << Text << std::endl;
    std::cout << "Text after decryption: " << New_text << std::endl;
}


