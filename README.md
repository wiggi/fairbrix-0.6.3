Fairbrix is an older, more primitive version of Litecoin.
 - scrypt as a proof of work scheme
 - 5 minute block targets
 - 25 coins per block (constant forever)
 - 2016 blocks (1 week) to retarget difficulty

This version (Fairbrix 0.6.3beta) is based on Litecoin 0.6.3c.

Litecoin - a lite version of Bitcoin optimized for CPU mining using scrypt as a proof of work scheme.
 - 2.5 minute block targets
 - subsidy halves in 840k blocks (~4 years)
 - ~84 million total coins
The rest is the same as bitcoin.
 - 50 coins per block
 - 2016 blocks to retarget difficulty

Bitcoin is a free open source peer-to-peer electronic cash system that is
completely decentralized, without the need for a central server or trusted
parties.  Users hold the crypto keys to their own money and transact directly
with each other, with the help of a P2P network to check for double-spending.


Build instructions 
===================

Debian
-------

First, make sure that the required packages for Qt4 development of your
distribution are installed, for Debian and Ubuntu these are:

    apt-get install qt4-qmake libqt4-dev build-essential libboost-dev libboost-system-dev \
        libboost-filesystem-dev libboost-program-options-dev libboost-thread-dev \
        libssl-dev libdb++-dev

then execute the following:

    qmake
    make

Alternatively, install Qt Creator and open the `bitcoin-qt.pro` file.

An executable named `bitcoin-qt` will be built.


Windows
--------

see https://bitcointalk.org/index.php?topic=149479.0
("Building headless Bitcoin and Bitcoin-qt on Windows")


Steps 3.1-3.3, 4.2 and 4.3 adapted for Fairbrix:


3.1 Extract Fairbrix (for example to C:\fairbrix\fairbrix-0.6.3) 
    (LevelDB is not used in 0.6.x versions)


3.2 Nothing to do.


3.3 From a Windows command prompt (as administrator) run:

    cd C:\fairbrix\fairbrix-0.6.3\src
    mingw32-make -f makefile.mingw "USE_UPNP:="
    strip fairbrixd.exe


4.2 Nothing to do.
    (adding dependency library locations in fairbrix-qt.pro already done,
    leveldb not used in 0.6.x versions)


4.3 From "Qt 4.8.4 command prompt" (as administrator) run:

    cd C:\fairbrix\fairbrix-0.6.3
    qmake "USE_UPNP=-" fairbrix-qt.pro
    mingw32-make -f Makefile.Release

An executable (in the \release folder) will be built.

Notes:

 - You will also need to distribute mingwm10.dll along with the executable(s).
 - Only use DLLs from the C:\Qt\4.8.4\bin and C:\MinGW\bin folder.
   (DLLs with same name from other folders crash the executable)
 - Keep Qt 4.8.4 installed. (optional but recommended)


Development process
===================

Developers work in their own trees, then submit pull requests when
they think their feature or bug fix is ready.

If it is a simple/trivial/non-controversial change, then one of the
bitcoin development team members simply pulls it.

If it is a more complicated or potentially controversial
change, then the patch submitter will be asked to start a
discussion (if they haven't already) on the mailing list:
http://sourceforge.net/mailarchive/forum.php?forum_name=bitcoin-development

The patch will be accepted if there is broad consensus that it is a
good thing.  Developers should expect to rework and resubmit patches
if they don't match the project's coding conventions (see coding.txt)
or are controversial.

The master branch is regularly built and tested, but is not guaranteed
to be completely stable. Tags are regularly created to indicate new
official, stable release versions of Litecoin.

Feature branches are created when there are major new features being
worked on by several people.

From time to time a pull request will become outdated. If this occurs, and
the pull is no longer automatically mergeable; a comment on the pull will
be used to issue a warning of closure. The pull will be closed 15 days
after the warning if action is not taken by the author. Pull requests closed
in this manner will have their corresponding issue labeled 'stagnant'.

Issues with no commits will be given a similar warning, and closed after
15 days from their last activity. Issues closed in this manner will be 
labeled 'stale'. 
