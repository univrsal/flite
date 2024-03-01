/* Generated automatically from make_voice_list */

#include "flite.h"


cst_val *flite_set_voice_list(const char *voxdir)
{
   flite_voice_list = val_reverse(flite_voice_list);
   return flite_voice_list;
}

