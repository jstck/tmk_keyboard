TMK Keyboard Firmware Collection
================================
This repo is just a fork of the real deal at <http://github.com/tmk/tmk_keyboard>, where I've put my own keyboard projects. 

Things I've added:

* [js-numpad](keyboard/js-numpad/)          - Numeric keypad "side keyboard", from an Apple Extended Keyboard II (ISO layout)
* [js-main](keyboard/js-main/)             - "TKL" keyboard, made from an Apple Extended Keyboard II (ISO layout)

Both these are from the same chopped-up Apple Extended Keyboard II. While the main keyboard would fit nicely in a 17x6 matrix, in a misguided attempt to save a couple pins (with a more square and more dense matrix) I made the block of 3 columns to the right (F13-15, arrow keys and such) into its own row for a 14x7 matrix. It then turned out I didn't need them, as I went with a Teensy++ rather than a Teensy LC as first intended.
