void ddr_f()
{
  volatile unsigned char *a;
  a=(volatile unsigned char*)0x30;
  *a=0xff;
}
void port_f()
{
  volatile unsigned char *b;
  b=(volatile unsigned char*)0x31;
  *b=0x00;
}