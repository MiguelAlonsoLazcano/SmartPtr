#include <iostream>
#include <memory>
#include "Object.h"



void rawPointer(){
    /*
     * Need to create the object to achieve some goal
     * */
    Object* ptr = new Object();
    /*
     * Use the obj in some way
     * */
    ptr->DoSomething();
    /*
     * Destroy the object. done with it? what if DoSomething() raises an exception?
     * */
    delete ptr;
}

void unique_ptr(){
    /*
     * Need to create the object to achieve some goal
     * */
    std::unique_ptr<Object> Obj(new Object());
    /*
     * Use the object in some way
     * */
    Obj->DoSomething();
    /*
     * Simplest policy, the object is automatically destroyed when gets out
     * of the scope, the memory is release, tie the lifetime of the
     * object to a particular block of code.
     * */

}

void shared_ptr(){
    /*
     * Nice short alias
     * */
    typedef std::shared_ptr<Object> MyObjectPtr;
    /*
     * Empty object
     * */
    MyObjectPtr p1;

    {
        MyObjectPtr p2(new Object());
        /*
         * There is now one "reference" to the created object
         * */
        p1 = p2; // Copy the pointer.
        /*
         * There are now two references to the object.
         * */
    } // p2 is destroyed, leaving one reference to the object.
} // p1 is destroyed, leaving a reference count of zero.
  // The object is deleted.



int main() {
    std::cout << "Smart Ptrs" << std::endl;




    return 0;
}