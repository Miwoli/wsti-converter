# Meter converter

## Purpose
Program created as a learning case for university.

## Instalation
Make sure you have **make** and **g++**, or any other c++ language compiler. In _Makefile_ set compiler variable to your compiler, than run `make` command. On Windows remove files in _o_files_ folder before each compilation.

## Usage
Type your meters to convert, press enter, and watch.

## Extend
In _src/ratio.h_ add your unit to list., Than in _src/ratio.cpp_ copy `results.emplace[...]` line. Change params to match that one you added in _.h_ file. Done, the program will now include your unit next time you recompile it.