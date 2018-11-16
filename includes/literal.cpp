#include "literal.h"
#include <iostream>
#include <string>

//question :判断n超过length的情况

int cycle(int n, int length) {
    if(n < 0)
    {
        n = length + n;
    }
    else{ //n >=0
        n = n;
    }
    return n;
}

 Literal* StringLiteral::Slice(const IntLiteral* st, const IntLiteral* ed, const IntLiteral* stp) const {
    Literal* ss;
    int _start, _end, _step;
    int start, end, step;
    std::string str = "";
    _start = cycle(st->getVal(), val.size());
    _end = cycle(ed->getVal(), val.size());
    _step = stp->getVal();
    if(_start == NULL && _end == NULL && _step == NULL){
        start = 0;
        end = val.size();
        step = 1;
    }
    else if(_start == NULL && _end == NULL ){
        start = 0;
        end = val.size();
        step = _step;
    }
    else if(_end == NULL && _step == NULL ){
        start = _start;
        end = val.size();
        step = 1;
    }
    else if(_start == NULL && _step == NULL ){
        start = 0;
        end = _end;
        step = 1;
    }
    else if(_start == NULL && _end == 0 &&  _step == NULL ){
        start = 0;
        end = _end;
        step = 1;
    }
    else if(_start == NULL ){
        start = 0;
        end = _end;
        step = _step;
    }
    else if(_end == NULL ){
        start = _start;
        end = val.size();
        step = _step;
    }
    else if(_end == 0 ){ //no colon
        start = _start;
        end = _start+1;
        step = 1;
    }
    else if(_step == NULL ){
        start = _start;
        end = _end;
        step = 1;
    }
    else{
        start = _start;
        end = _end;
        step = _step;
    }
    std::cout << "++++++++++++++++ " << val <<std::endl;
    std::cout << "++++++++++++++++ " << start << " " << end << " " << step <<std::endl;
    int i;
    int j = 0;
    if(step < 0 && start > end){
        for(i = start, j = 0; i < end; i+=step, j++){
            str[j] = val[i];
        }
        ss = new StringLiteral(str);
    }
    else if(step > 0 && start < end){
        for(i = start, j = 0; i < end; i+=step, j++){
            str[j] = val[i];
        }
        ss = new StringLiteral(str);
        std::cout << "++++++++++++++++ " << str <<std::endl;
    }
    else{
        ss = new StringLiteral("");
    }
    std::cout << "slice function test" << start << std::endl;
    return ss;
  }