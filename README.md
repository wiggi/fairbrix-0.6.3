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
