#include <stdio.h>
#include <libintl.h>
#include <locale.h>

int
main(void)
{
  setlocale(LC_ALL, "");
  bindtextdomain("hello", "locale");
  textdomain("hello");
  puts(gettext("Hello"));
  return 0;
}
