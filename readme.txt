http://www.espruino.com/RAK8212

https://www.hackster.io/naresh-krish/getting-started-with-rak-itracker-module-and-arduino-ide-b78c0f

https://www.rakwireless.com/en/download/Cellular/RAK8212

mbed compile -t GCC_ARM -m NRF52_DK -c

JLinkExe -if swd -device nRF52832_xxAA -speed auto

loadfile ./BUILD/NRF52_DK/GCC_ARM/mbed-os-example-blinky-itracker.hex

reset

go

exit
