#include "Brain.hpp"

Brain::Brain(const Brain &other) {
  *this = other;
}

Brain &Brain::operator=(const Brain &other) {
  if (this != &other)
  {
    for (int i = 0; i < 100; i++) {
      this->ideas[i] = other.ideas[i];
    }
    this->range = other.range;
  }
  return *this;
}

Brain::Brain() {
  std::cout << "Brain is created" << std::endl;
  range = 0;
}

const std::string&	Brain::getIdea(unsigned int index) const {
  return ideas[index];
}

void  Brain::plus_idea(const std::string str) {
  if (range == 100)
    return;
  ideas[range++] = str;
}

Brain::~Brain() {
  std::cout << "Brain say goodbye" << std::endl;
}

