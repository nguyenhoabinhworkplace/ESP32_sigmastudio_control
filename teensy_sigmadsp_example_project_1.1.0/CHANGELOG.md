# Changelog for SigmaDSP Microcontroller Code

## Version 1.1.0
- Changed PRINT_DSP_REGISTER function name to SIGMA_PRINT_REGISTER for consistency
- Changed SIGMA_READ_REGISTER function name to SIGMA_READ_REGISTER_BYTES for consistency
- SIGMA_PRINT_REGISTER calls SIGMA_READ_REGISTER_BYTES instead of double-implementing the comms
- SIGMASTUDIOTYPE_8_24_CONVERT is now an alias for SIGMASTUDIOTYPE_FIXPOINT_CONVERT
- SIGMASTUDIOTYPE_FIXPOINT_CONVERT switches to the proper implementation based on DSP type (8.24 or 5.23 number formats)
- SIGMASTUDIOTYPE_INTEGER_CONVERT is now a passthrough macro
- getMemoryDepth is now under a compiler switch to remove from memory unless I2C is enabled
- Added new function call for SIGMA_WRITE_REGISTER_BLOCK which omits the DSP address
- Added function SIGMASTUDIOTYPE_REGISTER_CONVERT
- Added function SIGMA_WRITE_REGISTER_FLOAT
- Added function SIGMA_READ_REGISTER_INTEGER
- Added function SIGMA_READ_REGISTER_FLOAT
- Added function SIGMA_READ_REGISTER_INTEGER


## Version 1.0.0
Initial release, targeted for Teensy 4.0. Published at
https://wiki.analog.com/resources/tools-software/sigmastudio/tutorials/microcontroller
on 2020/06/04