float q0, q1, q2, q3;

void setup()
{
	pinMode(clockPin, OUTPUT);
	pinMode(A0, INPUT);
	pinMode(A1, INPUT);
	pinMode(A2, INPUT);
	pinMode(A3, INPUT);
	Serial.begin(9600);
}


int map(float val)
{
	if (val > 400)
		return 1;
	else
		return 0;
}

void loop()
{
	digitalWrite(clockPin, HIGH);
	delay(500);
	digitalWrite(clockPin, LOW);
	delay(500);
	
	q0 = map(analogRead(A0));
	q1 = map(analogRead(A1));
	q2 = map(analogRead(A2));
	q3 = map(analogRead(A3));
	
	Serial.print(q0);
	Serial.print(q1);
	Serial.print(q2);
	Serial.print(q3);
	Serial.println();
}
