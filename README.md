GUI App
=======

A minimal cross-platform C++ wxwidgets GUI application using vcpkg and cmake.

Linux
-----

### Prerequisites

* cmake
* vcpkg

### build

From the project root, run

```
    cmake --preset=nix
    cmake --build build
```

If the build output complains of missing dependencies (e.g. bison) install them via the system package manager and try again.

OSX
---

### Prerequisites

* XCode
* cmake
* vcpkg
* homebrew (for any missing dependencies)

You might need to install pkg-config

```
    brew install pkg-config
```

### Build

From the project root, run

```
    cmake --preset=win
    cmake --build build
```

Windows
-------

### Prerequisites

* Visual Studio 2022
* cmake
* vcpkg

### Build

From the project root, run

```
    cmake --preset=win
    cmake --build build
```

Notes
-----

WxWidgets depends on xz, whose GitHub repo is no longer available due to the recently discovered [security vulnerability](https://en.wikipedia.org/wiki/XZ_Utils_backdoor). For this reason we need a port overlay for liblzma, hence the ports directory.

