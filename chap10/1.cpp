int main(int argc, char *argv[]) {
  int i = 0;
  while (i != max_length) {
    if (input_line[i] == '?') {
      quest_count++;
    }
    i++;
  }

  // pointer alternative
  for (char *p = input_line; *p != 0; ++p) {
    if (*p == '?') {
      quest_count++;
    }
  }
  return 0;
}
