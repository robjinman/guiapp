GUI App
=======

A minimal cross-platform C++ wxwidgets GUI application using vcpkg and cmake.

OSX
---

### Prerequisites

* XCode
* cmake
* vcpkg

### Build

From the project root, run

```
    cmake --preset=nix
    cmake --build build
```

Notes
-----

WxWidgets depends on xz, whose GitHub repo is no longer available due to the recently discovered [security vulnerability](https://en.wikipedia.org/wiki/XZ_Utils_backdoor). For this reason we need a port overlay for liblzma, hence the ports directory.
