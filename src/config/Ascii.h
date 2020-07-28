// Copyright (c) 2018, The TurtleCoin Developers
// Copyright (c) 2020, The SatoriCoin Developers
// Please see the included LICENSE file for more information

#pragma once

#include <string>

const std::string windowsAsciiArt = 

"\n   .dBBBBP dBBBBBb  dBBBBBBP dBBBBP dBBBBBb    dBP dBBBBb  dBBBBP dBP    dBBBBb\n"
"    BP           BB          dBP.BP      dBP               dBP.BP            dBP\n"
"    `BBBBb   dBP BB   dBP   dBP.BP   dBBBBK   dBP dBBBB   dBP.BP dBP    dBP dBP\n" 
"       dBP  dBP  BB  dBP   dBP.BP   dBP  BB  dBP dB' BB  dBP.BP dBP    dBP dBP\n"  
"  dBBBBP'  dBBBBBBB dBP   dBBBBP   dBP  dB' dBP dBBBBBB dBBBBP dBBBBP dBBBBBP\n";

const std::string nonWindowsAsciiArt =

"\n   .dBBBBP dBBBBBb  dBBBBBBP dBBBBP dBBBBBb    dBP dBBBBb  dBBBBP dBP    dBBBBb\n"
"    BP           BB          dBP.BP      dBP               dBP.BP            dBP\n"
"    `BBBBb   dBP BB   dBP   dBP.BP   dBBBBK   dBP dBBBB   dBP.BP dBP    dBP dBP\n" 
"       dBP  dBP  BB  dBP   dBP.BP   dBP  BB  dBP dB' BB  dBP.BP dBP    dBP dBP\n"  
"  dBBBBP'  dBBBBBBB dBP   dBBBBP   dBP  dB' dBP dBBBBBB dBBBBP dBBBBP dBBBBBP\n";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32

const std::string asciiArt = windowsAsciiArt;

#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
