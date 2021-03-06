#ifndef ROTATION_PRESETS_H_
#define ROTATION_PRESETS_H_
/**
 * \file rotationPresets.h
 * \attention This file is automatically generated and should not be in general modified manually
 *
 * \date MMM DD, 20YY
 * \author autoGenerator
 * Generated from base.xml
 */

/**
 * Helper namespace to hide RotationPresets enum from global context.
 */

namespace RotationPresets {

/** 
 * \brief Rotation Presets 
 * Rotation Presets 
 */
enum RotationPresets {
    /** 
     * \brief No rotation 
     * Do not rotate 
     */
    NO_ROTATION = 0,
    /** 
     * \brief Clockwise 90deg 
     * !transform_rotate_90.png!Rotate 90 deg clockwise 
     */
    CLOCKWISE_90DEG = 1,
    /** 
     * \brief Clockwise 180deg 
     * !transform_rotate_180.png!Rotate 180 deg clockwise 
     */
    CLOCKWISE_180DEG = 2,
    /** 
     * \brief Clockwise 270deg 
     * !transform_rotate_270.png!Rotate 270 deg clockwise 
     */
    CLOCKWISE_270DEG = 3,
    /** 
     * \brief Last virtual option to run cycles to
     */
    ROTATION_PRESETS_LAST
};


static inline const char *getName(const RotationPresets &value)
{
    switch (value) 
    {
     case NO_ROTATION : return "NO_ROTATION"; break ;
     case CLOCKWISE_90DEG : return "CLOCKWISE_90DEG"; break ;
     case CLOCKWISE_180DEG : return "CLOCKWISE_180DEG"; break ;
     case CLOCKWISE_270DEG : return "CLOCKWISE_270DEG"; break ;
     default : return "Not in range"; break ;
     
    }
    return "Not in range";
}

} //namespace RotationPresets

#endif  //ROTATION_PRESETS_H_
