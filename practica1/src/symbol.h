#ifndef __symbol_h__  // If not defined symbol_h
#define __symbol_h__  // Define symbol_h

#include <string>  // Include string library
#include <iostream>  // Include iostream library
/**
 * @brief 
 * 
 */
class Symbol {  // Symbol class
public:
    Symbol(const std::string& name) : symbol_(name) {}  // Constructor
    std::string getSymbol() const { return symbol_; }  // Get symbol
    // Compare symbols
    const bool operator <(const Symbol& other) const { return symbol_ < other.symbol_; }
    const bool operator ==(const Symbol& other) const { return symbol_ == other.symbol_; }
    void print() const { std::cout << symbol_ << std::endl; }  // Print symbol
private:
    std::string symbol_;  // Name of the symbol
};

#endif  // End of symbol_h