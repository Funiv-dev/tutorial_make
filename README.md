# Wow make

## Windows
```
# package update
pacman -Syu

# install Windows
pacman -S mingw-w64-x86_64-gtk4
pacman -S mingw-w64-x86_64-pkgconf
pacman -S mingw-w64-x86_64-cmake
pacman -S mingw-w64-x86_64-gdb

# open Msys2 console > .bashrc
echo 'export PKG_CONFIG_PATH=/mingw64/lib/pkgconfig:/mingw64/share/pkgconfig' >> ~/.bashrc
echo 'export PATH=$PATH:/mingw64/bin' >> ~/.bashrc
source ~/.bashrc

# Clion move to ADD 'File > Settings > Build, Execution, Deployment > Cmake > Environments'
PKG_CONFIG_PATH=C:/msys64/mingw64/lib/pkgconfig;C:/msys64/mingw64/share/pkgconfig
PATH=C:/msys64/mingw64/bin;%PATH%

C드라이브로 나타났지만 경로에 맞게 수정하고 환경변수에 해당 내용을 등록한다.

# Clion Add 'File > Settings > Build, Execution, Deployment > Cmake > CMake Options'
-G Ninja

# debug
cd /path/to/your/project/cmake-build-debug
gdb ./tutorial_make.exe

(gdb) run
(gdb) break main
(gdb) run
(gdb) step
```


## Mac OS
### gtk 3, 4 install
```shell
brew install gtk4
brew install gtk+3
```

### export setting

```shell
export PKG_CONFIG_PATH="/opt/homebrew/lib/pkgconfig:/opt/homebrew/share/pkgconfig"
```

#### gtk+3.0
```cmake
pkg_check_modules(GTK REQUIRED gtk+-3.0)
```


#### gtk 4

```cmake
pkg_check_modules(GTK REQUIRED gtk4)
```

### build

```shell
rm -rf build
mkdir build
cd build
cmake ..
make
```
