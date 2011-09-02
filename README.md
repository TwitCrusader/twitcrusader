#TwitCrusader++
###TwitCrusader++ is Twitter Client For Linux Desktop

##Required

* g++ >= 4.6.1
* gtkmm-3.0 >= 3.0.1
* oauth >= 0.9.4
* libxml++-2.6 >= 2.34.1
* libnotify >= 0.7.3

## How to Install - Archlinux
    
### Dependencies:
    $ su
    # pacman -Syu
    # pacman -S gtkmm3 liboauth libxml++ libnotify


### Compile - Makefile
    $ ./autogen.sh
    $ ./configure
    $ make
    $ su
    # make install

#### Unistalling - Makefile
    $ su
    # make uninstall

###Support

Source: https://github.com/RoxShannon/

