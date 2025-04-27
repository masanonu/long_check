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
class long_sum
{
private:
  bool Judge;
  long value01;
  long first[18];
  long sum;
  void space(long value);
public:
  long_pop object01[18];
  void setJudge(bool judge);
  bool getJudge(void);
  void setValue(long value);
  long getInput(void);
  long getSum(void);
  void show(void);
  ~long_sum(void);
};
long_sum::~long_sum(void)
{
  this->Judge = (bool)NULL;
  this->value01 = (long)NULL;
  for (long i = 0; i < 18; i++) {
    this->first[i] = (long)NULL;
  }
  this->sum = (long)NULL;
}
void long_sum::setJudge(bool judge)
{
  this->Judge = judge;
}
bool long_sum::getJudge(void)
{
  return this->Judge;
}
void long_sum::setValue(long value)
{
  this->value01 = 0;
  for (long i = 0; i < 18; i++) {
    this->first[i] = 0;
  }
  this->value01 = value;
  this->value01 = abs(this->value01);
  if (this->value01 > 999999999999999999) {
    std::cout << "The input value is scale out." << std::endl;
    this->setJudge(false);
  } else if (this->value01 < -999999999999999999) {
    std::cout << "The input value is scale out." << std::endl;
    this->setJudge(false);
  } else {
    this->object01[0].setValue(this->value01);
    this->first[0] = this->object01[0].getFirst();
    this->object01[1].setValue(this->object01[0].getResult());
    this->first[1] = this->object01[1].getFirst();
    this->object01[2].setValue(this->object01[1].getResult());
    this->first[2] = this->object01[2].getFirst();
    this->object01[3].setValue(this->object01[2].getResult());
    this->first[3] = this->object01[3].getFirst();
    this->object01[4].setValue(this->object01[3].getResult());
    this->first[4] = this->object01[4].getFirst();
    this->object01[5].setValue(this->object01[4].getResult());
    this->first[5] = this->object01[5].getFirst();
    this->object01[6].setValue(this->object01[5].getResult());
    this->first[6] = this->object01[6].getFirst();
    this->object01[7].setValue(this->object01[6].getResult());
    this->first[7] = this->object01[7].getFirst();
    this->object01[8].setValue(this->object01[7].getResult());
    this->first[8] = this->object01[8].getFirst();
    this->object01[9].setValue(this->object01[8].getResult());
    this->first[9] = this->object01[9].getFirst();
    this->object01[10].setValue(this->object01[9].getResult());
    this->first[10] = this->object01[10].getFirst();
    this->object01[11].setValue(this->object01[10].getResult());
    this->first[11] = this->object01[11].getFirst();
    this->object01[12].setValue(this->object01[11].getResult());
    this->first[12] = this->object01[12].getFirst();
    this->object01[13].setValue(this->object01[12].getResult());
    this->first[13] = this->object01[13].getFirst();
    this->object01[14].setValue(this->object01[13].getResult());
    this->first[14] = this->object01[14].getFirst();
    this->object01[15].setValue(this->object01[14].getResult());
    this->first[15] = this->object01[15].getFirst();
    this->object01[16].setValue(this->object01[15].getResult());
    this->first[16] = this->object01[16].getFirst();
    this->object01[17].setValue(this->object01[16].getResult());
    this->first[17] = this->object01[17].getFirst();
    this->object01[18].setValue(this->object01[17].getResult());
    this->first[18] = this->object01[18].getFirst();
    this->sum = 0;
    for (long i = 0; i < 18; i++) {
      this->sum += this->first[i];
    }
    this->setJudge(true);
  }
}
long long_sum::getSum(void)
{
  return this->sum;
}
long long_sum::getInput(void)
{
  return this->value01;
}
void long_sum::space(long value)
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
void long_sum::show(void)
{
  if (this->getJudge() != false) {
    std::cout << "**********************************" << std::endl;
    std::cout << "*  input : " <<  this->getInput();
    this->space(this->getInput());
    std::cout << "*   sum  : " << this->getSum();
    this->space(this->getSum());
    std::cout << "**********************************" << std::endl;
  }
}
class consultant
{
private:
  bool Input;
  long_sum object01;
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
  std::cout << "This program calculate a sum value of long value." << std::endl;
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
  this->object01.setValue(value);
  this->setInput(true);
}
void consultant::show(void)
{
  if (this->getInput() != false)
    this->object01.show();
  else this->msg07();
}
consultant::~consultant(void)
{
  this->Input = (bool)NULL;
}
int main(void)
{
  long value001;
  consultant lady;
  lady.msg01();
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
    
    
