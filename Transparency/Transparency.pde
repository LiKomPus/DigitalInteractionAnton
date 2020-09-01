/*Modified version of Processing example 
 from examples/basics/images/transparency 
 by Anton Uldahl Jensen
*/

PImage img; 
float offset = 0; 
float easing = 0.05;

void setup() {
  size(255, 128);
  img = loadImage("download.jpg");
}

void draw() { 
  background(255);
  int x = 255-mouseX;
  float dx = (mouseX-img.width/2) - offset;
  offset += dx * easing; 
    tint(255, x);
  image(img, offset, 0);
}
