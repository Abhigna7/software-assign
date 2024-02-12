/**  
* @file 
* @author Jan Doe  
* @version 1.0  
*  
* @section LICENSE  
*  
* This program is free software; you can redistribute it and/or 
* modify it under the terms of the GNU General Public License as 
* published by the Free Software Foundation; either version 2 of 
* the License, or (at your option) any later version. 
* 
* @section DESCRIPTION 
*  
* The Divider class represents a simple division operation.  
*/  

class Divider { 
    public: 
       /** 
        * Constructor that sets the numerator and denominator. 
        * 
        * @param numerator is the number to be divided. 
        * @param denominator is the divisor. Should not be zero. 
        */ 
       Divider(int numerator, int denominator) { 
           // Check if denominator is zero, handle the error if needed
           if (denominator == 0) {
               // Handle the error, for example, throw an exception
               throw std::invalid_argument("Denominator cannot be zero");
           }

           numerator_ = numerator;
           denominator_ = denominator;
       } 

       /** 
        * Perform the division operation. 
        * 
        * @return The result of the division. 
        */ 
       double divide() const { 
           return static_cast<double>(numerator_) / denominator_;
       } 

    private:
       int numerator_;
       int denominator_;
}; 
