#include<iostream>
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
class long_pop_check
{
private:
  long value01;
  long value02;
  long value03;
  bool Judge;
  void space01(long value);
  void space02(void);
  long_pop object01[5];
public:
  long getFirst1(void);
  long getFirst2(void);
  void setValue(long value1);
  long getInput(void);
  void setJudge(bool judge1);
  bool getJudge(void);
  void judge(void);
  void show(void);
  ~long_pop_check(void);
};
long_pop_check::~long_pop_check(void)
{
  this->value01 = (long)NULL;
    this->value02 = (long)NULL;
    this->value03 = (long)NULL;
  this->Judge = (bool)NULL;
}
void long_pop_check::setJudge(bool judge1)
{
  this->Judge = judge1;
}
bool long_pop_check::getJudge(void)
{
  return this->Judge;
}
void long_pop_check::setValue(long value1)
{
  this->value01 = 0;
    this->value02 = 0;
    this->value03 = 0;
  this->value01 = value1;
  if (this->value01 > 999999999999999999) {
    std::cout << "The Input value is scale out." << std::endl;
    this->setJudge(false);
  } else if (this->value01 < -999999999999999999) {
    std::cout << "The Input value is scale out." << std::endl;
    this->setJudge(false);
  } else {
    this->value01 = abs(this->value01);
    this->object01[0].setValue(this->value01);
    this->object01[1].setValue(this->object01[0].getResult());
    this->value02 = this->object01[0].getFirst();
    this->value03 = this->object01[1].getFirst();
    this->setJudge(true);
  }
}
long long_pop_check::getFirst1(void)
{
  return this->value02;
}
long long_pop_check::getFirst2(void)
{
  return this->value03;
}
long long_pop_check::getInput(void)
{
  return this->value01;
}
void long_pop_check::judge(void)
{
  if (this->value02 != this->value03)
    this->setJudge(false);
  else this->setJudge(true);
  if (this->getJudge() != true)
    std::cout << "This input value is not corresponding.";
  else std::cout << "This input value is corresponding.";
}
void long_pop_check::space01(long value)
{  if (value < 10) {
    std::cout << "                               *" << std::endl;
  } else if (value < 100) {
    std::cout << "                              *" << std::endl;
  } else if (value < 1000) {
    std::cout << "                             *" << std::endl;
  } else if (value < 10000) {
    std::cout << "                            *" << std::endl;
  } else if (value < 100000) {
    std::cout << "                           *" << std::endl;
  } else if (value < 1000000) {
    std::cout << "                          *" << std::endl;
  } else if (value < 10000000) {
    std::cout << "                         *" << std::endl;
  } else if (value < 100000000) {
    std::cout << "                        *" << std::endl;
  } else if (value < 1000000000) {
    std::cout << "                       *" << std::endl;
  } else if (value < 10000000000) {
    std::cout << "                      *" << std::endl;
  } else if (value < 100000000000) {
    std::cout << "                     *" << std::endl;
  } else if (value < 1000000000000) {
    std::cout << "                    *" << std::endl;
  } else if (value < 10000000000000) {
    std::cout << "                   *" << std::endl;
  } else if (value < 100000000000000) {
    std::cout << "                  *" << std::endl;
  } else if (value < 1000000000000000) {
    std::cout << "                 *" << std::endl;
  } else if (value < 10000000000000000) {
    std::cout << "                *" << std::endl;
  } else if (value < 100000000000000000) {
    std::cout << "               *" << std::endl;
  } else if (value < 1000000000000000000) {
    std::cout << "              *" << std::endl;
  }
}
void long_pop_check::space02(void)
{
  if (this->getJudge() != false)
    std::cout << "       *" << std::endl;
  else std::cout << "   *" << std::endl;
}
void long_pop_check::show(void)
{
  if (this->getJudge() != false) {
    std::cout << "***********************************************" << std::endl;
    std::cout << "*    input  : " <<  this->getInput();
    this->space01(this->getInput());
    std::cout << "*   first1  : " << this->getFirst1();
    this->space01(this->getFirst1());
    std::cout << "*   first2  : " << this->getFirst2();
    this->space01(this->getFirst2());
    std::cout << "*    ";
    this->judge();
    this->space02();
    std::cout << "***********************************************" << std::endl;
  }
}
class consultant
{
private:
  bool Input;
  long_pop_check object02;
public:
  void msg01(void);
  void msg06(void);
  void msg07(void);
  void setValue(long value);
  void setInput(bool input);
  bool getInput(void);
  void show(void);
  ~consultant(void);
};
void consultant::msg01(void)
{
  std::cout << "This program calculate a corresponding pop firsts values of long value." << std::endl;
  std::cout << "Please enter a long value." << std::endl;
  std::cout << "value>";
}
void consultant::msg06(void)
{
  std::cout << "OK!" << std::endl;
}
void consultant::msg07(void)
{
  std::cout << "The Input value is Error!" << std::endl;
  this->setInput(false);
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
  this->object02.setValue(value);
  this->setInput(true);
}
void consultant::show(void)
{
  if (this->getInput() != false) {
    this->msg06();
    this->object02.show();
  } else this->msg07();
}
consultant::~consultant(void)
{
  this->Input = (bool)NULL;
}
int main(void)
{
  long value001;
  consultant lady;
  std::cout << "This program calculate a corresponding of long value." << std::endl;
  std::cout << "Please enter value." << std::endl;
  std::cout << "value>";
  if (std::cin >> value001) {} else {
    lady.msg07();
    goto FORMAT;
  }
  lady.setValue(value001);
  lady.show();
  FORMAT:
  value001 = (long)NULL;
  return 0;
}
