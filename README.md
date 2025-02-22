# Fruit Ninja Viewer

This is a simple Qt-based C++ application that displays the [Fruit Ninja game](https://y8tireu.github.io/Fruit-Ninja/) using Qt WebEngine.

## Prerequisites

- **Qt 6 or Qt 5** (including the **WebEngine** module).
- A **C++ compiler** (e.g. gcc, clang, or MSVC).
- **CMake** (version 3.5+).

### Installing Qt and WebEngine

#### A. Linux (Debian/Ubuntu)
```bash
sudo apt update
sudo apt install qt6-base-dev qt6-webengine-dev
```
*(Package names may differ on other distributions.)*

#### B. Using the Qt Online Installer
1. Download the Qt Online Installer from [Qt.io](https://www.qt.io/download).
2. Run the installer and select:
   - Qt **6.x** (or 5.x, if needed)
   - **Qt WebEngine** module
3. Note the install path (e.g., `~/Qt/6.5.0/gcc_64`).

## Building

1. **Clone or copy** this repository onto your system.
2. **Open a terminal** in the project’s root directory (where the `CMakeLists.txt` file is located).

3. **Create a `build` folder** (for an out-of-source build):
   ```bash
   mkdir build
   cd build
   ```

4. **Configure** with CMake:
   ```bash
   cmake ..
   ```
   - If Qt is not found automatically, specify the path:
     ```bash
     cmake -DCMAKE_PREFIX_PATH="/path/to/Qt/6.5.0/gcc_64" ..
     ```
     (Adjust the path as needed.)

5. **Compile**:
   ```bash
   cmake --build .
   ```

## Running

- On **Linux/macOS**:
  ```bash
  ./FruitNinjaViewer
  ```
- On **Windows**:
  ```powershell
  .\FruitNinjaViewer.exe
  ```

You should see a window load with the Fruit Ninja game from [y8tireu.github.io/Fruit-Ninja/](https://y8tireu.github.io/Fruit-Ninja/).

## Project Structure

```
.
├── CMakeLists.txt       # CMake configuration
├── main.cpp             # Main source file loading the URL
├── README.md            # This documentation
└── build/               # Build artifacts (created after running cmake)
```

## Troubleshooting

- **Qt Not Found**: If you see an error about `Qt6Config.cmake` or `Qt5Config.cmake` not being found, ensure you have the correct Qt dev packages installed and/or set the `CMAKE_PREFIX_PATH` environment variable to your Qt installation path.
- **WebEngine Errors**: Double-check you installed the “Qt WebEngine” module (sometimes a separate package like `qt6-webengine-dev` on Linux or an optional component in the Qt Online Installer).
