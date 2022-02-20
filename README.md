# winautoclicker

Simple **Auto-Clicker** CLI application for _Windows_, written in _C++_.

## Usage

To use this program, you just have to download the pre-compiled [exe file](https://github.com/dmotte/winautoclicker/releases/latest/download/clicker.exe) and run it on your PC.

The first CLI parameter is the **interval** (in milliseconds) between each click (default 1000).

```cmd
clicker.exe 3000
```

:warning: **Warning**: do not set the interval parameter to extremely low values, as it can **freeze your PC** and you may not be able to close the application anymore.

If you want to compile the application yourself, see [below](#Compiling).

## Compiling

> **Note**: this procedure has been tested on a fresh **Windows 10** installation.

To compile this program you must have **MinGW** installed on your system. I suggest installing it via the [_Chocolatey_ package manager](https://chocolatey.org/install):

```cmd
choco install -y mingw
```

Then compile the `main.cpp` file with the **G++** compiler:

```cmd
g++ main.cpp -static -o clicker.exe
```

The result of the compilation is the `clicker.exe` executable file.
