/**************************************************************
 * Person 클래스의 인터페이스 파일                            *
 **************************************************************/
#ifndef PERSON_H
#define PERSON_H
#include "date.h"

// Person 클래스의 정의
class Person
{
  private:
    string id;
    Date birthDate;
  public: 
    Person(string id, Date birthDate);   
    ~Person(); 
    void print() const; 
};
#endif