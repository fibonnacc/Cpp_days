
#ifndef SPAN_
#define SPAN_

#include <iostream>
#include <vector>

class Span {
public:

  /************************/
  /*   Methode Function   */
  /************************/
  void  addNumber(int value);
  unsigned int longestSpan();
  unsigned int shortestSpan();
  //
  // /************************/
  // /*    Exception Class   */
  // /************************/
  // class SameValue : public std::exception {
  // private:
  //   std::string message;
  // public:
  //   SameValue();
  //   SameValue(std::string str);
  //   const char *what() const throw();
  //   virtual ~SameValue() throw();
  // };

  /************************/
  /*  Canonical Orthodox  */
  /************************/
  Span();
  Span(unsigned int value);
  Span(const Span &other);
  Span &operator=(const Span &other);
  ~Span();

private:
  std::vector<int> ve;
  unsigned int _size;
};

#endif // !DEBUG
