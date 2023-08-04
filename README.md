<h1 align="center">0x11 - printf</h1>
<h3 align="center">Authors</h3>
<p align="center">
	<i>Mojalefa Kodisang & Habiba Zguaid</i>
</p>

<h2 align="center">Description</h2>

This project was meant for us to create our own prinf function that behave exactly like a normal printf using C programming concepts:
* Functions Pointers
* Variadic Functions

## What does our printf function do?
Our printf function is limited to few functionality but unable to handle most of the properties a normal printf function normally do. 
Prototype used for our printf function:
```
int _printf(const char *format, ...);
```
Here are the list of properties our function can handle:
### 1. Handles strings (%s), characters (%c), and a percent character (%%)
```
#include "main.h"

int main(void)
{
	/* strings */
	_printf("%s", "This is a string!");

	printf("\n");

	/* character */
	char ch = '#';
	_printf("Character: %c", ch);

	printf("\n");

	/* a percent character */
	_printf("%%");

	printf("\n");

	return (0);
}
```

#### outcomes
```
This is a string!
Character: #
%
```
### 2. Handles integers (%d and %i)
```
#include "main.h"

int main(void)
{
    _printf("Positive:[%d]\n", 762534);
	_printf("Negative:[%d]\n", -762534);

	return (0);
}
```
#### outcomes
```
Positive: 762534
Negative: -762534
```
### 3. Handles custom conversion specifiers
- %b: handles unsigned integers and converting them to 
```
#include "main.h"

int main(void)
{
    _printf("%b\n", 98);
    return (0);
}
```
#### outcomes
```
1100010
```
### 4. Handles unsigned integers (%u), octal (%o), and hexadecimals (%x - lowercase, %X - uppercase)



```
#include "main.h"

int main(void)
{
	unsigned int ui;

	ui = (unsigned int)INT_MAX + 1024;
	_printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);

	return (0);
}
```
#### outcomes

```
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
```

**WARNING** Our function does not handle any precision, width, lengths, nor flags as those functionalities are still in development and will be updated soon

### How to use it?
1. You first download or clone this repository
```
git clone https://github.com/mojalefakodisang/printf
```
2. In the same directory, you can use the _printf prototype mentioned above without moving the files in the directory

---
<p align="right">
	<i>copyrights reserved</i>
	2023
	<br>
		<b>ALX</b>
		- African Leadership International
	</br>
	M. Kodisang and B. Zguaid
	</br>
</p>