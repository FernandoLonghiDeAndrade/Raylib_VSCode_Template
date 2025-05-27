# 📚 How to Build and Run a **raylib** Project

## 🛠️ Building raylib

1. Run the following command in the terminal (`cmd`) inside the `src` folder of raylib
   *(usually located at **`C:\raylib\raylib\src`**)*:

   ```bash
   mingw32-make PLATFORM=PLATFORM_DESKTOP RAYLIB_LIBTYPE=STATIC
   ```

   1.1. ⚠️ If you get an error (not just warnings), it’s probably because you don’t have the correct version of MinGW.

   * Download the correct one from [this link](https://winlibs.com/#download).
   * After downloading and extracting:

     * Move the `mingw64` folder to your root directory (usually `C:\`).
     * Add `C:\mingw64\bin` to your system’s **PATH** environment variable.
     * Restart your terminal (and VSCode) and try running the command again.

---

## 🔧 Project Configuration

2. If the raylib `src` folder is **not located at** `C:/raylib/raylib/src`, adjust the path in the `tasks.json` file.

3. To change the executable (`.exe`) name, update it in `tasks.json` and also in `launch.json`.

---

## 🚀 Running in VSCode

4. In the **Run and Debug** menu (left sidebar), select the appropriate task:

   * **Run Raylib (C)** – for C projects
   * **Run Raylib (C++)** – for C++ projects
     
5. Then press **F5** to build and run.
