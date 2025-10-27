#ifndef RBAIN
#define RBAIN

#include <iostream>

class Brain {
public:
  Brain();
  Brain(const Brain &other);
  Brain &operator=(const Brain &other);
  void  plus_idea(const std::string str);
	const std::string&	getIdea(unsigned int index) const;
  ~Brain();

private:
  std::string ideas[100];
  unsigned int range;
};

#endif // !RBAIN
