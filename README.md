# Wow make

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
