/**
 * \class Cezar
 *
 * @par Licence
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 */
//TODO: well what if we get like a and minus shift or z and plus shift, we have to somehow comeback 
#include "Cezar.hpp"

Cezar::Cezar(std::string Text, int16_t Shift)
            : Text{Text}, Shift{Shift} {
}

void Cezar::setText(string Text) {
    this -> Text = Text;
}
    
void Cezar::setShift(int Shift) {
    this -> Shift = Shift;
}
void Cezar::calculations(bool isEncryption){
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
            if(isEncryption) {
                letter= (letter + Shift) % latin_alphabet;
            }
            else {
                letter= (letter - Shift);
                if(letter<0) {
                    letter += latin_alphabet;
                }
                letter = letter % latin_alphabet;
            }
            letter += change_interval;
            New_text += letter;
    }   
}
void Cezar::encryptMessage() {
    calculations(1);
    std::cout << "Text before encryption: " << Text << std::endl;
    std::cout << "Text after encryption: " << New_text << std::endl;
}
void Cezar::decryptMessage() {
    calculations(0);
    std::cout << "Text before decryption: " << Text << std::endl;
    std::cout << "Text after decryption: " << New_text << std::endl;
}


