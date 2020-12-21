/********************
 * 自定义头文件,防止VScode报错
 * *****************/
#include "include.h"
#include "arduino.h"

/********************
 * 向某个引脚写布尔值
 * 参数1:引脚号(byte)
 * 参数2:布尔值(bool)
 * 注:
 * 返回值:无
 * *****************/
void INCLUDE::DWrite(byte pin,bool H_L)
{
    pinMode(pin,OUTPUT);
    digitalWrite(pin,H_L);
}

/********************
 * 向某个引脚写模拟量值
 * 参数1:引脚号(byte)
 * 参数2:模拟电压值(int)
 * 注:模拟电压值为0~255
 * 返回值:无
 * *****************/
void INCLUDE::AWrite(byte pin,int Value)
{
    pinMode(pin,OUTPUT);
    AnalogWrite(pin,Value);
}
/********************
 * 读取某个引脚的数字量
 * 参数1:引脚号(byte)
 * 注:
 * 返回值:bool 开和关
 * *****************/
bool INCLUDE::DRead(byte pin)
{
    pinMode(pin,INPUT);
    digitalRead(pin);
}
/********************
 * 读取模拟输入引脚的电压值
 * 参数1:引脚号(byte)
 * 注:引脚输出0,1,2,3;四个ADC通道
 * 返回值:int 0-4095 对应0-2.5V
 * *****************/
int INCLUDE::ARead(byte pin)
{
    switch (pin)
    {
    case 0:
        return analogRead(A0);
        break;
    case 1:
        return analogRead(A1);
        break;
    case 2:
        return analogRead(A2);
        break;
    case 3:
        return analogRead(A3);
        break;
    default:
        break;
    }
}