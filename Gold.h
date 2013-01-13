////////////////////
/// C++ Object-oriented Programming
/// Adventure Game 6
/// Reference answer 
/// anssi.grohn@pkamk.fi
////////////////////
#ifndef __Gold_h__
#define __Gold_h__
////////////////////////////////////////////////////////////////////////////////
class GoldFactory;
////////////////////////////////////////////////////////////////////////////////
class Gold 
{
  friend class GoldFactory;
private:
  // Overloaded addition operator for Gold
  Gold & operator+(const Gold & gold);
  unsigned int m_nAmount;
  Gold(unsigned int value);
public:
  virtual ~Gold();
  unsigned int GetAmount() const;
  void SetAmount( unsigned int value );
};

////////////////////////////////////////////////////////////////////////////////
#endif
