@echo off
mkdir build 2>nul
pushd build
cl -Zi ../src/main.c user32.lib gdi32.lib
popd
build\main.exe
