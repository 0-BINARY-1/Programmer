# Basic information of using the JavaScript.

## Adding JavaScript to HTML

### Inline JavaScript  
JavaScript code written directly inside an HTML element using attributes like onclick.  
```javascript
<button onclick="alert('Hello World')">Click Me</button>
```
### Internal JavaScript  
JavaScript written inside the <script> tag within an HTML file.  
```javascript
<script>
  console.log("Hello World");
</script>
```
### External JavaScript (Recommended)  
JavaScript written in a separate .js file and linked to HTML using the <script src="file.js"></script> tag.  
```javascript

<script src="script.js"></script>
```

## Variables
A named container used to store data values in JavaScript. JavaScript has three ways to declare variables:  

```javascript
var name = "John";     // Old way (avoid)
let age = 25;          // Block scoped (recommended)
const pi = 3.14;       // Constant (cannot change)
```

**Rules**

1. let → value can be changed
2. const → value cannot be changed
3. Avoid var as it is old.

## Data Types
The classification of data in JavaScript such as String, Number, Boolean, Object, or Undefined.  
### Primitive Types  
Basic data types that store a single value directly in memory and are immutable (cannot be changed).  
```javascript
let str = "Hello";      // String
let num = 10;           // Number
let bool = true;        // Boolean
let x = null;           // Null
let y;                  // Undefined
let id = Symbol();      // Symbol
let big = 123n;         // BigInt
```

### Reference Types  
Complex data types that store references (memory addresses) rather than actual values.  
```javascript
let person = { name: "John", age: 25 };  // Object
let numbers = [1, 2, 3, 4];              // Array
```

## Operators
A symbol used to perform operations on variables and values (e.g., +, ===, &&).
### Arithmetic
The operators are: **( +  -  *  /  %  ** )**  

Example:

```javascript
let result = 10 + 5;
```

### Comparison

The comparision operators are: **( ==   ===   !=   !==   >   <   >=   <= )**.  
Three equals to ( === ) implies → Strict comparison

### Logical
The logical operators are: **( &&   ||   ! )**

## Conditional Statements
A decision-making structure (if, switch) that executes code based on a condition.  
1. if...else

```javascript
let age = 18;

if (age >= 18) {
  console.log("Adult");
} else {
  console.log("Minor");
}
```
2. switch
```javascript
let day = 1;

switch (day) {
  case 1:
    console.log("Sunday");
    break;
  default:
    console.log("Invalid");
}
```
## Loops
A control structure that repeats a block of code while a condition is true.
1. **for loop**

```javascript
for (let i = 0; i < 5; i++) {
  console.log(i);
}
```

2. **while loop**
```javascript
let i = 0;
while (i < 5) {
  console.log(i);
  i++;
}
```

3. **for...of (Arrays)**
-  
```javascript
let arr = [1, 2, 3];
for (let value of arr) {
  console.log(value);
}
```
## Functions
A reusable block of code designed to perform a specific task.  
1. Function Declaration

```javascript
function greet(name)
{
  return "Hello " + name;
}
```

2. Function Expression

```javascript
const greet = function(name)
{
  return "Hello " + name;
};
```

3. Arrow Function

```javascript
const greet = (name) =>
{
  return "Hello " + name;
};
```

4. Short version:

```javascript
const greet = name => "Hello " + name;
```

## Objects
A collection of key-value pairs used to store structured data in JavaScript.  
```javascript
const person = 
{
  name: "John",
  age: 25,
  greet: function() {
    console.log("Hello");
  }
};
console.log(person.name);
person.greet();
```

## Arrays
An ordered collection of values stored in a single variable and accessed by index.
```javascript
let fruits = ["Apple", "Banana", "Mango"];
```

**Common methods to access content of array:**

```javascript
fruits.push("Orange");
fruits.pop();
fruits.shift();
fruits.unshift("Grapes");
fruits.length;
```

## DOM Manipulation
The process of dynamically modifying the Document Object Model structure, style, or content using JavaScript.  
**Selecting Elements**
Accessing HTML elements in JavaScript using methods like getElementById() or querySelector().  
```javascript
document.getElementById("id");
document.querySelector(".class");
document.querySelectorAll("p");
```

**Changing Content**
Modifying HTML elements dynamically using properties like innerHTML, textContent, or value.  
```javascript
document.getElementById("demo").innerHTML = "Hello";
```

**Event Listener**
A method (addEventListener) that waits for and responds to user interactions like clicks or key presses.  
```javascript
document.getElementById("btn").addEventListener("click", function() {
  alert("Button Clicked");
});
```

## ES6 Features
Enhancements introduced in ECMAScript 2015 including let, const, arrow functions, classes, modules, destructuring, and more.  
**Template Literals**
ES6 string syntax using backticks (`) that allows embedded expressions with ${} and multi-line strings.
```javascript
let name = "John";
console.log(`Hello ${name}`);
```

**Destructuring**
An ES6 syntax that extracts values from arrays or properties from objects into variables.  
```javascript
const person = { name: "John", age: 25 };
const { name, age } = person;
```

**Spread Operator**
An ES6 feature that expands arrays or objects into individual elements or properties.
```javascript
let arr1 = [1, 2];
let arr2 = [...arr1, 3, 4];
```

## Asynchronous JavaScript
Asynchronous JavaScript allows code to run without blocking the execution of other operations, making applications faster and more responsive.  
**setTimeout()**
A built-in function that executes code after a specified delay (in milliseconds).
```javascript
setTimeout(() =>
{
  console.log("Delayed");
}, 2000);
```

**Promise**
An object representing the eventual completion or failure of an asynchronous operation.  
```javascript
let promise = new Promise((resolve, reject) => {
  resolve("Success");
});
promise.then(result => console.log(result));
```

**Async/Await**
A modern ES6+ syntax that simplifies handling asynchronous operations by making them look like synchronous code.
```javascript
async function fetchData() 
{
  let response = await fetch("https://api.example.com");
  let data = await response.json();
  console.log(data);
}
```

## Error Handling
A mechanism in JavaScript using try...catch...finally to manage runtime errors without stopping program execution.  
```javascript
try {
  let x = y;
} catch (error) {
  console.log("Error:", error.message);
} finally {
  console.log("Done");
}
```

## JSON
JSON (JavaScript Object Notation) is a lightweight data-interchange format used to store and exchange data.  
```javascript
let obj = { name: "John" };

let jsonString = JSON.stringify(obj);
let parsedObj = JSON.parse(jsonString);
```
