void modStartup()
{
  I2CSlaveStartup();
}

void modLoop()
{
  if (checkMillis())
  {
  }
  I2CSlaveLoop();
}


void modKeyDown(char val, byte type)
{
  I2CSlaveKeyDown(val, type);
}

void modKeyUp(char val, byte type)
{
  I2CSlaveKeyUp(val, type);
}

void modSerial(String input)
{
  if (input == "uniquekgetmods")
  {
    Serial.print("get mods(");
  }
  I2CSlaveSerial(input);
  if (input == "uniquekgetmods")
  {
    Serial.print("\r\n");
  }
}