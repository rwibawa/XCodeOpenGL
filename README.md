# XCodeOpenGL
Learn OpenGL on XCode.

## References
* [Hello World Tutorial](https://youtu.be/MHlbNbWlrIM)
* [FreeCodeCamp Tutorial](https://youtu.be/45MIykWJ-C4)

* [GLFW](https://www.glfw.org/)
* [GLFW github repo](https://github.com/glfw/glfw)

* [glad - gl loader](https://glad.dav1d.de/)
* [glad github repo](https://github.com/Dav1dde/glad)

## Setup
### 1. Open XCode and create a new project
* macOS > Command Line Tool
  ![new project - Command Line Tool](./docs/img/xcode-create-project.jpg)
* Select language C++
  ![new project - Command Line Tool](./docs/img/xcode-project-options.jpg)

### 2. Install the **GLFW** using `homebrew`.
```bash
$ brew install glfw
==> cmake -DGLFW_USE_CHDIR=TRUE -DGLFW_USE_MENUBAR=TRUE -DBUILD_SHARED_LIBS=TRUE .
==> make install
🍺  /usr/local/Cellar/glfw/3.3.5: 14 files, 431.5KB, built in 39 seconds
```

### 3. Add **GLFW** header files to the project include path.
Go to project *Build Settings*, search for "header search", *double-click* on **Header Search Paths**. Add "/usr/local/Cellar/glfw/3.3.5/include".
![GLFW include path](./docs/img/xcode-project-options.jpg)

