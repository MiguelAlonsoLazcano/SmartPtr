# Smart Ptrs 

A smart pointer is an ADT, a class that wraps or simulates a 'raw' ('bare') C++ pointer, to manage the 
lifetime of the object being pointed to. Avoid memory leaking when forgetting to delete a raw pointer, 
with raw pointers the programmer has to explicitly destroy the object when it is no longer useful.
C++ lack of automatic garbage collection, so smart pointers can be very useful to avoid memory issues.


#### Applications
- automatic memory management 
- bound checking 
- reduce bugs caused by the misuse of pointers


Smart pointers typically keep track of the memory they point to, and may also be 
used to manage other resources, such as network connection and file handles.



 
#### Types
- std::unique_ptr - scoped pointer
    - lifetime of the object is tie to a particular block of code
    - object instances can not be copied
    - uses std::move to move a pointer 
- std::shared_ptr - reference pointer 
    - lifetime of the object in no tied directly to a particula section of code
    - object instances can copied 





### reference 
https://stackoverflow.com/questions/106508/what-is-a-smart-pointer-and-when-should-i-use-one
https://en.wikipedia.org/wiki/Smart_pointer
