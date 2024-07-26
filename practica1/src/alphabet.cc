
#include "alphabet.h"

Alphabet::Alphabet(const std::vector<std::string>& imput) {
  for (unsigned i = 0; i < imput.size() - 1; ++i) {
    alphabet_.insert(Symbol(imput[i]));
  }
}

