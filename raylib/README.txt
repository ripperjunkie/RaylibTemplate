---------------------------------------------------------------------------------------
Welcome to raylib 4.2
---------------------------------------------------------------------------------------

raylib is a simple and easy-to-use library to enjoy videogames programming.

raylib installer package for Windows provides all the required tools preconfigured to start coding games/graphics/tools with raylib in a few seconds.

Once installed, C:\raylib self-contained portable directory is created with all the required tools:

 - raylib 4.2 library with source code and examples
 - Notepad++ 8.4.4 (npp) preconfigured with some scripts to compile raylib sources and raylib examples for the selected package compiler
 - C Compiler, depending on the version of the installer it could be:
     - w64devkit 1.16.0 that contains multiple tools and MinGW-w64 with GCC 12.1.0 (32bit) - https://github.com/skeeto/w64devkit
     - Zig 0.10.0-dev with Clang 14.0.6 (64bit) - https://ziglang.org/download/
     - tcc 0.9.27 (32bit and 64bit) - https://repo.or.cz/tinycc.git

A "Notepad++ for raylib" shortcut should be created on desktop and once the program is open, 
it already opens raylib.h header for API reference and core_basic_window.c example. 

Pressing F6 should open NppExec script system to compile and run the example.

It's recommended to check other examples from raylib/raylib/examples directory and learn from them.


LICENSES

Note all the tools and libraries included in this package are licensed as free and open source. Some details on individual licenses:

 - w64devkit is licensed as UNLICENSE: https://github.com/skeeto/w64devkit/blob/master/UNLICENSE
 - Zig is licensed as MIT: https://github.com/ziglang/zig/blob/master/LICENSE
 - tcc is licensed as LGPL v2.1: https://repo.or.cz/tinycc.git/blob/da11cf651576f94486dbd043dbfcde469e497574:/COPYING and
   being RELICENSED as MIT: https://repo.or.cz/tinycc.git/blob/da11cf651576f94486dbd043dbfcde469e497574:/RELICENSING
 - Notepad++ is licensed as GNU GPL: https://github.com/notepad-plus-plus/notepad-plus-plus/blob/master/LICENSE
 - raylib is licensed as zlib: https://github.com/raysan5/raylib/blob/master/LICENSE