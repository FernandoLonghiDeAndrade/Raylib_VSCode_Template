1. Run the following command in the cmd inside the src folder of raylib (usually C:\raylib\raylib\src):
    mingw32-make PLATFORM=PLATFORM_DESKTOP RAYLIB_LIBTYPE=STATIC

    1.1. If an error occurred (not just warnings), it's probably because you don't have the right MinGW version. 
         Download the right one using the following link: https://winlibs.com/#download. After downloading and extracting,
         cut the mingw64 folder to your root folder (usually C:) and then add the path to the bin folder (usually C:\mingw64\bin)
         to your system's PATH (search for ambient variables). Now, restart your terminal (and VSCode) and try again

2. If the raylib src folder is not in C:/raylib/raylib/src, you'll need to change it in the tasks.json file

3. You can change the .exe name in the tasks.json file, but you'll need to change it in the launch.json file too

4. Click on "Run C/C++ File" on the top right corner of one of your C/C++ files and select the right Run Raylib task. After the first time, just press F5 to run