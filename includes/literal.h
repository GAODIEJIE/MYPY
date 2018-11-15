#include "node.h"
#include "poolOfNodes.h"
#include <math.h>
#include <string>

#define PRECISION 1000

class Literal : public Node {
public:
  virtual ~Literal() {}

  virtual const Literal* operator+(const Literal& rhs) const =0;
  virtual const Literal* opPlus(float) const =0;
  virtual const Literal* opPlus(int) const =0;
  //virtual const Literal* opPlus(std::string) const =0;

  virtual const Literal* operator*(const Literal& rhs) const =0;
  virtual const Literal* opMult(float) const =0;
  virtual const Literal* opMult(int) const =0;
  //virtual const Literal* opMult(std::string) const =0;
  
  virtual const Literal* operator-(const Literal& rhs) const =0;
  virtual const Literal* opSubt(float) const =0;
  virtual const Literal* opSubt(int) const =0;

  virtual const Literal* operator/(const Literal& rhs) const =0;
  virtual const Literal* opDiv(float) const =0;
  virtual const Literal* opDiv(int) const =0;

  virtual const Literal* operator%(const Literal& rhs) const =0;
  virtual const Literal* opMod(float) const =0;
  virtual const Literal* opMod(int) const =0;

  virtual const Literal* operator^(const Literal& rhs) const =0;
  virtual const Literal* opPow(float) const =0;
  virtual const Literal* opPow(int) const =0;

  virtual const Literal* eval() const = 0;
  virtual void print() const { 
    std::cout << "No Way" << std::endl; 
  }

  int floor(float lhs, float rhs) const {
    float quotient = lhs / rhs;
    int m;
    if(fabs(quotient - (int)(quotient)) <= 1e-8){
      m = quotient;
      //std::cout << "=" << std::endl;
    }
    else if(quotient < 0){
      m = quotient - 1;
      //std::cout << "<" << std::endl;
    }
    else if(quotient > 0){ 
      m = quotient;
      //std::cout << ">" << std::endl;
    }
    return m;
  }
};

class IntLiteral;

class FloatLiteral: public Literal {
public:
  FloatLiteral(float _val): val(_val) {}

