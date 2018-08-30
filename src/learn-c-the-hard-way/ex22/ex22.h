#ifndef _ex22_h
  #define _ex22_h

  // makes THE_SIZE avialable to other files
  extern int THE_SIZE;

  // gets and sets internal static variable
  int get_age();
  void set_age(int age);

  // updates a static variable that's inside update_ratio
  double update_ratio(double ratio);

  void print_size();
#endif
