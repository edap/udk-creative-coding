# Intro to OF

Description:
Installation, get Familiar with your IDE, OF application structure, c++ basic operators.

Make your first OF application, Make a login in the OF forum.


Keywords: `mousex`, `ofDrawCircle`, `ofColor`


# Colors

Description: Learn how to create colors and and how to change them.

Keywords: `ofColor`, `ofFloatColor::red`, `ofBackground`, `ofPushStyle`, `ofPopStyle`, `ofEnableBlendMode(OF_BLENDMODE_ADD);`

### Exercise(s)

Create your own palette, invent your own animation.

### References
[The Interaction of Colors](https://www.goodreads.com/book/show/111113.Interaction_of_Color) by Joseph Albers.

Colors suggestion by [Manoloide](https://www.patreon.com/posts/colors-colors-18611429)


# Unit cirlce, sine wave

Description:

Get familiar with the unit circle. Intro to the unit circle, intro to sine waves

Keywords:

SOHCAHTOA, sine and cosine waves, `ofGetElapsedTimef()`, `ofMap`.

Homeworks:
- Make a composition where you use things learned in class.
- Write all the the error messages that you are receiving while developing. Keep a collection of your errors, learn to debug your code.


# Noise and Random

Keywords: `ofSeed`,`ofRandom`, `ofNoise`


# Modulo operator and loops

Description: get confident with modulo and loop.

Keywords: `%`, `for`, `while`

Exercises:

Make 3 applications that have a GUI.

- Make an application that uses the modulo operator and `ofPath`.

- Make an application that uses 3 different sine waves with different amplitude and frequency.

# Matrix transformations

```cpp
ofPushMatrix()
ofPopMatrix()
ofTranslate()
ofScale()
ofRotateDeg()
```


# Polar coordinates, path, lines, shapes.

Description:
Move from polar coordinates to cartesian coordinates and viceversa. Go back to the unit circle and do the math.
Create your own shapes changing the algorithm that we have used to draw the circles

Keywords: `ofPath`, shapes.

# Vectors

Description: move things around using vectors.

Keywords: `glm::vec2`

Reference: [Nature of Code](https://natureofcode.com/book/chapter-1-vectors/). It is in processing but the concepts are valid in OF as well.


# Containers

Vectors

push_back()
size()
empty()
clear()
front()
back()

See app: `containers_polyline`

### Exercise(s)

Read the two references regarding `std::maps` and `std::vectors`.

### References

[std::vectors](https://openframeworks.cc/ofBook/chapters/stl_vector.html) documentation

# Images

Description: How to manipulate pixels one by one and save the result in an image.

Keywords: `ofImage`, `ofPixels`, `getColor`, `setColor`

# Typography

Bitmap
Keywords: `ofDrawBitmapString()`, `ofDrawBitmapStringHighlight()`, `ofTrueTypeFont font;` , `font.load()`, `font.drawString()`


See app `fonts`

# ofNode

Description: introducing ofNode, How to combine several ofNode instances together.

Keywords: `ofNode`, `panDeg`, `ofPolyline`

[ofNode Documentation](https://openframeworks.cc/documentation/3d/ofNode/)

# Meshes

Keywords: ofNode, ofEasyCam, ofMaterial, ofLight, 3D coordinate system, normal, surfaces.

Resources:
[intro to meshes](https://openframeworks.cc/ofBook/chapters/generativemesh.html)

# Meshes and camera
Keywords: addVertex, generative meshes, how to rotate a point.

# Arduino

Description: Build an image distorsion tool using arduino.

Keywords: `ofSerial`

# OSC

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










