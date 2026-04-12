# Cascading Style Sheets (CSS) 
CSS is used to controls the presentatio of HTML documents: layout, colors, spacing, animations, fonts, etc. It seperates content(HTML) from design(CSS)

## Basic information

### Know HTML to use CSS

CSS is useless without the HTML. So we must know:
- HTML elements `(e.g. <p>, <h1>....<h6>, <div>)`
- Attributes like class and id
- Basic document structure

### Ways to apply CSS to an HTML document

We can add CSS in 3 different ways, which are listed below:

- Inline CSS: We add this kind of CSS inside the HTML element.
- Internal CSS: This kind of CSS is added in the same HTML file inside <style>...</style> tag in <head> or <body> section
- External CSS: For adding external CSS. We create a seperate file with .css extension and link that file in the <head> or <body> section in the main HTML file

### Basic Syntax

``` CSS
selector
{
  property: value;
}
h1
{
  color: blue;
  font-size: 24px;
}
```
### Core Selectors

- Element (e.g., p {})
- Class (e.g., .my-class {})
- ID (e.g., #my-id {})
- Universal (* {})
- Grouping (h1, h2, h3 {})

### Basic Properties to Start With

- Colors: color, background-color
- Text: font-size, font-family, text-align
- Box Model: width, height, margin, padding, border
- Display: block, inline, inline-block, none

### Basic Layout Concepts

- Block vs. inline elements
- Box model (content → padding → border → margin)
- Positioning basics: static, relative, absolute, fixed
- Flexbox (modern, highly recommended for layouts)

### Common Beginner Mistakes to Avoid

- Forgetting the : after property name
- Missing semicolons between declarations
- Overusing id selectors (use classes for reusability)
- Not understanding margin vs padding


### Learning Resources to Start

- MDN Web Docs (Mozilla)
- CSS Tricks (especially the “Guide to Flexbox”)
- FreeCodeCamp’s responsive web design course
