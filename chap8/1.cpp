int main (int argc, char *argv[]) {
  // 1 
  char *p; // 1
  int a[10]; // 2
  int (&b)[10] {a}; // 3
  char (*c)[20]; // 4
  char **q;
  const int j = 10;
  const int *i;
  int *const k = nullptr;


  
  return 0;
}
