

void setup()
{
    pinMode(13,OUTPUT);
    Serial.begin(9600);
}
void loop()     
{
    digitalWrite(13,1);
    Serial.println("on");
    delay(1000);
    digitalWrite(13,0);
    Serial.println("off");
    delay(1000);
}