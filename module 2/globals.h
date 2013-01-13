////////////////////
/// C++ Object-oriented Programming
/// Adventure Game 6
/// Reference answer 
/// anssi.grohn@pkamk.fi
////////////////////
#ifndef __globals_h__
#define __globals_h__

#include <stdexcept>
enum Direction { North, South, East, West, kNumDirs };

class FileNotFoundException: public std::runtime_error{
  public:
   FileNotFoundException():runtime_error("File not found"){}
   FileNotFoundException(std::string msg):runtime_error(msg.c_str()){}
};

#endif
