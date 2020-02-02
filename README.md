# [Amban sniper rifle](https://starwars.fandom.com/wiki/Amban_sniper_rifle) electronics
![Image](AmbanRifle.png)

Electronics for an Amban sniper rifle from the Mandalorian. This adds lighting and sound effects leveraging the blaster config from the Proffie sound board.

## What I used for this setup:

1) [Proffie 1.5 sound board](https://fredrik.hubbe.net/lightsaber/v4/) (also will work with the [Proffie 2.2 board](https://fredrik.hubbe.net/lightsaber/v5/)) - available [here](https://www.korbanth.com/collections/saber-parts/products/proffie-soundboard-v2-2-with-sd-card) or [here](https://thesaberarmory.com/product/proffieboard-v2-2-open-source-sound-board-16gb-micro-sd/)
2) [Side NeoPixel strip](https://www.adafruit.com/product/3729) for the forks - just one strip cut in half. You can get them from the [manufacturer](http://www.ipixelleds.com/index.php?id=151) in China for about 1/3 the price if you are ordering in bulk
3) Single [NeoPixel](https://www.adafruit.com/product/1260) for the center of the fork, or use [this](https://www.adafruit.com/product/1612) or even a [bare pixel](https://www.adafruit.com/product/1655)
3) [28mm 4W speaker](https://tcsdcc.com/1694) - common speaker used in saber installs
4) [18650 Battery](https://www.thecustomsabershop.com/TrustFire-Protected-37V-2400mAh-18650-Li-Ion-Battery-2-pack-P517.aspx)
5) [Battery holder](https://www.thecustomsabershop.com/18650-Single-Cell-Holder-P886.aspx) - you could also put it into the cartridge slot where the round would go
6) [Power jack](https://www.thecustomsabershop.com/Switchcraft-21mm-Power-Jack-P822.aspx) (recharge port) - or just use any power switch
7) A [Kill Key](https://www.thingiverse.com/thing:3188361) if you are using the recharge port. Inserting this turns off the power.
7) 2 momentary switches. I used [this](https://www.amazon.com/gp/product/B073TYWX86/ref=ppx_yo_dt_b_asin_title_o05_s01?ie=UTF8&psc=1) and [this](https://www.amazon.com/gp/product/B06XT3FLVM/ref=ppx_yo_dt_b_asin_title_o05_s01?ie=UTF8&psc=1) in my setup.
8) [22 gauge](https://www.amazon.com/Remington-Industries-22PTFESTRBLA25-Stranded-Diameter/dp/B0713TNFL5/ref=sr_1_31?keywords=22+gauge+ptfe+wire&qid=1580603237&sr=8-31) to [26 gauge](https://www.amazon.com/Remington-Industries-26PTFESTRRED25-Stranded-Diameter/dp/B0727S6395/ref=sr_1_82?keywords=26+gauge+ptfe+wire&qid=1580603341&sr=8-82) PTFE wire, but just about any wire will do. PTFE insulation is small, and does not melt like PVC

## Proffie setup

The Proffie is an Arduino based board. You'll need to get your PC setup with the right tools. Instructions are [here](https://github.com/profezzorn/arduino-proffieboard/blob/master/README.md), and you can find information on the main [Proffie discussion board](http://therebelarmory.com/board/97/profezzorns-lab).

1) [Proffie OS 3.9](https://fredrik.hubbe.net/lightsaber/proffieos.html) or later
2) SD card with all of the sound files
