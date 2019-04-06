
int led1 = D7; 
int led2 = D4; 
int led3 = D0;


void setup() 
{

    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
  
    Particle.function("led",ledToggle);

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);

}

void loop() 
{
 
}
int ledToggle(String command)
{
    if (command=="on")
    {
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        
        return 1;
          
    }
    else if (command== "off")
    {
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        
        return 0;
    }
    if (command=="blue")
    {
        digitalWrite(led1, HIGH);
        //digitalWrite(led2, HIGH);
        //digitalWrite(led3, HIGH);
        
        return 1;
          
    }
    else if (command== "off blue")
    {
        digitalWrite(led1, LOW);
        //digitalWrite(led2, LOW);
        //digitalWrite(led3, LOW);
        
        return 0;
    }
    else if (command== "red")
    {
        //digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        //digitalWrite(led3, HIGH);
        
        return 1;
    }
    else if (command== "off red")
    {
        //digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        //digitalWrite(led3, LOW);
        
        return 0;
    }
    else if (command== "green")
    {
        //digitalWrite(led1, HIGH);
        //digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        
        return 1;
    }
    else if (command== "off green")
    {
        //digitalWrite(led1, LOW);
        //digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        
        return 0;
    }
    else
    {
        return -1;
    }
}





