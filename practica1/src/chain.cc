#include "chain.h"
const char kSpace{' '};
const std::string kEpsilon{'&'};
Chain::Chain(const std::string& input) {
  std::string auxiliar;
  std::vector <std::string> vect_auxiliar;

  for (unsigned i = 0; i < input.size(); ++i) {
    if (input[i] != kSpace) {
      auxiliar += input[i];
    }
    else {
      vect_auxiliar.push_back(auxiliar);
      auxiliar.clear();
    }
  }
  vect_auxiliar.push_back(auxiliar); // Add the last word to the vector
  // Now we have a vector with the alphabet and the chain
  
  // Create the alphabet object with the first n-1 elements of the vector
  if (vect_auxiliar.size() == 1) {
    alphabet_ = Alphabet(vect_auxiliar);
  } else {
    std::vector<std::string> alphabet_vect(vect_auxiliar.begin(),
    vect_auxiliar.end() - 1);
    alphabet_ = Alphabet(alphabet_vect);
  }
  std::cout << "Alphabet: ";
  alphabet_.print();

  
}