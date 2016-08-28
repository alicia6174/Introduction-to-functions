### assignment and initialize ###
`int a; a = 10` (assignment)

`int a = 10` (initialize)

### functions ###
* function (C & C++)
* member function (C++ only)
* static function (local to file, can't be used by other files)
* static member function (see below)

### function overloaded (C++ only) ###
* This property means that a function has more than two prototypes.

 For example -

 `void f(int)` and `void f(int, int)`. 

### function default values of arguments ###
* It is a kind of function overloaded.

 For example -

 `void f(int a = 10)`
 (define or declaration)



### functions in classes ###
* member function
* static member function (DOES NOT belong to any object but class)
* const member function (DOES NOT change any value)
` void showA(void) const;`


### special member function ###
* constructor

 * initial list
	
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


### Referance ###
```c++
int b;
int &a = b;
```

### Example ###
* Use C-string to implement all the member functions of std::string.
