bool cal_error()
{
  read_sensor();

  // A0 left most sensor and A7 right most sensor
  //  A0   A1   A2  A3  A4  A5  A6  A7
  // -350 -250 -150 -50 50 150 250 350

  // local declaration of error, num and deno
  int num = 0;
  byte sum = 0;
  
  for (int n = 0; n < 8; n++)
  {
    num += d[n] * (100 * n - 350);
    sum += d[n];
  }
  
  if (sum != 0)     // Junction or line
  {
    if (sum>4){
      left_right(sum);
      return false;
    }
    else
    {
      error = num / float(sum);
      return true;
    }
  }
  else if (abs(last_error) > 200) // Deadend or deviation
  {
    error = last_error;
    return true;
  }
  else
  {
    left_right(sum);
    return false;
  }

}
