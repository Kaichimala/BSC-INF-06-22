#pragma once

class Rectangle {
    private:
    float length = 0.0f;
    float width = 0.0f;

    public:

   Rectangle ();


   void setLength(float len);
   void setWidth(float wid);

   float getLength() const;
   float getWidth() const;

       
   float calculateArea () const;
   
       ~Rectangle () = default;
    
};