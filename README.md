# Pokemon-SDL2
Tyvm [hebelsan](https://github.com/hebelsan) for making an effort creating this repo.

## Setup
- cpp eclipse oxygen
- SDL2 in mingw64
- git GUI
- Windows 7 x64 (duh)

### Laptop
| category               | item               |
|-----------------------:| -------------------|
|    System Manufacturer | Acer               |
|           System Model | Aspire 5750G       |
|                   BIOS | InsydeH2O Version V1.12 |
|              Processor | Intel(R) Core(TM) i5-2430M CPU @ 2.40GHz (4 CPUs), ~2.4GHz |
|                 Memory | 8192MB RAM         |


### Video Card
| category          | item                        |
|------------------:|-----------------------------|
|         Card name | Intel(R) HD Graphics Family |
|               and | NVIDIA GeForce GT 540M      |
|    Display Memory | 1760 MB                     |
|      D3D9 Overlay | Supported                   |
|           DXVA-HD | Supported                   |
|      DDraw Status | Enabled                     |
|        D3D Status | Enabled                     |
|        AGP Status | Enabled                     |
|   DirectX Version | DirectX 11                  |


## Steps until runnable
- install Eclipse and mingw64
- set environment variables PATH and MINGW_HOME to respective folders in mingw64
- download the development libraries for MinGW 32/64-bit [SDL2](https://www.libsdl.org/download-2.0.php), [SDL2\_mixer](https://www.libsdl.org/projects/SDL_mixer/), [SDL2\_image](https://www.libsdl.org/projects/SDL_image/), [SDL2\_ttf](https://www.libsdl.org/projects/SDL_ttf/)
- clone my or hebelsan's repository
- add the project in Eclipse
- follow these instructions from [cave programming](https://www.caveofprogramming.com/c-for-complete-beginners/setting-up-sdl-windows.html)
- following the steps, you should have added a few libraries. __Warning__ Some may still miss.
- *special* when finished compiling set the program to run on Nvidia GPU
- run the application (if it crashes: \*slow clap\*)
- if it crashes, copy the dll-files from mingw64 for the x86_64 architecture (check the path they reside in)
- if the exe crashes, copy the content folder in Pokemon into the Debug
- SUCCESS? Be happy, learn a new language.

