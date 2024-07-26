#include "alphabet.h"  // Include alphabet header file



class Chain {
  public:
    Chain() = default;  // Default constructor
    Chain(const std::string&);  // Constructor
    int Size() const { return chain_.size(); }  // Get size of the chain


  private:
    std::vector<Symbol> chain_;  // Vector of strings
    Alphabet alphabet_;  // Alphabet object used to create the chain
};

