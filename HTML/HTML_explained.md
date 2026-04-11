# HTML 

HyperText Markup Language is the full form of the HTML. Current version of HTML is HTML5. It is used to create Web pages. It consist varios HTML elements to do different kind of operations. Below are the some of its elements explained which are used in the programs.

# HTML Elements

These elements are also called HTML tags. It have starting and ending tag but no for all elements. HTML tags have attributes which defines further actions that a HTML element can do.

```html

```

## List of HTML elements

1. html:-\
   This is the root element of an HTML page.
   
```html
<html lang="en">
```

2. br:-\
   This add line brake in HTML page.
   
```html
First line<br>Second line
```

3. anchor:-\
   This tag is used to add hyperlinks to the HTML page. It consist attributes like href, target, title, rel

```html
<a href="https://github.com" target="_blank" title="GitHub">Visit GitHub</a>
```
   
4. table:-\
   This element is used to add table and have other additional tags like
   tr - table row
   td - table data
   th - table head
   It have attributes like border, cellpadding, cellspacing, width, align
   
```html
<table border="1">
  <tr><th>Name</th><th>Age</th></tr>
  <tr><td>John</td><td>25</td></tr>
</table>
```  
5. head:-\
   This HTML element consist document info / metadata
   
```html
<head><title>My Page</title></head>
```

6. select and option:-\
    This element is for creating dropdown list for selection. Have attributes like name, id, multiple, required
   
```html
<select name="fruits">
  <option value="apple">Apple</option>
  <option value="banana">Banana</option>
</select>
```    
7. font:-\
    HTML element to define font style. Best to use CSS instead of this. It consist attributes like color, size, face
      
```html
<font color="red" size="4" face="Arial">Red text</font>
``` 
8. audio:-\
    HTML element to embed sound contents to the website. It consist attributes like controls, autoplay, loop, src
      
```html
<audio controls src="audio.mp3">Your browser does not support audio.</audio>
``` 
9. video:-\
    This HTML element is used to embed video content. It consist attributes like, controls, width, height, autoplay, loop, src.
      
```html
<video width="320" height="240" controls>
  <source src="movie.mp4" type="video/mp4">
</video>
```   
10. input:-\
    This HTML element is used to create fields for input from the user. It has different types:
    - text
    - checkbox
    - radio
    - submit, etc
      
```html
<input type="text" name="username" placeholder="Enter username">
<input type="checkbox" name="agree"> I agree
<input type="submit" value="Submit">
```   
12. p:-\
    This is the paragraph tag which helps to include long content in the HTML document.
      
```html
<p align="center">Centered paragraph.</p>
``` 
13. button:-\
    To make clicable button to do various kinds of action when pressed. This makes the website interactive
      
```html
<button type="button" onclick="alert('Clicked!')">Click Me</button>
``` 
14. list:-\
    To make ordered and unordered list in the website.
    
``` html
<ul type="square">
  <li>Item 1</li>
  <li>Item 2</li>
</ul>

<ol type="A" start="3">
  <li>Third</li>
  <li>Fourth</li>
</ol>
```

15. pre:-\
    
    This element displays the preformatted text (preserves spaces/line breaks).
    
``` html
<pre>
  function hello() {
    console.log("Hello");
  }
</pre>
```
16. img:-\
    
    This is for insearting the images to the website. Have attributes like width and height

``` html
<img src="img_girl.jpg" width="500" height="600">
```

### NOTE:

There are many more other tags which you can explore as you need.