  virtual const Literal* operator+(const Literal& rhs) const  {
    return rhs.opPlus(val);
  }
  virtual const Literal* opPlus(float lhs) const  {
    const Literal* node = new FloatLiteral(lhs + val);
    PoolOfNodes::getInstance().add(node);
    return node; 
  }
  virtual const Literal* opPlus(int lhs) const  {
    const Literal* node = new FloatLiteral(lhs + val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  // virtual const Literal* opPlus(std::string lhs) const {
  //   const Literal* node;
  //   PoolOfNodes::getInstance().add(node);
  //   return node; 
  // }

  virtual const Literal* operator-(const Literal& rhs) const  {
    return rhs.opSubt(val);
  }
  virtual const Literal* opSubt(float lhs) const  {
    const Literal* node = new FloatLiteral(lhs - val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opSubt(int lhs) const  {
    const Literal* node = new FloatLiteral(lhs - val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator*(const Literal& rhs) const  {
    return rhs.opMult(val);
  }
  virtual const Literal* opMult(float lhs) const  {
    const Literal* node = new FloatLiteral(lhs * val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opMult(int lhs) const  {
    const Literal* node = new FloatLiteral(static_cast<float>(lhs) * val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  // virtual const Literal* opMult(std::string lhs) const {
  //   const Literal* node;
  //   PoolOfNodes::getInstance().add(node);
  //   return node; 
  // }

  virtual const Literal* operator/(const Literal& rhs) const  {
    return rhs.opDiv(val);
  }
  virtual const Literal* opDiv(float lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(lhs / val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opDiv(int lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(lhs / val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator%(const Literal& rhs) const {
    return rhs.opMod(val);
  }
  virtual const Literal* opMod(float lhs) const {
    if( val == 0 ) throw std::string("% error");
    const Literal* node = new FloatLiteral((lhs*PRECISION - val * floor(lhs, val)*PRECISION)/PRECISION);
    //const Literal* node = new FloatLiteral((lhs*1000 - val * floor(lhs, val)*1000)/1000);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opMod(int lhs) const {
    if( val == 0 ) throw std::string("% error");
    const Literal* node = new FloatLiteral((lhs*PRECISION - val * floor(lhs, val)*PRECISION)/PRECISION);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator^(const Literal& rhs) const {
    return rhs.opPow(val);
  }
  virtual const Literal* opPow(float lhs) const {
    if( val == 0 ) throw std::string("^ error");
    const Literal* node = new FloatLiteral(pow(lhs, val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opPow(int lhs) const {
    if( val == 0 ) throw std::string("^ error");
    const Literal* node = new FloatLiteral(pow(lhs, val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* eval() const { 
    return this; }
  virtual void print() const { 
    std::cout << "FLOAT: " << val << std::endl; 
  }
private:
  float val;
};

class IntLiteral: public Literal {
public:
 IntLiteral(int _val): val(_val) {}

  virtual const Literal* operator+(const Literal& rhs) const  {
    return rhs.opPlus(val);
  }
  virtual const Literal* opPlus(float lhs) const  {
    const Literal* node = new FloatLiteral(static_cast<float>(val) + lhs);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opPlus(int lhs) const  {
    const Literal* node = new IntLiteral(lhs + val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  // virtual const Literal* opPlus(std::string lhs) const {
  //   const Literal* node ;
  //   PoolOfNodes::getInstance().add(node);
  //   return node; 
  // }

  virtual const Literal* operator-(const Literal& rhs) const  {
    return rhs.opSubt(val);
  }
  virtual const Literal* opSubt(float lhs) const  {
    const Literal* node = new FloatLiteral(lhs - val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opSubt(int lhs) const  {
    const Literal* node = new IntLiteral(lhs - val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator*(const Literal& rhs) const  {
    return rhs.opMult(val);
  }
  virtual const Literal* opMult(float lhs) const  {
    const Literal* node = new FloatLiteral(lhs * val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opMult(int lhs) const  {
    const Literal* node = new IntLiteral(lhs * val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator/(const Literal& rhs) const  {
    return rhs.opDiv(val);
  }
  virtual const Literal* opDiv(float lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(lhs / val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opDiv(int lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new IntLiteral(lhs / val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator%(const Literal& rhs) const {
    return rhs.opMod(val);
  }
  virtual const Literal* opMod(float lhs) const {
    if( val == 0 ) throw std::string("% error");
    const Literal* node = new FloatLiteral((lhs*PRECISION - val * floor(lhs, val)*PRECISION)/PRECISION);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opMod(int lhs) const {
    if( val == 0 ) throw std::string("% error");
    const Literal* node = new IntLiteral((lhs*PRECISION - val * floor(lhs, val)*PRECISION)/PRECISION);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator^(const Literal& rhs) const {
    return rhs.opPow(val);
  }
  virtual const Literal* opPow(float lhs) const {
    if( val == 0 ) throw std::string("^ error");
    const Literal* node = new FloatLiteral(pow(lhs, val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opPow(int lhs) const {
    if( val == 0 ) throw std::string("^ error");
    const Literal* node = new FloatLiteral(pow(lhs, val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* eval() const { return this; }
  virtual void print() const { 
    std::cout << "INT: " << val << std::endl; 
  }
private:
  int val;
};

class StringLiteral: public Literal {
public:
  StringLiteral(std::string _val): val(_val) {}

  virtual const Literal* operator+(const Literal& rhs) const  {
    return rhs.opPlus(val);
  }
  virtual const Literal* opPlus(std::string lhs) const {
    const Literal* node = new StringLiteral(val + lhs);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opPlus(float lhs) const  { 
    const Literal* node;
    PoolOfNodes::getInstance().add(node);
    return node;
    }
  virtual const Literal* opPlus(int lhs) const  { 
    const Literal* node;
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator-(const Literal& rhs) const  {
    const Literal* node;
    return node;
  }
  virtual const Literal* opSubt(float lhs) const  { 
    const Literal* node;
    return node;}
  virtual const Literal* opSubt(int lhs) const  { 
    const Literal* node;
    return node;
  }

  virtual const Literal* operator*(const Literal& rhs) const  {
    return rhs.opMult(val);
  }
  virtual const Literal* opMult(float lhs) const  {
    const Literal* node;
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opMult(int lhs) const  {
    std::string string;
    for (int i = 0; i < lhs; i++){
      string += val;
    }
    const Literal* node = new StringLiteral(string);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opMult(std::string lhs) const {
    const Literal* node;
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator/(const Literal& rhs) const  {
    const Literal* node;
    return node;  
    }
  virtual const Literal* opDiv(float lhs) const  {
    const Literal* node;
    return node;
  }
  virtual const Literal* opDiv(int lhs) const  {
    const Literal* node;
    return node;
  }
  virtual const Literal* opDiv(std::string lhs) const {
    const Literal* node;
    return node;
  }

  virtual const Literal* operator%(const Literal& rhs) const {
    const Literal* node;
    return node;
  }
  virtual const Literal* opMod(float lhs) const {
    const Literal* node;
    return node;
  }
  virtual const Literal* opMod(int lhs) const {
    const Literal* node;
    return node;
  }

  virtual const Literal* operator^(const Literal& rhs) const {
    const Literal* node;
    return node;
  }
  virtual const Literal* opPow(float lhs) const {
    const Literal* node;
    return node;
  }
  virtual const Literal* opPow(int lhs) const {
    const Literal* node;
    return node;
  }

  virtual const Literal* eval() const { 
    return this; }
  virtual void print() const { 
    std::cout << "STRING: " << val << std::endl; 
  }
private:
  std::string val;
};