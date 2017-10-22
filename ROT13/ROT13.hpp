/**
 * \class ROT13
 * @file ROT13.hpp
 *
 * @par Licence
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 */

#ifndef ROT13_HPP
#define ROT13_HPP

#define ASCII_for_A 65
#define ASCII_for_Z 90
#define ASCII_for_a 97
#define ASCII_for_z 122

#include <iostream>
#include <string>

class ROT13{

private: 
 /**
  * @brief  parameters
  */
    const std::size_t latin_alphabet=26;
    const std::size_t ROT13_shift=13;
    std::string Text;
    std::string New_text;
    
public:   
/**
 * @brief Constructor of ROT13 code object
 * text is the text to either cypher or decypher
 * 
 * @param[in] text
 */
    ROT13(std::string Text);

/**
 * @brief Default constructor of ROT13 code object
 * just to avoid errors if someone would like to 
 * encrypt/decrypt without giving text
 * 
 */
    ROT13();
    
 /**
  * @brief Encrypt the message using ROT13 method 
  * to shift the letters
  * 
  * @return nothing
  */
    void encryptMessage();
 
 /**
  * @brief Decrypt the message using ROT13 method 
  * to shift the letters
  *
  * @return nothing
  */
    void decryptMessage();
    
/**
  * @brief Setter for param Shift
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

};

#endif // ROT13_HPP

