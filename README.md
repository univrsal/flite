## flite

Flite modified to use CMake as the build system. Tools and other misc files have been removed so
there's only the basic library left.

Audio samples for the different voices are in `samples/`.

### Building

Builds the static library and a test program located in `example/`.
```bash
mkdir build && cd build
cmake ..
make
```