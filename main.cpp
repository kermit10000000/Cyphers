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


int main(int argc, char *argv[]) {
    Cezar cezar_encryption("Army is marching with 20 thousand horses. Please send some support + boats.",20);
    cezar_encryption.encryptMessage();
    cezar_encryption.setText("Rovz sxmywsxq.");
    cezar_encryption.setShift(10);
    cezar_encryption.decryptMessage();
    return 0;
}    
