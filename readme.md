# porcupine

## :boom: This is currently in development phase so use at your own risk. It compiles, but is not yet tested with the actual board :exclamation:

![porcupine](https://github.com/anarion80/porcupine/raw/main/images/porcupine_logo.png)

Porcupine is an autogenerated, ergonomic, split, 36-42 key, wired/wireless, columnar-staggered keyboard

* Keyboard Maintainer: [Anarion](https://github.com/anarion80)
* Hardware Supported: [Hardware project](https://github.com/anarion80/porcupine)
* Hardware Availability: [Hardware project](https://github.com/anarion80/porcupine)

Porcupine has three variants:
* regular 5x3 column-staggered ortholiner layout with 3 thumb keys (36 keys total)
* regular 5x3 column-staggered ortholiner layout with 4 thumb keys (38 keys total)
* regular 6x3 column-staggered ortholiner layout with 4 thumb keys (42 keys total)

The default is always the first one and each variant has a seprate folder and separate keymap.

Make example for this keyboard (after setting up your build environment):

    make porcupine:default

or

    make porcupine:6x3_4

 for a variant with 42 keys

Flashing example for this keyboard:

    make porcupine:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the MCU PCB
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
