How I run the code on Linux:
- Setup an Ubuntu Server 24.04
- Install clang
- Install Ninja
- Install TBB for `execution::par_unseq`
- Run CMake workflows

```bash
sudo apt-get install build-essential
sudo apt-get install clang clang-format clang-tools
sudo apt-get install ninja-build
sudo apt-get install libtbb-dev

cd ../cpplab
cmake --workflow --preset linux-default-debug
../cpplab-build-linux-default-debug/modules/modules
```
