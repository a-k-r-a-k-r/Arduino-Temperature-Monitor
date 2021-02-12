#include<LiquidCrystal.h>
LiquidCrystal lcd(8,9,10,11,12,13);
#define sensor A0 
byte degree[8] ={ 0b00011, 0b00011, 0b00000, 0b00000, 0b00000, 0b00000, 0b00000, 0b00000 }; 


void setup() 
    { 
     lcd.begin(16,2); 
     //abhiraj's work
     lcd.createChar(1, degree); 
     lcd.setCursor(4,0); 
     lcd.print(" <your name>'s "); 
     lcd.setCursor(3,1); 
     lcd.print(" Thermometer "); 
     delay(2000); lcd.clear(); 
    }
 void loop() 
    { 
     float reading=analogRead(sensor); 
     float temperature=reading*(5.0/1023.0)*100;
     float far=(temperature*1.8)+32;
     delay(10);
     lcd.clear(); 
     lcd.setCursor(0,0); 
     lcd.print("Updating temperature");
     lcd.setCursor(11,1); 
     lcd.print("....");
     delay(300);
     lcd.clear(); 
     lcd.setCursor(0,0); 
     lcd.print("Updating temperature");
     lcd.setCursor(11,1); 
     lcd.print(".....");
     delay(300);
     lcd.clear(); 
     lcd.setCursor(0,0); 
     lcd.print("Updating temperature");
     lcd.setCursor(11,1); 
     lcd.print("......");
     delay(300);
     lcd.clear();
     lcd.setCursor(0,0); 
     lcd.print("Updating temperature");
     lcd.setCursor(11,1); 
     lcd.print(".......");
     delay(300);
     lcd.clear();
     lcd.setCursor(0,0); 
     lcd.print("Updating temperature");
     lcd.setCursor(11,1); 
     lcd.print("........");
     delay(300);
     lcd.clear();
     lcd.setCursor(0,0); 
     lcd.print("Updating temperature");
     lcd.setCursor(11,1); 
     lcd.print(".........");
     delay(300);
     lcd.clear();
     lcd.setCursor(2,0); 
     lcd.print("Temperature is:"); 
     lcd.setCursor(6,1); 
     lcd.print(temperature);
     lcd.write(1);
     lcd.print("C");
     lcd.setCursor(25,0); 
     lcd.print("(");
     lcd.setCursor(26,0); 
     lcd.print(far);
     lcd.write(1);
     lcd.print("F"); 
     lcd.setCursor(33,0); 
     lcd.print(")");
     delay(5000);
    }
