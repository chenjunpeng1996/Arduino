/*
 * @Author: your name
 * @Date: 2020-12-21 11:47:48
 * @LastEditTime: 2020-12-22 12:36:24
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \ArduinoFiles\include_files\include.cpp
 */
/********************
 * 自定义头文件,防止VScode报错
 * *****************/
#include "include.h"
#include "arduino.h"
 /**
  * @brief 向某个引脚写布尔值
  * 
  * @param pin 引脚号(byte)
  * @param H_L 布尔值(bool)
  * @return ** void 
  */
void INCLUDE::DWrite(byte pin,bool H_L)
{
    pinMode(pin,OUTPUT);
    digitalWrite(pin,H_L);
}

 /**
  * @brief 向某个引脚写模拟量值
  * 
  * @param pin 引脚号(byte)
  * @param Value 模拟电压值,范围0~255(int)
  * @return ** void 
  */
void INCLUDE::AWrite(byte pin,int Value)
{
    pinMode(pin,OUTPUT);
    analogWrite(pin,Value);
}

 /**
  * @brief 读取某个引脚的数字量
  * 
  * @param pin 引脚号(byte)
  * @return true 引脚电压为高
  * @return false 引脚电压为高
  */
bool INCLUDE::DRead(byte pin)
{
    pinMode(pin,INPUT);
    digitalRead(pin);
}
 /**
  * @brief 读取模拟输入引脚的电压值
  * 
  * @param pin ADC通道引脚号(byte)有:0,1,2,3;四个ADC通道
  * @return ** int 0-4095 对应0-2.5V
  */
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