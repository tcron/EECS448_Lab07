#include "TestSuite.h"
#include <iostream>
#include "LinkedListOfInts.h"
#include <string>

void TestSuite::runTests()
{
  std::string test[2] = {"FAILED", "PASSED"};
  bool test1 = testSize();
  std::cout << "Test 1 (size): " << test[test1] << std::endl;

  bool test2 = testIsEmpty();
  std::cout << "Test 2 (isEmpty): " << test[test2] << std::endl;

  bool test3 = testAddFront();
  std::cout << "Test 3 (addFront): " << test[test3] << std::endl;

  bool test4 = testAddBack();
  std::cout << "Test 4 (addBack): " << test[test4] << std::endl;

  bool test5 = testRemoveFront();
  std::cout << "Test 5 (removeFront): " << test[test5] << std::endl;

  bool test6 = testRemoveBack();
  std::cout << "Test 6 (removeBack): " << test[test6] << std::endl;

  bool test7 = testSearch();
  std::cout << "Test 7 (search): " << test[test7] << std::endl;
}

bool TestSuite::testSearch()
{
  bool success = false;
  LinkedListOfInts testList;
  testList.addFront(7);
  testList.addFront(6);
  testList.addFront(5);

  bool testFirst = testList.search(5);
  bool testMiddle = testList.search(6);
  bool testLast = testList.search(7);
  bool testOther = testList.search(0);

  if(testFirst && testMiddle && testLast && !testOther)
  {
    success = true;
  }

  return success;
}

bool TestSuite::testRemoveBack()
{
  bool success = false;
  std::vector<int> testVector = {5,6};
  LinkedListOfInts testList;
  testList.addFront(7);
  testList.addFront(6);
  testList.addFront(5);

  testList.removeBack();

  std::vector<int> listToVector = testList.toVector();

  /*for(int i = 0; i < listToVector.size(); i++)
  {
    std::cout << listToVector[i];
  }
  std::cout<<std::endl;*/

  if(testVector == listToVector)
  {
    success = true;
  }

  return success;
}

bool TestSuite::testRemoveFront()
{
  bool success = false;
  std::vector<int> testVector = {6,7};
  LinkedListOfInts testList;
  testList.addFront(7);
  testList.addFront(6);
  testList.addFront(5);

  testList.removeFront();

  std::vector<int> listToVector = testList.toVector();

  /*for(int i = 0; i < listToVector.size(); i++)
  {
    std::cout << listToVector[i];
  }
  std::cout<<std::endl;*/

  if(testVector == listToVector)
  {
    success = true;
  }

  return success;
}

bool TestSuite::testAddBack()
{
  bool success = false;
  std::vector<int> testVector = {5,6,7};
  LinkedListOfInts testList;
  testList.addBack(5);
  testList.addBack(6);
  testList.addBack(7);
  std::vector<int> listToVector = testList.toVector();

  /*for(int i = 0; i < listToVector.size(); i++)
  {
    std::cout << listToVector[i];
  }
  std::cout<<std::endl;*/

  if(testVector == listToVector)
  {
    success = true;
  }

  return success;
}

bool TestSuite::testAddFront()
{
  bool success = false;
  std::vector<int> testVector = {5,6,7};
  LinkedListOfInts testList;
  testList.addFront(7);
  testList.addFront(6);
  testList.addFront(5);
  std::vector<int> listToVector = testList.toVector();

  if(testVector == listToVector)
  {
    success = true;
  }

  return success;
}

bool TestSuite::testIsEmpty()
{
  bool success = true;

  //tests isEmpty() on empty list
  LinkedListOfInts testEmptyList;
  bool test = testEmptyList.isEmpty();
  if(!test)
  {
    success = false;
    return success;
  }

  //tests isEmpty() after addFront()
  LinkedListOfInts testAddFrontList;
  testAddFrontList.addFront(5);
  test = testAddFrontList.isEmpty();
  if(test && testAddFrontList.size()>0)
  {
    success = false;
    return success;
  }

  //tests isEmpty() after addBack()
  LinkedListOfInts testAddBackList;
  testAddBackList.addBack(5);
  test = testAddBackList.isEmpty();
  if(test && testAddBackList.size()>0)
  {
    success = false;
    return success;
  }

  return success;
}

bool TestSuite::testSize()
{
  bool success = true;
  LinkedListOfInts testList;

  int size = testList.size();
  if(size != 0)
  {
    success = false;
    return success;
  }

  testList.addFront(7);
  testList.addFront(6);
  testList.addFront(5);

  size = testList.size();

  if(size != 3)
  {
    success = false;
    return success;
  }

  return success;
}
