# Spatial transformer code for 1D, 2D, and 3D

How to compile:

```
$ sh make_cpu.sh
$ sh make_cuda_cpu.sh
$ sh make_NN.sh
```

This spatial transformer code is inspired by the 2D linear spatial transformer code by Fei Xia found here: https://github.com/fxia22/stn.pytorch

we extend it so that now  

* support 1D, 2D 3D.
* support linear/nearest interpolation.

If you want to compile the code on osx with multithreading you will need to use gcc. You can install it with homebrew (brew install gcc)

the code is compiled and test with torch=0.3.0.post4

