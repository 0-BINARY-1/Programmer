# Introduction to PHP

## What is PHP?

**PHP (Hypertext Preprocessor)** is a popular **server-side scripting language** designed for web development. It is used to create dynamic and interactive websites.

- PHP code runs on the **server**, not in the user’s browser.
- The server processes the PHP and sends the **output (usually HTML)** to the browser.
- It is widely used with databases like **MySQL** to build data-driven applications.



### Key Features of PHP

- Open-source and free  
- Easy to learn and use  
- Platform independent (runs on Windows, Linux, macOS)  
- Strong database support  
- Large community support  

---

## Why Do We Use PHP?

We use PHP to:

### 1. Create Dynamic Web Pages
PHP can change page content based on user actions, time, or data from a database.

**Example:**
- Showing a user’s name after login
- Displaying different content for different users

### 2. Handle Forms
PHP collects and processes form data.

**Example:**
- Login forms  
- Registration forms  
- Contact forms  

### 3. Work with Databases
PHP can connect to databases to:
- Insert data  
- Update data  
- Delete data  
- Retrieve data  

### 4. Manage Sessions and Cookies
Used for:
- User authentication  
- Tracking user activity  
- Storing user preferences  

### 5. Build Full Web Applications
Examples:
- E-commerce sites  
- Content Management Systems (WordPress uses PHP)  
- Social networking sites  

---

## PHP Syntax: Start and End Tags

A PHP script starts with `<?php` and ends with `?>`.

### Basic Syntax

```php
<?php
// PHP code goes here
echo "Hello, World!";
?>
```

### Explanation

- `<?php` → Opening tag to start PHP code  
- `?>` → Closing tag to end PHP code  
- `echo` → Used to display output  

---

## Simple Example Program

```php
<!DOCTYPE html>
<html>
<body>

<?php
$name = "Santosh";
echo "Welcome " . $name;
?>

</body>
</html>
```

### Output:
```
Welcome Santosh
```

---

## Important Notes

- The closing tag `?>` is **optional** in pure PHP files.  
- Every PHP statement ends with a **semicolon (;)**.  
- PHP variables start with **$**.

---

## Summary

PHP is a powerful server-side language used to build dynamic websites and web applications. It helps handle forms, databases, sessions, and more. PHP code is written between `<?php` and `?>` tags.

---

If you want, I can also provide:
- PHP variables and data types  
- PHP forms handling notes  
- PHP + MySQL examples  
- Practice questions for students
