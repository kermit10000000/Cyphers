/**
 * \class Cezar
 * @file Cezar.hpp
 *
 * @par Licence
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 */

#ifndef CEZAR_HPP
#define CEZAR_HPP

#define ASCII_for_A 65
#define ASCII_for_Z 90
#define ASCII_for_a 97
#define ASCII_for_z 122

#include <iostream>
#include <string>

class Cezar{

private: 
 /**
  * @brief  parameters
  */
    const std::size_t latin_alphabet=26;
    std::string Text;
    int16_t Shift;
    std::string New_text;
    
public:   
/**
 * @brief Constructor of Cezar code object
 * text is the text to either cypher or decypher
 * shift is number describing the number to shift each
 *       letter to either cypher or decypher it
 * 
 * @param[in] text
 * @param[in] shift
 */
    Cezar(std::string Text,
        int16_t Shift,
    );
/**
 * @brief Default constructor of Cezar code object
 * just to avoid errors if someone would like to 
 * encrypt/decrypt without giving text or/and shift
 * 
 */
    Cezar();
    
 /**
  * @brief Encrypt the message using Cezar method 
  * to shift the letters
  * 
  * @return nothing
  */
    void encryptMessage();
 
 /**
  * @brief Decrypt the message using Cezar method 
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
    void calculations(bool isEncryption);
    
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
    void setShift(int16_t Shift);
    
};

#endif // CEZAR_HPP

