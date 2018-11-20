#include <iostream>
#include <typeinfo>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include "ast.h"
#include "symbolTable.h"

const Literal* IdentNode::eval() const { 
  const Literal* val;
  try{
    val = SymbolTable::getInstance().getValue(ident);
  }
  catch(const std::string& msg){
    std::cout << "error:" << msg << std::endl;
  }
  return val;
}

const Literal* PlusUnaryNode::eval() const { 
  if (!right) {
    throw std::string("error");
  }
  const Literal* y = right->eval();
  return (y);
}

const Literal* MinusUnaryNode::eval() const { 
  if (!right) {
    throw std::string("error");
  }
  const Literal* y = right->eval();
  const Literal* x = new IntLiteral(-1);
  return ((*x)*(*y));
}

AsgBinaryNode::AsgBinaryNode(Node* left, Node* right) : 
  BinaryNode(left, right) { 
  const Literal* res = right->eval();
  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  SymbolTable::getInstance().setValue(n, res);
}


const Literal* AsgBinaryNode::eval() const { 
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* res = right->eval();
  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  SymbolTable::getInstance().setValue(n, res);
  return res;
}

const Literal* AddBinaryNode::eval() const { 
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return (*x+*y);
}

const Literal* SubBinaryNode::eval() const { 
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)-(*y));
}

const Literal* MulBinaryNode::eval() const { 
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)*(*y));
}

const Literal* DivBinaryNode::eval() const { 
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)/(*y));
}

const Literal* dblDivBinaryNode::eval() const { 
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  //std::cout << *((*x)%(*y))->eval()->print();
  return *( (*x) - *((*x)%(*y)) ) / (*y);
}

const Literal* ModBinaryNode::eval() const { 
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)%(*y));
}

const Literal* PowBinaryNode::eval() const { 
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)^(*y));
}

const Literal* SliceNode::eval() const { 
  if (!start || !end || !step) {
    throw std::string("error");
  }
  return nullptr;
}

const Literal* StrSlcNode::eval() const { 
  if (!Ident || !Slice) {
    throw std::string("string slice error");
  }
  //transform value
  const StringLiteral* ident = static_cast<const StringLiteral*>(Ident->eval());
  const SliceNode* slice = static_cast<SliceNode*>(Slice);
  Literal* val = ident->Slice(slice->getstart(),slice->getend(),slice->getstep(), slice->getcolon());
  return val;
  //return (*i)[(*s)];
  
}