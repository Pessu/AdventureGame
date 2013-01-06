////////////////////
/// C++ Object-oriented Programming
/// Adventure Game 6
/// Reference answer 
/// anssi.grohn@pkamk.fi
////////////////////
#include "Game.h"
#include <ostream>
////////////////////////////////////////////////////////////////////////////////
int main()
{
  Game g;
  try
  {
	  g.Play();
  }
  catch (...)
  {
	  cerr << "Program terminated, error occured!" << endl;
	  return 1;
  }
  // TODO: Save progress here before terminating!
  return 0;
}
////////////////////////////////////////////////////////////////////////////////
