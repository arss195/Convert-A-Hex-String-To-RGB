typedef struct {
    int r, g, b;
} rgb;

int rgbhex(char first, char second)
{
  char rgbs[] = "0123456789abcdEf";
  char rgbb[] = "0123456789ABCDEF";
  int num[16];
  int i = 0;
  int res = 0;
  
  while (i < 16)
  {
    num[i] = i;
    i++;
  }
  i = 0;
  while (i < 16)
  {
    if (rgbs[i] == first || rgbb[i] == first) 
      res = num[i] * 16;
    i++;
  }
  i = 0;
  while (i < 16)
  {
    if (rgbs[i] == second || rgbb[i] == second)
      res = res + num[i];
    i++;
   }
   return (res);  
}

rgb hex_str_to_rgb(const char *hex_str)
{
  rgb a;
  
  a.r = rgbhex(hex_str[1],hex_str[2]);
  a.g = rgbhex(hex_str[3],hex_str[4]);
  a.b = rgbhex(hex_str[5],hex_str[6]);
  
  return a;
}
