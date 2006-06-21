
#ifndef __gdcmPhotometricInterpretation_h
#define __gdcmPhotometricInterpretation_h

#include "gdcmTypes.h"
#include <iostream>

namespace gdcm
{
/**
 * \brief Class to represent an PhotometricInterpretation
 */

class GDCM_EXPORT PhotometricInterpretation
{
public:
  typedef enum {
    UNKNOW = 0,
    MONOCHROME1,
    MONOCHROME2,
    PALETTE_COLOR,
    RGB,
    HSV,
    ARGB,
    CMYK,
    YBR_FULL,
    YBR_FULL_422,
    YBR_PARTIAL_422,
    YBR_PARTIAL_420,
    YBR_ICT,
    YBR_RCT,
    PI_END  // Helpfull for internal implementation
  } PIType; // PhotometricInterpretationType

  PhotometricInterpretation(PIType pi = UNKNOW):PIField(pi) {}
  
  static const char *GetPIString(PIType pi);
  // You need to make sure end of string is \0
  static PIType GetPIType(const char *pi);

  static bool IsRetired(PIType pi);

  // TODO
  // not all PhotometricInterpretation are allowed for compressed Transfer 
  // syntax
  // static bool IsAllowwedForCompressedTS(PIType pi);

  friend std::ostream& operator<<(std::ostream& os, const PhotometricInterpretation& pi);

  operator PIType () const { return PIField; }

private:
  PIType PIField;
};
//-----------------------------------------------------------------------------
inline std::ostream& operator<<(std::ostream& os, const PhotometricInterpretation &val)
{
  os << PhotometricInterpretation::GetPIString(val.PIField);
  return os;
}


} // end namespace gdcm

#endif //__gdcmPhotometricInterpretation_h
