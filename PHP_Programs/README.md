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
$a = 5;
$b = 10
$sum = $a + $b;
echo "The sum is: " . $sum;
?>

</body>
</html>
```

### Output

```text
The sum is: 15
```

---

## Important Notes

- The closing tag `?>` is **optional** in pure PHP files.  
- Every PHP statement ends with a **semicolon (;)**.  
- PHP variables start with **$**.

---

## Pre-requsites before doing php programming

PHP is a server side scripting language which runs on the server so:

- We need a **server**.
- We need a code editor
- Save the php file with **.php** extension to run on the web browser

**Note:**

### Server

To simulate our own computer as a server we can use various programs like listed below:

- Xampp Control Panel
- Laragon
- EasyPHP
- Docker
- WampServer etc.

But I am using the **Xampp Control Panel**

### Code editor

I am using the **Visual Studio Code** as my code editor.

### Process to run php code

- Step 1: First open **code editor**.
- Step 2: Write necessary code.
- Step 3: Save the file in the location **C:\xampp\htdocs\your_file.php**. This is very important.
- Step 4: Open **Xampp Control Panel** and start **Apache** and **MySQL**. Based on your use this might be different but if you do as mine then it is ok.
- Step 5: Go to your browser (google chrome, brave, etc.) and type **localhost/your_file.php**. If you have saved inside **htdocs** folder but **localhost/folder_name1/folder_name2/your_file.php**. If your have saved inside different folder inside **htdocs**.

### To see the results

- Step 1: Go to your browser and type **localhost/phpmyadmin**
- Step 2: Look for the database your are searching for on the left side and inside that database there will be necessary data.

### What does a php code consist in general

1. Connection code to connect to different database like **MySQL, PostgreSQL, MongoDB, MarianDB**, etc
2. **Error check** and program terminate code if error exists
3. **Database, table and other elements** create code as required.
4. Data **insert, fetch, update and delete** code

## PHP Basics with Database Operations

## 1. Declaring Variables in PHP

In PHP, variables start with **$** and do not require a data type declaration.

### Syntax

```php
<?php
$name = "Santosh";   // String
$age = 22;           // Integer
$price = 32.5;      // Float
$isStudent = true;   // Boolean
?>
```

### Rules

- Start with `$`
- Case-sensitive (`$name` ≠ `$Name`)
- Must start with a letter or underscore and **can't start with number**

---

## 2. Providing Output in PHP

### Using `echo`

```php
<?php
echo "Hello World";
?>
```

### Using `print`

```php
<?php
print "Welcome to PHP";
?>
```

### Output Variables

```php
<?php
$name = "Santosh";
echo "Hello " . $name;
?>
```

**Note:** The **(.)** between **"Hello"** and **$name** is concatenating them

---

## 3. Taking Input from User

PHP collects user input using **HTML forms** and superglobals like `$_GET` and `$_POST`.

---

### Example: Using POST Method

```html
<form method="post">
    Name: <input type="text" name="username">
    <input type="submit">
</form>
```

```php
<?php
$username = $_POST['username'];
echo "User Name: " . $username;
?>
```

---

### Example: Using GET Method

```html
<form method="get">
    Age: <input type="text" name="age">
    <input type="submit">
</form>
```

```php
<?php
$age = $_GET['age'];
echo "Age: " . $age;
?>
```

---

## 4. Using SQL with PHP

Usually done with **MySQL** and **MySQLi/PDO**.

Below the **the procedural method** is used. But in the programs I have used the **Object Oriented Programming method**

---

## Step 1: Connect to Database

```php
<?php
$conn = mysqli_connect("localhost", "root", "", "testdb");

if (!$conn) {
    die("Connection failed"); // This will terminate the program if error exists.
}
?>
```

---

## Step 2: Create Database

```php
<?php
$sql = "CREATE DATABASE testdb";
mysqli_query($conn, $sql);
?>
```

---

## Step 3: Create Table

```php
<?php
$sql = "CREATE TABLE students (
    id INT AUTO_INCREMENT PRIMARY KEY,
    names VARCHAR(50),
    age INT
)";
mysqli_query($conn, $sql);
?>
```

---

## Step 4: Insert Data

```php
<?php
$sql = "INSERT INTO students (name, age)
VALUES ('Santosh', 22)";
mysqli_query($conn, $sql);
?>
```

---

## Step 5: Fetch Data

```php
<?php
$sql = "SELECT * FROM students";
$result = mysqli_query($conn, $sql);

while($row = mysqli_fetch_assoc($result)) {
    echo $row['name'] . " - " . $row['age'] . "<br>";
}
?>
```

---

## Step 6: Update Data

```php
<?php
$sql = "UPDATE students SET age=23 WHERE name='Santosh'";
mysqli_query($conn, $sql);
?>
```

---

## Step 7: Delete Data

```php
<?php
$sql = "DELETE FROM students WHERE name='Santosh'";
mysqli_query($conn, $sql);
?>
```

---
