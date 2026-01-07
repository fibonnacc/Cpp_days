#ifndef BASE
#define BASE

#include <iostream>
#include <cstdlib>

class Base {
public:
  Base();
  Base(const Base &);
  Base &operator=(const Base &);
  virtual ~Base();

private:
};

Base *generate(void);
void identify(Base* p);
void identify(Base& p);


#endif
