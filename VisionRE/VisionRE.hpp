/**
 * \class VisionRE
 * @file VisionRE.hpp
 *
 * @par Licence
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 */

#ifndef VisionRE_HPP
#define VisionRE_HPP

#define ASCII_for_A 65
#define ASCII_for_Z 90
#define ASCII_for_a 97
#define ASCII_for_z 122

#include <iostream>
#include <string>

class VisionRE{

private: 
 /**
  * @brief  parameters
  */
    const std::size_t latin_alphabet=26;
    std::string Text;
    std::string Key;
    std::string New_text;
    
public:   
/**
 * @brief Constructor of VisionRE code object
 * text is the text to either cypher or decypher
 * Key is number describing the number to Key each
 *       letter to either cypher or decypher it
 * 
 * @param[in] text
 * @param[in] Key
 */
    VisionRE(std::string Text,
        std::string Key);

/**
 * @brief Default constructor of VisionRE code object
 * just to avoid errors if someone would like to 
 * encrypt/decrypt without giving text or/and Key
 * 
 */
    VisionRE();
    
 /**
  * @brief Encrypt the message using VisionRE method 
  * to Key the letters
  * 
  * @return nothing
  */
    void encryptMessage();
 
 /**
  * @brief Decrypt the message using VisionRE method 
  * to Key the letters
  *
  * @return nothing
  */
    void decryptMessage();
    
/**
  * @brief calculate_interval, variable moving the 
  * numbers to interval [0-25] just for the 
  * calculations and the moving back to ASCII 
  * representation. It ignores not letter signs
  * moving the calculate_interval to 0;
  * @param[in] letter;
  * 
  * @return nothing
  */
    int calculate_interval(char letter);
    
/**
  * @brief calculations to Key each letter
  * isEncryption is to state either we are 
  * calculating for encryption or decryption
  *
  * @param[in] isEncryption
  * 
  * @return nothing
  */
    void calculations(bool isEncryption);
    
/**
  * @brief Setter for param Text
  *
  * @return nothing
  */
    void setText(std::string Text);

/**
  * @brief Setter for param Key
  *
  * @return nothing
  */
    void setKey(std::string Key);
    
};

#endif // VisionRE_HPP

