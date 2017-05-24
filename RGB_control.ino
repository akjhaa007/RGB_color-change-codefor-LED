/*
Arduino Turn LED On/Off using Serial Commands
Created April 22, 2015
Hammad Tariq, Incubator (Pakistan)

It's a simple sketch which waits for a character on serial
and in case of a desirable character, it turns an LED on/off.

Possible string values:
a (to turn the LED on)
b (tor turn the LED off)
*/

char junk;
String inputString="";

void setup()                    // run once, when the sketch starts
{
 Serial.begin(9600);     // set the baud rate to 9600, same should be of your Serial Monitor
   pinMode(5, OUTPUT); //LEFT_Motor
   pinMode(6, OUTPUT);//LEFT_Motor
   pinMode(7, OUTPUT);//RIGHT_Motor
   pinMode(8, OUTPUT); //LEFT_Motor
   pinMode(9, OUTPUT);//LEFT_Motor
   pinMode(10, OUTPUT);//RIGHT_Motor
   pinMode(11, OUTPUT);//RIGHT_Motor
   pinMode(12, OUTPUT); //LEFT_Motor
   pinMode(13, OUTPUT);//LEFT_Motor
   
}

void loop()
{
  if(Serial.available())
  {
    while(Serial.available()){
    
      char inChar = (char)Serial.read(); //read the input
      inputString += inChar;        //make a string of the characters coming on serial
    }

    
    Serial.println(inputString);
    while (Serial.available() > 0)  
   {
      
      junk = Serial.read() ; 
    }      // clear the serial buffer
      
      if(inputString == "1"){         //in case of 'a' turn the LED on
      digitalWrite(5,  LOW); 
      digitalWrite(6, HIGH); 
      digitalWrite(7, LOW);
      //=============================
      digitalWrite(8,  LOW); 
      digitalWrite(9, HIGH); 
      digitalWrite(10, LOW);
      //=============================
      digitalWrite(11,  LOW); 
      digitalWrite(12, HIGH); 
      digitalWrite(13, LOW); 
      delay(1000);

       digitalWrite(5,  HIGH); 
      digitalWrite(6, HIGH); 
      digitalWrite(7, HIGH);
      //=============================
      digitalWrite(8,  HIGH); 
      digitalWrite(9, HIGH); 
      digitalWrite(10, HIGH);
      //=============================
      digitalWrite(11, HIGH); 
      digitalWrite(12, HIGH); 
      digitalWrite(13, HIGH); 
      delay(1000);
       digitalWrite(5,  LOW); 
      digitalWrite(6, HIGH); 
      digitalWrite(7, LOW);
      //=============================
      digitalWrite(8,  LOW); 
      digitalWrite(9, HIGH); 
      digitalWrite(10, LOW);
      //=============================
      digitalWrite(11,  LOW); 
      digitalWrite(12, HIGH); 
      digitalWrite(13, LOW); 
      delay(1000);
      //digitalWrite(12, LOW); 
       
    }
      if(inputString == "B"){         //in case of 'a' turn the LED on
       digitalWrite(5, HIGH); 
      digitalWrite(6,  HIGH); 
      digitalWrite(7,  HIGH);
      //=============================
      digitalWrite(8,  HIGH); 
      digitalWrite(9,  HIGH); 
      digitalWrite(10, HIGH);
      //=============================
      digitalWrite(11, HIGH); 
      digitalWrite(12, HIGH); 
      digitalWrite(13, HIGH); 
      //digitalWrite(12, HIGH);  

       
    }

      if(inputString == "Z"){         //in case of 'a' turn the LED on
       digitalWrite(8, LOW); 
       digitalWrite(9,  LOW); 
       digitalWrite(10,  LOW);
       delay(500);
       digitalWrite(8, HIGH); 
      digitalWrite(9,  HIGH); 
      digitalWrite(10,  HIGH);
      delay(500);
      digitalWrite(8, HIGH); 
      digitalWrite(9,  LOW); 
      digitalWrite(10,  LOW);
      delay(500);
      digitalWrite(8, LOW); 
      digitalWrite(9,  HIGH); 
      digitalWrite(10,  LOW);
      delay(500);
        digitalWrite(5, LOW); 
      digitalWrite(6,  LOW); 
      digitalWrite(7,  LOW);

      
      }

      
      if(inputString == "G"){         //in case of 'a' turn the LED on
       digitalWrite(5,LOW); 
      digitalWrite(6, LOW); 
      digitalWrite(7, LOW);
      //=============================
      digitalWrite(8,  LOW); 
      digitalWrite(9, LOW); 
      digitalWrite(10, LOW);
      //=============================
      digitalWrite(11,  LOW); 
      digitalWrite(12, LOW); 
      digitalWrite(13, LOW); 
       
    }
    
      if(inputString == "R"){         //in case of 'a' turn the LED on
      digitalWrite(5,  LOW); 
      digitalWrite(6, HIGH); 
      digitalWrite(7, HIGH);
      //=============================
      digitalWrite(8,  LOW); 
      digitalWrite(9, HIGH); 
      digitalWrite(10, HIGH);
      //=============================
      digitalWrite(11,  LOW); 
      digitalWrite(12, HIGH); 
      digitalWrite(13, HIGH); 
    }
    
    else if(inputString == "W"){   //incase of 'b' turn the LED off
      digitalWrite(5,  HIGH); 
      digitalWrite(6, LOW); 
      digitalWrite(7, HIGH);
      //=============================
      digitalWrite(8,  HIGH); 
      digitalWrite(9, LOW); 
      digitalWrite(10, HIGH);
      //=============================
      digitalWrite(11,  HIGH); 
      digitalWrite(12, LOW); 
      digitalWrite(13, HIGH); 
      //digitalWrite(12, HIGH);  
    }
    inputString = "";
  }
}
