nt main (int argc, char *argv[])
{
  int ret;
  ret = print("%c %d %o %x %s\n", 'A', 10, 100, 1000, "Hello from printf!");
  printf("printf returns %d bytes\n", ret);
  return 0;
}
