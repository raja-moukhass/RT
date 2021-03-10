
[![Build Status](https://travis-ci.org/anfederico/Clairvoyant.svg?branch=master)](https://travis-ci.org/anfederico/Clairvoyant)
![Dependencies](https://img.shields.io/badge/dependencies-up%20to%20date-brightgreen.svg)
![Dependencies](https://img.shields.io/badge/dependencies-up%20to%20date-brightgreen.svg)
[![GitHub Issues](https://img.shields.io/github/issues/anfederico/Clairvoyant.svg)](https://github.com/anfederico/Clairvoyant/issues)
![Contributions welcome](https://img.shields.io/badge/contributions-welcome-orange.svg)
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](https://opensource.org/licenses/MIT)

<p align="center"><img width=60% src="https://github.com/raja-moukhass/RTV1/blob/main/images/ray_tracing.png"></p>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;

# RTV1
- This mini-project is the first step to create a Raytracing program, for you to
finally be able to render computer-generated images.
# Functionalities:
- The program traces rays from one camera to n objects, the objects have shading and cast shadows on each other based the position of a single source of light.
- RTv1 takes as input a custom file format based on comma separated values (examples found in the scenes folder), from the file it can get these informations:
	- camera (location and direction);
	- light (location);
	- objects:
		- sphere (color, location and radius);
		- cylinder (color, location, axis and radius);
		- cone (color, location, axis and angle);
		- plane (color, normal and distance from 0,0,0);

# Installation
To generate an executable for this project run make in the root of the project directory after you've downloaded or cloned it.

This project will only work on MacOS El Capitan/Sierra/HighSierra and even then, no promises!

### how to run the project 
Run the following commands:

* To compile
	- `make`
* To remove objects:
	- `make clean`
* To remove objects and binary file (program):
	- `make fclean`
* To re-compile:
	- `make re`


# Challenges
this program was created without much help from standard libraries, these are all the standard function used:

- open
- read
- write
- malloc
- free
- math:
	- sin()
	- cos()
	- pow()
- mlx graphic library:
	- to create a window
	- use keyboard input

## Parsing file format

```sh

Under the construction

```


**Camere**

```sh
camera <look from> <look at>  
```

**light**

```sh
light <position> <color> 
```
**Sphere**

```sh
sphere <position> <translation> <rotation> <color> <raduis>
```

**Plane**

```sh 
plane <position> <translation> <rotation> <color> <norme>
```
**Cylindre**

```sh
cylindre <position>  <translation> <rotation> <color> <raduis> <axis>
```

**Cone**

```sh
cone <position>  <translation> <rotation> <color> <raduis> <axis>
```

# screenshots

- screen1
<img src="https://github.com/raja-moukhass/RTV1/blob/main/images/back_bone.png" width="1000" />

- screen2
<img src="https://github.com/raja-moukhass/RTV1/blob/main/images/sphere.png" width="1000" />

- screen3
<img src="https://github.com/raja-moukhass/RTV1/blob/main/images/shadow.png" width="1000" />

- screen4
<img src="https://github.com/raja-moukhass/RTV1/blob/main/images/scene_.png" width="1000" />

- screen5
<img src="https://github.com/raja-moukhass/RTV1/blob/main/images/blue_sphere.rgb.png" width="1000" />

# Resources :

- <a href="https://www.scratchapixel.com/lessons/3d-basic-rendering/introduction-to-ray-tracing">Introduction to Ray Tracing: a Simple Method for Creating 3D Images</a>
- <a href="https://www.purplealienplanet.com/node/20">Introduction to Ray Tracing and a simple raytracer with C</a>
- <a href="http://www.realtimerendering.com/raytracing/Ray%20Tracing%20in%20a%20Weekend.pdf">Raytracing with one week</a>
- <a href="http://www.hugi.scene.org/online/coding/hugi%2023%20-%20d9ray.htm">Introduction to raytracing, it should give you the idea how things work.</a>
- <a href="https://www.khanacademy.org/math/linear-algebra/vectors-and-spaces">How to deal with vectors</a>
- <a href="https://medium.com/swlh/ray-tracing-from-scratch-in-python-41670e6a96f9">Ray Tracing From Scratch in Python</a>
- <a href="http://hugi.scene.org/online/hugi24/coding%20graphics%20chris%20dragan%20raytracing%20shapes.htm">Objects intersection with hugi</a>
- <a href="https://github.com/VBrazhnik/FdF/wiki/How-to-rotate-figure-in-3D%3F">How to rotate figure in 3D</a>
- <a href="https://www.youtube.com/watch?v=yF8cKSIw6l4&t=127s">A-Level Further Maths C3-24 3D Matrices: Deriving the General Rotation Matrices</a>


