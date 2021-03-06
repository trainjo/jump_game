#pragma once

namespace JumpGame {

  /* An object is the base object for anything that
     interacts with the gameplay. Examples of objects
     would be walls, the player character, enemies and
     platforms. Each object has an x and a y position. */
  class Object {
  public: 
    virtual ~Object() {}

    virtual double getX() = 0; // The horizontal position of the object
    virtual double getY() = 0; // The vertical position of the object
  };

}

