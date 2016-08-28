# C++ Class #

## assignment and initialize ##
`int a; a = 10` (assignment)

`int a = 10` (initialize)

## functions ##
* function (C & C++)
* member function (C++ only)

* static function (local to file)
* static member function

### function overloaded (C++ only) ###
* A function has more than two prototypes.
example -

`void f(int)` and `void f(int, int)`. 

### function default values of arguments ###
`void f(int a = 10)`
(define or declaration)

(a kind of function overloaded)


### functions in classes ###
* static member function (it is NOT belongs to any object)
* member function
* const member function
` void showA(void) const;`


#### special member function ####
* constructor

	initial list
	
```c++
class CS
{
public:
	int a;
	int b;
	CS(void):
		a(10),
		b(20)
	{
	}

};
```


* default constructor
	`CS(void)` or `CS(int a = 10)`

	* copy constructor
	* constructor 

* destructor


# Referance #
```c++
int b;
int &a = b;
```









```c++
class CS
{



};
```

