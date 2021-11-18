#include "config.h"
#include "sev_seg.h"
#include "sev_seg.c"
#include "macros.h"
#include "hardware.h"

int main()
{
  sev_seg_inti();

  char x_var = 0;
  char i;
  char aa = 0;
  char bb = 0;
  char cc = 0;
  char dd = 0;
  char ee = 0;
  char ff = 0;
  char gg = 0;

  while (1)
  {
    for (i = 0; i < 10; i++)
    {
      x_var = 0;

      aa = a(i);
      bb = b(i);
      cc = c(i);
      dd = d(i);
      ee = e(i);
      ff = f(i);
      gg = g(i);

      assignbit(x_var, abit, aa);
      assignbit(x_var, bbit, bb);
      assignbit(x_var, cbit, cc);
      assignbit(x_var, dbit, dd);
      assignbit(x_var, ebit, ee);
      assignbit(x_var, fbit, ff);
      assignbit(x_var, gbit, gg);
      sev_seg_flush(x_var);
      _delay_ms(500);
    }
  }
  return 0;
}
