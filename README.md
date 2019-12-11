## Intro to OF

Description:
Installation, get Familiar with your IDE, OF application structure, c++ basic operators.

Make your first OF application, create a login in the OF forum.

Keywords: `mousex`, `ofDrawCircle`, `ofColor`, `ofDrawLine`, `ofPushStyle`

Application: `first`, `animationSimple`


## Colors

Description: Learn how to create colors and and how to change them.

Keywords: `ofColor`, `ofFloatColor::red`, `ofBackground`, `ofPushStyle`, `ofPopStyle`, `ofEnableBlendMode(OF_BLENDMODE_ADD)`, `HSB`, `RGB`

Application: `colors`

### Exercise(s)
- Create your own palette, invent your own animation.

Notes for the theacher: 
- Exercises "Color" at page 88 of "Code as Creative Medium"

### References
[The Interaction of Colors](https://www.goodreads.com/book/show/111113.Interaction_of_Color) by Joseph Albers.

Colors suggestion by [Manoloide](https://www.patreon.com/posts/colors-colors-18611429)


## Logical operators, comparison operator, loop and conditions

Description: Learn how to compare two variables, how to make a branch condition, how to make a loop.

Keywords: `||`, `&&`, `>`, `<`, `>=`. 

Exercises:

- Make a sketch where the value of a variable is changing continuosly and you compare this value with a fixed variable. Use comparison operator or logical operator to change the visual output of your sketch.
- Make an application and draw a square. Change the background color when the mouse is over the square.

Notes for the teacher:
- Exercises "Conditional testing" at pag. 90 of "Code as Creative Medium"

Applications: `logicalOperators`, `comparisonOperators`, `sine-waves-loop`

## Matrices

Description: Learn how to move and rotate your forms

Keywords:

```cpp
ofPushMatrix()
ofPopMatrix()
ofTranslate()
ofScale()
ofRotateDeg()
ofRotateRad()
```

Application: `introToMatrices`

Exercise: Re-code "Schotter", by Georg Ness, 1965.

## Modulo operator and loops

Description: get confident with the modulo operator and loop.

Keywords: `%`, `for`, `while`

Exercises:

- Make a grid where the color of the cells depends on some calculation that involves the modulo operator.

- Make an application that uses 3 different sine waves with different amplitude and frequency.

Notes for the teacher:
- Exercises "Iteration", pag 86 of "Code as creative Medium"


## Unit cirlce, sine wave

Description:

- Understandin sin of time, plotting the sin(time) on the x axis.
- Understanding the unit circle [gif](https://commons.wikimedia.org/wiki/File:Circle_cos_sin.gif).
- How to represent a point in cartesia and polar space, how to convert from one space to the other

Keywords:

SOHCAHTOA, sine and cosine waves, `ofGetElapsedTimef()`, `ofMap`.

Homeworks:
- Make an application that draws a spiral.


## Noise and Random

Description: What is Randomness and what is noise, and how those are generated in the computer. Kevin Perlin and the Perlin noise in Tron.

Keywords: `ofSeed`,`ofRandom`, `ofNoise`

Notes for the teacher:
Exercises "Unpredictability" pag. 106 of "Code as Creative Medium".

Applications `noiseExample`, `randomExample`

References: [A Million Random Digits](https://en.wikipedia.org/wiki/A_Million_Random_Digits_with_100,000_Normal_Deviates), [History of randomness](https://en.wikipedia.org/wiki/History_of_randomness), [Random Number generators](https://en.wikipedia.org/wiki/Random_number_generation)

## Containers and the glm::vec2 datatype

Vectors

push_back()
size()
empty()
clear()
front()
back()

intro to point as datatype (`glm::vec2`). How to iterate through points

See app: `introToContainer`, `containers_polyline`

### Exercise(s)

- Read the two references regarding `std::maps` and `std::vectors`.

Notes for the teacher:
- Exercises "Arrays" at pag. 91 of "Code as Creative Medium".

### References

[std::vectors](https://openframeworks.cc/ofBook/chapters/stl_vector.html) documentation

## Path, lines, shapes, curves.

Description: How to create shapes and lines connecting points.

Application: `shapes-Blob`

Notes for the teacher:
Exercises "Curves" pag. 93 of "Code as Creative Medium".

## Vectors

Description: move things around using vectors.
Topics: Acceleration, mass, multiple forces interaction.

Keywords: `glm::vec2`

Reference: [Nature of Code](https://natureofcode.com/book/chapter-1-vectors/). It is in processing but the concepts are valid in OF as well.


### Exercises
- Create your own shapes changing the algorithm that we have used to draw the circles
- Move from polar coordinates to cartesian coordinates and viceversa. Have a look to the previous exercise about the unit circle.

Keywords: `ofPath`, shapes.


## Images

Description: How to manipulate pixels one by one and save the result in an image.

Keywords: `ofImage`, `ofPixels`, `getColor`, `setColor`

Notes for the teacher:
- Exercises "Image" at pag. 101 of "Code as Creative Medium".

## Typography

Bitmap
Keywords: `ofDrawBitmapString()`, `ofDrawBitmapStringHighlight()`, `ofTrueTypeFont font;` , `font.load()`, `font.drawString()`


See app `fonts`

Notes for the teacher:
- Exercises "Typography" at pag. 105 of "Code as Creative Medium".

## ofNode

Description: introducing ofNode, How to combine several ofNode instances together.

Keywords: `ofNode`, `panDeg`, `ofPolyline`

[ofNode Documentation](https://openframeworks.cc/documentation/3d/ofNode/)

## Meshes

Keywords: ofNode, ofEasyCam, ofMaterial, ofLight, 3D coordinate system, normal, surfaces.

Resources:
[intro to meshes](https://openframeworks.cc/ofBook/chapters/generativemesh.html)

## Meshes and camera
Keywords: addVertex, generative meshes, how to rotate a point.

## Arduino

Description: Build an image distorsion tool using arduino.

Keywords: `ofSerial`

## OSC

Description: Make music letting your OF application talk to Sonic PI.

Keywords: `OSC`



### Appendice

Header and cpp 

OF vs C++  (ofMap vs sin)

Common (core) data types

```
char
int
float
bool
string
```

Signed vs unsigned, # bits, etc.

Type casting/conversions (float to int, etc.)

Data Storage

Control 

```
if (myVar == 1) {
  // then to something
} else {
  // otherwise do something else
}

for (int i = 0; i< 10; i++) {
  // do something 10 times

}

while(myVar == 1){
  // keep looping until myVar is different from 1
} 
```


arithmetic operators 

```
+
-
*
/
%
++
-- 
```

comparison operators

```
==
!=
>
>=
<
<=
```

logical operators

```
&&
||
!
```

### Working with the console.

You do not require xcode or visual studio 2017 to run opeframeworks. A terminal and a text editor are enough. As a text editor I suggest [visual studio code](https://code.visualstudio.com/download).

The navigation commands that you need to move around using the terminal are:

- `pwd`. It means "print working directory" and it simply print on screen the path on which you are at the moment.
- `ls`. It means "list", it lists all the files and directory in the folder where you currently are.
- `cd`. It means "change directory", and it is the equivalent of double clicking on a folder.

The commands that you need to compile openframeworks are:
- `make`. It compiles the app.
- `make run`. It runs the up.
- You can run them together using `make && make run`

A practical example. Let's say that you want to run the application call "myHomework" in the "MyApps" folder in openframewors.

Launch the terminal an write `pwd`. The terminal will reply you something like `Users/myUser`. if you print `ls`, you will see all the folder that you have in your home. Let's assume that you have openframeWorks in your `Documents` folder.

If you write `cd Documents`, you will enter the Documents folder. If, from there, you write `cd openFrameworks/apps/myApps` you will enter the `myApps` folder.

In this folder there are all your sketches, included `myHomeworks`. cd into that directory, typing `cd myHomeworks`.

Now you are inside an openFrameworks application. The `make` command will compile it and `make run` will run it. If it is the first time that you run openFrameworks, it may take a while.

### Credits
Some of the exercises in this repository come from [Zach Lieberman's repository](https://github.com/SFPC), from the book "Code As Creative Medium", by [Golan Levin](http://www.flong.com/).













