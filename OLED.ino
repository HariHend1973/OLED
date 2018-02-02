#include <Adafruit_GFX.h>
#include <SPI.h>
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 display(4);
String commandString;
String value1, value2;

void setup() {
  Serial.begin(9600);
  Serial.flush();
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  // initiate the display
  display.clearDisplay();
  display.display();
}

void loop() {
    while (Serial.available()) {      
      // read the bytes incoming from the client:
      char newChar = Serial.read();

     if (newChar == 0x0D)  //If a 0x0D is received, a Carriage Return, then evaluate the command
     {
         if (commandString == "off"){
           display.clearDisplay();
           display.display();
           //Serial.println(commandString);
           commandString = "";
           return;
         } else {   
           processCommand(commandString);
         }
     } 
     else
     {
           //Serial.println(newChar);
           commandString += newChar;
     }

    }
}

void processCommand(String command)
{
    if (command == "sinyal100")
    {
        // digitalWrite(led, LOW); // off
        //display.clearDisplay();
        display.fillRect(110, 0, 1, 1, WHITE);
        display.fillRect(111, 0, 1, 3, WHITE);
        display.fillRect(112, 0, 1, 8, WHITE); //center
        display.fillRect(113, 0, 1, 3, WHITE);
        display.fillRect(114, 0, 1, 1, WHITE);
        // erase old draw  using black rectangle
        display.fillRect(116, 1, 10, 8, BLACK);
        //draw signal
        display.fillRect(116, 8, 1, 1, WHITE);
        display.fillRect(118, 7, 1, 2, WHITE);
        display.fillRect(120, 5, 1, 4, WHITE);
        display.fillRect(122, 3, 1, 6, WHITE);
        display.fillRect(124, 1, 1, 8, WHITE);
        display.display();
        //Serial.println(command);
        commandString = "";
        return;
    }
    else if (command == "sinyal80")
    {
        // digitalWrite(led, LOW); // off
        //display.clearDisplay();
        display.fillRect(110, 1, 1, 1, WHITE);
        display.fillRect(111, 1, 1, 3, WHITE);
        display.fillRect(112, 1, 1, 8, WHITE); //center
        display.fillRect(113, 1, 1, 3, WHITE);
        display.fillRect(114, 1, 1, 1, WHITE);
        // erase old draw  using black rectangle
        display.fillRect(116, 1, 10, 8, BLACK);
        //draw signal
        display.fillRect(116, 8, 1, 1, WHITE);
        display.fillRect(118, 7, 1, 2, WHITE);
        display.fillRect(120, 5, 1, 4, WHITE);
        display.fillRect(122, 3, 1, 6, WHITE);
        //display.fillRect(124, 1, 1, 8, WHITE);
        display.display();
        //Serial.println(command);
        commandString = "";
        return;
    }
    else if (command == "sinyal60")
    {
        // digitalWrite(led, LOW); // off
        //display.clearDisplay();
        display.fillRect(110, 1, 1, 1, WHITE);
        display.fillRect(111, 1, 1, 3, WHITE);
        display.fillRect(112, 1, 1, 8, WHITE); //center
        display.fillRect(113, 1, 1, 3, WHITE);
        display.fillRect(114, 1, 1, 1, WHITE);
        // erase old draw  using black rectangle
        display.fillRect(116, 1, 10, 8, BLACK);
        //draw signal
        display.fillRect(116, 8, 1, 1, WHITE);
        display.fillRect(118, 7, 1, 2, WHITE);
        display.fillRect(120, 5, 1, 4, WHITE);
        //display.fillRect(122, 3, 1, 6, WHITE);
        //display.fillRect(124, 1, 1, 8, WHITE);
        display.display();
        //;Serial.println(command);
        commandString = "";
        return;
    }   
    else if (command == "sinyal40")
    {
        // digitalWrite(led, LOW); // off
        //display.clearDisplay();
        display.fillRect(110, 1, 1, 1, WHITE);
        display.fillRect(111, 1, 1, 3, WHITE);
        display.fillRect(112, 1, 1, 8, WHITE); //center
        display.fillRect(113, 1, 1, 3, WHITE);
        display.fillRect(114, 1, 1, 1, WHITE);
        // erase old draw  using black rectangle
        display.fillRect(116, 1, 10, 8, BLACK);
        //draw signal
        display.fillRect(116, 8, 1, 1, WHITE);
        display.fillRect(118, 7, 1, 2, WHITE);
        //display.fillRect(120, 5, 1, 4, WHITE);
        //display.fillRect(122, 3, 1, 6, WHITE);
        //display.fillRect(124, 1, 1, 8, WHITE);
        display.display();
        //Serial.println(command);
        commandString = "";
        return;
    }
    else if (command == "sinyal20")
    {
        // digitalWrite(led, LOW); // off
        //display.clearDisplay();
        display.fillRect(110, 1, 1, 1, WHITE);
        display.fillRect(111, 1, 1, 3, WHITE);
        display.fillRect(112, 1, 1, 8, WHITE); //center
        display.fillRect(113, 1, 1, 3, WHITE);
        display.fillRect(114, 1, 1, 1, WHITE);
        // erase old draw  using black rectangle
        display.fillRect(116, 1, 10, 8, BLACK);
        //draw signal
        display.fillRect(116, 8, 1, 1, WHITE);
        //display.fillRect(118, 7, 1, 2, WHITE);
        //display.fillRect(120, 5, 1, 4, WHITE);
        //display.fillRect(122, 3, 1, 6, WHITE);
        //display.fillRect(124, 1, 1, 8, WHITE);
        display.display();
        //Serial.println(command);
        commandString = "";
        return;
    } 
    else if (command == "sinyal0")
    {
        // digitalWrite(led, LOW); // off
        //display.clearDisplay();
        display.fillRect(110, 1, 1, 1, WHITE);
        display.fillRect(111, 1, 1, 3, WHITE);
        display.fillRect(112, 1, 1, 8, WHITE); //center
        display.fillRect(113, 1, 1, 3, WHITE);
        display.fillRect(114, 1, 1, 1, WHITE);
        // erase old draw  using black rectangle
        display.fillRect(116, 1, 10, 8, BLACK);
        //draw signal
        //display.fillRect(116, 9, 1, 1, WHITE);
        //display.fillRect(118, 8, 1, 2, WHITE);
        //display.fillRect(120, 6, 1, 4, WHITE);
        //display.fillRect(122, 4, 1, 6, WHITE);
        //display.fillRect(124, 2, 1, 8, WHITE);
        display.display();
        //Serial.println(command);
        commandString = "";
        return;
    }
    else if (command == "bat100")
    {
        // digitalWrite(led, LOW); // off
        //display.clearDisplay();
        // erase old bat
        display.fillRect(3, 2, 13, 7, BLACK);
        // draw bat
        display.fillRect(2, 1, 2, 8, WHITE);
        display.fillRect(4, 1, 2, 8, WHITE);
        display.fillRect(6, 1, 2, 8, WHITE);
        display.fillRect(8, 1, 2, 8, WHITE);
        display.fillRect(10, 1, 2, 8, WHITE);
        display.fillRect(12, 2, 2, 5, WHITE);
        //display.fillRect(3, 2, 8, 6, BLACK);
        display.display();
        //Serial.println(command);
        commandString = "";
        return;
    }
    else if (command == "bat80")
    {
        // digitalWrite(led, LOW); // off
        //display.clearDisplay();
        // erase old bat
        display.fillRect(2, 1, 12, 8, BLACK);
        // draw bat
        display.fillRect(2, 1, 2, 8, WHITE);
        display.fillRect(4, 1, 2, 8, WHITE);
        display.fillRect(6, 1, 2, 8, WHITE);
        display.fillRect(8, 1, 2, 8, WHITE);
        display.fillRect(10, 1, 2, 8, WHITE);
        display.fillRect(12, 2, 2, 5, WHITE);
        //draw bat 80
        display.fillRect(10, 2, 1, 6, BLACK);
        display.display();
        //Serial.println(command);
        commandString = "";
        return;
    }
    else if (command == "bat60")
    {
        // digitalWrite(led, LOW); // off
        //display.clearDisplay();
        // erase old bat
        display.fillRect(2, 1, 12, 8, BLACK);
        // draw bat
        display.fillRect(2, 1, 2, 8, WHITE);
        display.fillRect(4, 1, 2, 8, WHITE);
        display.fillRect(6, 1, 2, 8, WHITE);
        display.fillRect(8, 1, 2, 8, WHITE);
        display.fillRect(10, 1, 2, 8, WHITE);
        display.fillRect(12, 2, 2, 5, WHITE);
        //draw bat 60
        display.fillRect(8, 2, 3, 6, BLACK);
        display.display();
        //Serial.println(command);
        commandString = "";
        return;
    }
    else if (command == "bat40")
    {
        // digitalWrite(led, LOW); // off
        //display.clearDisplay();
        // erase old bat
        display.fillRect(2, 1, 12, 8, BLACK);
        // draw bat
        display.fillRect(2, 1, 2, 8, WHITE);
        display.fillRect(4, 1, 2, 8, WHITE);
        display.fillRect(6, 1, 2, 8, WHITE);
        display.fillRect(8, 1, 2, 8, WHITE);
        display.fillRect(10, 1, 2, 8, WHITE);
        display.fillRect(12, 2, 2, 5, WHITE);
        //draw bat 40
        display.fillRect(6, 2, 5, 6, BLACK);
        display.display();
        //Serial.println(command);
        commandString = "";
        return;
    }
    else if (command == "bat20")
    {
        // digitalWrite(led, LOW); // off
        //display.clearDisplay();
        // erase old bat
        display.fillRect(2, 1, 12, 8, BLACK);
        // draw bat
        display.fillRect(2, 1, 2, 8, WHITE);
        display.fillRect(4, 1, 2, 8, WHITE);
        display.fillRect(6, 1, 2, 8, WHITE);
        display.fillRect(8, 1, 2, 8, WHITE);
        display.fillRect(10, 1, 2, 8, WHITE);
        display.fillRect(12, 2, 2, 5, WHITE);
        //draw bat 20
        display.fillRect(4, 2, 7, 6, BLACK);
        display.display();
        //Serial.println(command);
        commandString = "";
        return;
    }
    else if (command == "bat0")
    {
        // digitalWrite(led, LOW); // off
        //display.clearDisplay();
        // erase old bat
        display.fillRect(2, 1, 12, 8, BLACK);
        // draw bat
        display.fillRect(2, 1, 2, 8, WHITE);
        display.fillRect(4, 1, 2, 8, WHITE);
        display.fillRect(6, 1, 2, 8, WHITE);
        display.fillRect(8, 1, 2, 8, WHITE);
        display.fillRect(10, 1, 2, 8, WHITE);
        display.fillRect(12, 2, 2, 5, WHITE);
        //draw bat 0
        display.fillRect(3, 2, 8, 6, BLACK);
        display.display();
        //Serial.println(command);
        commandString = "";
        return;
    }
    else if (command == "box")
    {
        // digitalWrite(led, LOW); // off
        //display.clearDisplay();
        display.drawRect(2, 11, 125, 52, WHITE);
        display.display();
        //Serial.println(command);
        commandString = "";
        return;
    }
    //else if (command == "tm")
    //{
    //    display.setTextSize(1); 
    //    display.setTextColor(WHITE);
    //    display.setCursor(10,51);
    //    display.println("www.kutukupret.com");
    //    display.display();
    //    Serial.println(command);
    //    Serial.flush();
    //    commandString = "";
    //    return;
    //}
    else if(command.indexOf(" ") > -1)
    {
          for (int i = 0; i < command.length(); i++) {
            if (command.substring(i, i+1) == " ") {
              value1 = command.substring(0, i);
              value2= command.substring(i+1);
              break;
            }
          }
          if (value1 == "waktu")
          {
              // erase old value2 first using filled rectangle
              display.fillRect(4, 25, 120, 21, BLACK);
              // write new value2
              display.setTextColor(WHITE);
              display.setTextSize(3);
              display.setCursor(19,25);
              display.print(value2);
              display.display();
              //Serial.println(command);
              commandString = "";
              value1 = "";
              value2 = "";
              return;
          }
           else if (value1 == "temper")
           {
              // erase old value2 first using filled rectangle
              display.fillRect(4, 25, 120, 21, BLACK);
              // write new value2
              display.setTextColor(WHITE);
              display.setTextSize(3);
              display.setCursor(30,25);
              display.print(value2 + "" + (char)247 + "C");
              display.display();
              //Serial.println(command);
              commandString = "";
              value1 = "";
              value2 = "";
              return;
          }
          else if (value1 == "operator")
          {
              // erase old value2 first using filled rectangle
              display.fillRect(19, 1, 90, 8, BLACK);
              // write new value2
              display.setTextSize(1);
              display.setTextColor(WHITE);
              display.setCursor(20,1);
              display.print(value2);
              display.display();
              //Serial.println(command);
              value1 = "";
              value2 = "";
              commandString = "";
              return;
          }
          else if (value1 == "mpc")
          {
              // erase old value2 first
              //display.setTextSize(1);
              //display.setTextColor(BLACK);
              //display.setCursor(10,51);
              //display.println(oldmpc);
              // erase old value2 first using filled rectangle
              display.fillRect(5, 51, 119, 10, BLACK);              
              // write new value2
              display.setTextSize(1);
              display.setTextColor(WHITE);
              display.setCursor(5,51);
              display.print(value2);
              display.display();
              //Serial.println(command);
              value1 = "";
              value2 = "";              
              commandString = "";
              return;
          }    
          else
          {
              //Serial.println(command);
              value1 = "";
              value2 = "";              
              commandString = "";
              return;                
          }
    }
    else
    {
        //Serial.println(command);
        commandString = "";
        return;      
    }
}


