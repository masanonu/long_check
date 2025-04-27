#include<iostream>
#include<string>
#include<regex>
#include<cmath>
using namespace std;
class long_pop
{
private:
  long value01;
  long one;
  long result;
  bool Judge;
  void space(long value);
public:
  void setJudge(bool judge);
  bool getJudge(void);
  long getInput(void);
  void setValue(long value1);
  void setFirst(long value3);
  long getFirst(void);
  long getResult(void);
  void show(void);
  ~long_pop(void);
};
long_pop::~long_pop(void)
{
  this->value01 = (long)NULL;
  this->one = (long)NULL;
  this->result = (long)NULL;
  this->Judge = (bool)NULL;
}
void long_pop::setJudge(bool judge)
{
  this->Judge = judge;
}
bool long_pop::getJudge(void)
{
  return this->Judge;
}
void long_pop::setFirst(long value3)
{
  this->one = value3;
}
void long_pop::setValue(long value1)
{
  this->value01 = 0;
  this->one = 0;
  this->result = 0;
  this->value01 = value1;
  this->value01 = abs(this->value01);
  if (this->value01 > 999999999999999999) {
    std::cout << "The input value is scale out." << std::endl;
    this->setJudge(false);
  } else if (this->value01 < -999999999999999999) {
    std::cout << "The input value is scale out." << std::endl;
    this->setJudge(false);
  } else {
    this->one = this->value01 % 10;
    this->result = this->value01 / 10;
    this->setJudge(true);
  }
}
long long_pop::getFirst(void)
{
  return this->one;
}
long long_pop::getResult(void)
{
  return this->result;
}
long long_pop::getInput(void)
{
  return this->value01;
}
void long_pop::space(long value)
{
  if (value < 10) {
    std::cout << "                     *" << std::endl;
  } else if (value < 100) {
    std::cout << "                    *" << std::endl;
  } else if (value < 1000) {
    std::cout << "                   *" << std::endl;
  } else if (value < 10000) {
    std::cout << "                  *" << std::endl;
  } else if (value < 100000) {
    std::cout << "                 *" << std::endl;
  } else if (value < 1000000) {
    std::cout << "                *" << std::endl;
  } else if (value < 10000000) {
    std::cout << "               *" << std::endl;
  } else if (value < 100000000) {
    std::cout << "              *" << std::endl;
  } else if (value < 1000000000) {
    std::cout << "             *" << std::endl;
  } else if (value < 10000000000) {
    std::cout << "            *" << std::endl;
  } else if (value < 100000000000) {
    std::cout << "           *" << std::endl;
  } else if (value < 1000000000000) {
    std::cout << "          *" << std::endl;
  } else if (value < 10000000000000) {
    std::cout << "         *" << std::endl;
  } else if (value < 100000000000000) {
    std::cout << "        *" << std::endl;
  } else if (value < 1000000000000000) {
    std::cout << "       *" << std::endl;
  } else if (value < 10000000000000000) {
    std::cout << "      *" << std::endl;
  } else if (value < 100000000000000000) {
    std::cout << "     *" << std::endl;
  } else if (value < 1000000000000000000) {
    std::cout << "    *" << std::endl;
  }
}
void long_pop::show(void)
{
  if (this->getJudge() != false) {
    std::cout << "************************************" << std::endl;
    std::cout << "*    input : " <<  this->getInput();
    this->space(this->getInput());
    std::cout << "*    first : " << this->getFirst();
    this->space(this->getFirst());
    std::cout << "*   result : " << this->getResult();
    this->space(this->getResult());
    std::cout << "************************************" << std::endl;  
  }
}
class long_push
{
private:
  long value01;
  long result;
  void space(long value);
  long_pop object02;
public:
  void setValue(long value1);
  long getResult(void);
  void show(void);
  ~long_push(void);
};
long_push::~long_push(void)
{
  this->value01 = (long)NULL;
  this->result = (long)NULL;
}
void long_push::setValue(long value1)
{
  this->value01 = 0;
  this->result = 0;
  this->value01 = value1;
  this->value01 = abs(this->value01);
  this->object02.setValue(this->value01);
  this->result = this->value01 * 10 + this->object02.getFirst();
}
long long_push::getResult(void)
{
  return this->result;
}
void long_push::space(long value) {
  if (value < 10) {
    std::cout << "                     *" << std::endl;
  } else if (value < 100) {
    std::cout << "                    *" << std::endl;
  } else if (value < 1000) {
    std::cout << "                   *" << std::endl;
  } else if (value < 10000) {
    std::cout << "                  *" << std::endl;
  } else if (value < 100000) {
    std::cout << "                 *" << std::endl;
  } else if (value < 1000000) {
    std::cout << "                *" << std::endl;
  } else if (value < 10000000) {
    std::cout << "               *" << std::endl;
  } else if (value < 100000000) {
    std::cout << "              *" << std::endl;
  } else if (value < 1000000000) {
    std::cout << "             *" << std::endl;
  } else if (value < 10000000000) {
    std::cout << "            *" << std::endl;
  } else if (value < 100000000000) {
    std::cout << "           *" << std::endl;
  } else if (value < 1000000000000) {
    std::cout << "          *" << std::endl;
  } else if (value < 10000000000000) {
    std::cout << "         *" << std::endl;
  } else if (value < 100000000000000) {
    std::cout << "        *" << std::endl;
  } else if (value < 1000000000000000) {
    std::cout << "       *" << std::endl;
  } else if (value < 10000000000000000) {
    std::cout << "      *" << std::endl;
  } else if (value < 100000000000000000) {
    std::cout << "     *" << std::endl;
  } else if (value < 1000000000000000000) {
    std::cout << "    *" << std::endl;
  }
}
void long_push::show(void)
{
  std::cout << "************************************" << std::endl;
  std::cout << "*   input  : " << this->object02.getInput();
  this->space(this->object02.getInput());
  std::cout << "*   first  : " << this->object02.getFirst();
  this->space(this->object02.getFirst());
  std::cout << "*   result : " << this->getResult();
  this->space(this->getResult());
  std::cout << "************************************" << std::endl;
}
class consultant
{
private:
  bool Input;
public:
  void setInput(bool input);
  bool getInput(void);
  void setValue(long value);
  void msg01(void);
  void msg06(void);
  void msg07(void);
  void show(void);
  long_push object01;
  ~consultant(void);
};
consultant::~consultant(void)
{
  this->Input = (bool)NULL;
}
void consultant::setInput(bool input)
{
  this->Input = input;
}
bool consultant::getInput(void)
{
  return this->Input;
}
void consultant::setValue(long value)
{
  if (value > 99999999999999999) {
    std::cout << "The input value is scale out." << std::endl;
    this->setInput(false);
  } else if (value < -99999999999999999) {
    std::cout << "The input value is scale out." << std::endl;
    this->setInput(false);
  } else {    
    object01.setValue(value);
    this->setInput(true);
  }
}
void consultant::msg01(void)
{
  std::cout << "This program calculate a push first value at long value." << std::endl;
  std::cout << "Please enter a long value." << std::endl;
  std::cout << "value>";
}
void consultant::msg06(void)
{
  std::cout << "OK!" << std::endl;
}
void consultant::msg07(void)
{
  std::cout << "Input value is Error!" << std::endl;
  this->setInput(false);
}
void consultant::show(void)
{
  if (this->getInput() != false)
    object01.show();
  else this->msg07();
}
int main(void)
{
  static long value;
  consultant lady;
  lady.msg01();
  if (std::cin >> value) {} else {
    lady.msg07();
    if (lady.getInput() != true)
      goto FORMAT;
  }
  lady.setValue(value);
  lady.show();
 FORMAT:
  value = (long)NULL;
  return 0;
}
