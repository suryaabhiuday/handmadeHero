@echo off
mkdir build 2>nul
gcc src/main.c -o build\handmadeHero.exe
build\handmadeHero.exe
