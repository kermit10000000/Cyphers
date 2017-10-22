/**
 * \class XOR
 * @file XOR.hpp
 *
 * @par Licence
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 */

#ifndef XOR_HPP
#define XOR_HPP

#define ASCII_for_A 65
#define ASCII_for_Z 90
#define ASCII_for_a 97
#define ASCII_for_z 122

#include <iostream>
#include <string>

class XOR{

private: 
 /**
  * @brief  parameters
  */
    std::string Text;
    int8_t Key;
    std::string New_text;
    
public:   
/**
 * @brief Constructor of XOR code object
 * text is the text to either cypher or decypher
 * Key is the encoding number. Every letter is being
 * processed with XOR operation with Key to encode or
 * decrypt it.
 * 
 * @param[in] text
 * @param[in] Key
 */
    XOR(std::string Text,
        int8_t Key);

/**
 * @brief Default constructor of XOR code object
 * just to avoid errors if someone would like to 
 * encrypt/decrypt without giving text or/and Key
 * 
 */
    XOR();
    
 /**
  * @brief Encrypt the message using XOR method 
  * to shift the letters
  * 
  * @return nothing
  */
    void encryptMessage();
 
 /**
  * @brief Decrypt the message using XOR method 
  * to shift the letters
  *
  * @return nothing
  */
    void decryptMessage();
    
/**
  * @brief calculations to shift each letter
  * isEncryption is to state either we are 
  * calculating for encryption or decryption
  *
  * 
  * @return nothing
  */
    void calculations();
    
/**
  * @brief Setter for param Text
  *
  * @return nothing
  */
    void setText(std::string Text);

/**
  * @brief Setter for param Shift
  *
  * @return nothing
  */
    void setKey(int8_t Key);
    
};

#endif // XOR_HPP

