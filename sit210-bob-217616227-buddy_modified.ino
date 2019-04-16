int led1 = D6;
int led2 = D5

void wave(const char *event, const char *data)
{
    digitalWrite(led1, HIGH);
    delay(700);
    digitalWrite(led1, LOW);
    delay(700);
    digitalWrite(led1, HIGH);
    delay(700);
    digitalWrite(led1, LOW);
    delay(700);
    digitalWrite(led1, HIGH);
    delay(700);
    digitalWrite(led1, LOW);
    delay(700);
}

void pat(const char *event, const char *data)
{
    digitalWrite(led2, HIGH);
    delay(1000);
    digitalWrite(led2, LOW);
    delay(1000);
    digitalWrite(led2, HIGH);
    delay(1000);
    digitalWrite(led2, LOW);
    delay(1000);
}

void setup()
{
    pinMode(led1, OUTPUT);
    Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", wave, ALL_DEVICES);
    Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", pat, ALL_DEVICES);
}
void loop()
{
    
}


// We're going to have a super cool function now that gets called when a matching API request is sent
// This is the ledToggle function we registered to the "led" Particle.function earlier.
