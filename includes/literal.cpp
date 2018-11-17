#include "literal.h"
#include <iostream>
#include <string>

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

 Literal* StringLiteral::Slice(const IntLiteral* st, const IntLiteral* ed, const IntLiteral* stp, bool nocolon) const {
    Literal* ss;
    int start, end, step;
    std::string str = "";

    if(nocolon) {
        if(st) {
            start = cycle(st->getVal(), val.size());
            end = start+1;
        }
        else {
            throw std::string("Slice params error");
        }
        step = 1;
    }
    else {
        if(st == NULL && ed == NULL && stp == NULL){
            start = 0;
            end = val.size();
            step = 1;
        }
        else if(st == NULL && ed == NULL ){
            start = 0;
            end = val.size();
            step = stp->getVal();
        }
        else if(ed == NULL && stp == NULL ){
            start = cycle(st->getVal(), val.size());
            end = val.size();
            step = 1;
        }
        else if(st == NULL && stp == NULL ){
            start = 0;
            end = cycle(ed->getVal(), val.size());
            step = 1;
        }
        else if(st == NULL ){
            start = 0;
            end = cycle(ed->getVal(), val.size());
            step = stp->getVal();;
        }
        else if(ed == NULL ){
            start = cycle(st->getVal(), val.size());
            end = val.size();
            step = stp->getVal();
        }
        else if(stp == NULL ){
            start = cycle(st->getVal(), val.size());
            end = cycle(ed->getVal(), val.size());
            step = 1;
        }
        else{
            start = cycle(st->getVal(), val.size());
            end = cycle(ed->getVal(), val.size());
            step = stp->getVal();
        }
    }
    
    int i;
    if(step < 0 && start > end){
        for(i = start; i < end; i+=step){
            str.push_back(val[i]);
        }
        ss = new StringLiteral(str);
    }
    else if(step > 0 && start < end){
        for(i = start; i < end; i+=step){
            str.push_back(val[i]);
        }
        ss = new StringLiteral(str);
    }
    else{
        ss = new StringLiteral("");
    }
    return ss;
}

