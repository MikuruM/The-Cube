#include <TFT_eSPI.h>
#include <SPI.h>

TFT_eSPI tft=TFT_eSPI();

int NUM=0;
int NUM2=0;
int timeloop=0;

void setup()
{
  tft.init();
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_WHITE);
  tft.drawString("The Cube",8,100,4);
  delay(1000);
  tft.setTextColor(TFT_WHITE);
  tft.drawString("Mikuru",50,127,2);
  delay(1200);
  pinMode(0,INPUT_PULLUP);
  pinMode(35,INPUT_PULLUP);
}
void loop()
{
  while(digitalRead(14)==0)
  {
    ++NUM;
    NUM2=85-NUM;
    ++timeloop;
    delay(15);
    
    float b=(NUM/2.0)*(4.0/5.0);
    float a=(NUM/2.0)*(3.0/5.0);

    float b2=(NUM2/2.0)*(4.0/5.0);
    float a2=(NUM2/2.0)*(3.0/5.0);
  
    tft.fillScreen(TFT_BLACK);
  
    tft.setTextColor(TFT_WHITE);
    tft.drawString(String(timeloop),10,10,4);

    //方块一程序开始
    tft.drawRect(10,70,NUM,NUM,TFT_WHITE);
    tft.drawRect(10+a,70+b,NUM,NUM,TFT_WHITE);
    
    tft.drawLine(10,70,10+a-1,70+b-1,TFT_WHITE);
    tft.drawLine(10+NUM,70,10+a+NUM-1,70+b-1,TFT_WHITE);
    tft.drawLine(10,70+NUM,10+a-1,70+b+NUM-1,TFT_WHITE);
    tft.drawLine(10+NUM,70+NUM,10+a+NUM-1,70+b+NUM-1,TFT_WHITE);
    //方块一程序结束

    //方块二程序开始
    tft.drawLine(125,194,125-NUM2,194,TFT_WHITE);
    tft.drawLine(125,194,125,194-NUM2,TFT_WHITE);
    tft.drawLine(125-NUM2,194,125-NUM2,194-NUM2,TFT_WHITE);
    tft.drawLine(125,194-NUM2,125-NUM2,194-NUM2,TFT_WHITE);//靠边的方块

    tft.drawLine(125-a2,194-b2,125-a2-NUM2,194-b2,TFT_WHITE);
    tft.drawLine(125-a2,194-b2,125-a2,194-b2-NUM2,TFT_WHITE);
    tft.drawLine(125-a2-NUM2,194-b2,125-a2-NUM2,194-b2-NUM2,TFT_WHITE);
    tft.drawLine(125-a2,194-b2-NUM2,125-a2-NUM2,194-b2-NUM2,TFT_WHITE);//靠中心的方块

    tft.drawLine(125,194,125-a2,194-b2,TFT_WHITE);
    tft.drawLine(125,194-NUM2,125-a2,194-b2-NUM2,TFT_WHITE);
    tft.drawLine(125-NUM2,194,125-a2-NUM2,194-b2,TFT_WHITE);
    tft.drawLine(125-NUM2,194-NUM2,125-a2-NUM2,194-b2-NUM2,TFT_WHITE);//侧边
    //方块二程序结束
    }
  

  while(digitalRead(0)==0)
  {
    --NUM;
    NUM2=85-NUM;
    --timeloop;
    delay(15);
    
    float b=(NUM/2.0)*(4.0/5.0);
    float a=(NUM/2.0)*(3.0/5.0);

    float b2=(NUM2/2.0)*(4.0/5.0);
    float a2=(NUM2/2.0)*(3.0/5.0);
  
    tft.fillScreen(TFT_BLACK);
  
    tft.setTextColor(TFT_WHITE);
    tft.drawString(String(timeloop),10,10,4);

    //第一个方块开始
    tft.drawRect(10,70,NUM,NUM,TFT_WHITE);
    tft.drawRect(10+a,70+b,NUM,NUM,TFT_WHITE);
    
    tft.drawLine(10,70,10+a-1,70+b-1,TFT_WHITE);
    tft.drawLine(10+NUM,70,10+a+NUM-1,70+b-1,TFT_WHITE);
    tft.drawLine(10,70+NUM,10+a-1,70+b+NUM-1,TFT_WHITE);
    tft.drawLine(10+NUM,70+NUM,10+a+NUM-1,70+b+NUM-1,TFT_WHITE);
    //第一个方块结束

    //方块二程序开始
    tft.drawLine(125,194,125-NUM2,194,TFT_WHITE);
    tft.drawLine(125,194,125,194-NUM2,TFT_WHITE);
    tft.drawLine(125-NUM2,194,125-NUM2,194-NUM2,TFT_WHITE);
    tft.drawLine(125,194-NUM2,125-NUM2,194-NUM2,TFT_WHITE);//靠边的方块

    tft.drawLine(125-a2,194-b2,125-a2-NUM2,194-b2,TFT_WHITE);
    tft.drawLine(125-a2,194-b2,125-a2,194-b2-NUM2,TFT_WHITE);
    tft.drawLine(125-a2-NUM2,194-b2,125-a2-NUM2,194-b2-NUM2,TFT_WHITE);
    tft.drawLine(125-a2,194-b2-NUM2,125-a2-NUM2,194-b2-NUM2,TFT_WHITE);//靠中心的方块

    tft.drawLine(125,194,125-a2,194-b2,TFT_WHITE);
    tft.drawLine(125,194-NUM2,125-a2,194-b2-NUM2,TFT_WHITE);
    tft.drawLine(125-NUM2,194,125-a2-NUM2,194-b2,TFT_WHITE);
    tft.drawLine(125-NUM2,194-NUM2,125-a2-NUM2,194-b2-NUM2,TFT_WHITE);//侧边
    //方块二程序结束
  }
}
