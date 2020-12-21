/******************
 * 自定义头文件,防止VScode报错
*******************/
#ifndef _INCLUDE_H_
#define _INCLUDE_H_

//导入Arduino核心头文件
#include "arduino.h"

class INCLUDE
{
    private:
        byte pin;           //常量名
        bool H_and_L;
    public:
        void DWrite(byte pin,bool N_L);
        void AWrite(byte pin,int Value);
        bool DRead(byte pin);
        int ARead(byte pin);
};
#endif
