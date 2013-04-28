Download blockparser:
---------------------

-Source code: https://github.com/znort987/blockparser

-folder name should be /blockparser (not /blockparser-master etc.
 or the patch will not work)

-Linux build instructions: (from https://bitcointalk.org/index.php?topic=88584)

        sudo apt-get install libssl-dev build-essential g++-4.4 libboost-all-dev libsparsehash-dev git-core perl
        git clone git://github.com/znort987/blockparser.git
        cd blockparser
        make


Patch to add Fairbrix support:
---------------------------------

cd blockparser                        # Optional sanity check
                                      #
grep -drecurse "LITECOIN"             # must list 6 occurrences       
                                      # 1x makefile, 1x cb/transactions.cpp, 2x parser.cpp, 1x util.h, 1x util.cpp
                                      #
                                      # Makefile:#        -DLITECOIN              \
                                      # cb/transactions.cpp:            #if defined(LITECOIN)
                                      # parser.cpp:        #if defined LITECOIN
                                      # parser.cpp:    #if defined(LITECOIN)
                                      # util.h:        #if defined(LITECOIN)
                                      # util.cpp:        #if defined(LITECOIN)
cd ..                                 #


patch -p0 -i blockparser_fbx.patch    # patch /blockparser directory
cd blockparser
make clean                            # always make clean before recompiling
make
./parser simpleStats                  #
./parser allBalances >allBalances.txt # see /blockparser/readme.md for list of commands
                                      # read sources in /blockparser/cb folder for advanced options

