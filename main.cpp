/**
 * \class main
 * @file main.cpp
 *
 * @par Licence
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 */


#include Cezar.hpp
#include XOR.hpp
#include ROT13.hpp

int main(int argc, char *argv[]) {
    Cezar cezar_encryption("Army is marching with 20 thousand horses. Please send some support + boats.",20);
    cezar_encryption.encryptMessage();
    cezar_encryption.setText("Rovz sxmywsxq.");
    cezar_encryption.setShift(10);
    cezar_encryption.decryptMessage();
    
    ROT13 rot13_encryption("Rot13 is similar to Cezar encryption.");
    rot13_encryption.encryptMessage();
    rot13_encryption.setText("Ohg vg nyjnlf fuvsg yrggref ol 13 naq qrpelcgvba vf qbhoyr rapelcgvba.");
    rot13_encryption.decryptMessage();
    
    XOR xor_encryption("XOR encryption is same way as decryption",20);
    xor_encryption.encryptMessage();
    xor_encryption.setText("Je#tf#tbmw#vpf#[LQ#`zskfq#lmoz#lm#ofwwfqp#wkf#boskbafw#ofwwfq#mvnafq#nvpw#af#nvowjsoj`jwz#le#wkf#mvnafq#1#+ojhf#25#lq#01*#bmg#wkf#hfz#nvpw#af#ofpp#wkbm#wkf#boskbafw#ofmdwk-#");
    xor_encryption.setKey(3);
    xor_encryption.decryptMessage();
    
    VisionRE visionRE_encryption("VisionRE use a string Key to encrypt messages","thisIsKey");
    visionRE_encryption.encryptMessage();
    visionRE_encryption.setText("Xk wy dyuz qvhzvv lzpe Qkqej tttoaji gx iyoz.");
    visionRE_encryption.setKey("Progress");
    visionRE_encryption.decryptMessage();
    
    return 0;
}    
