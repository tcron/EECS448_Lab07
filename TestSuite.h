#ifndef TESTSUITE_H
#define TESTSUITE_H

class TestSuite
{
public:
  void runTests();

private:
  bool testSize();
  bool testIsEmpty();
  bool testAddFront();
  bool testAddBack();
  bool testRemoveFront();
  bool testRemoveBack();
  bool testSearch();

};

#endif
