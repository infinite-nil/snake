# Snake game

<img align="left" style="width:260px" src="https://github.com/raysan5/raylib/blob/master/logo/raylib_logo_animation.gif" width="288px">

Hello stranger, welcome!
This is my attempt to create a simple snake game in C using nothing but [Raylib](https://www.raylib.com/).
If you find this project interesting, feel free to drop a star.

---

### Environment

You need a C99 compiler

```
sudo apt install build-essential git
```

And some required libs to handle sound, graphics and windowing

```
sudo apt install libasound2-dev libx11-dev libxrandr-dev libxi-dev libgl1-mesa-dev libglu1-mesa-dev libxcursor-dev libxinerama-dev
```

Fetch and build raylib dependency

```
cd vendor/raylib/src
make
cd ../..
```

This will create the static library `raylib/src/libraylib.a` that we depends on.

### Building and running

Compile the project using make

```
make all
```

This command will delete previous builds and build again.

The output binary will be put on `/out` dir.

```
./out/snake
```
