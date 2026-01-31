<?php

$servername = "localhost";
$username = "root";
$password = "";
$dbname = "MySchool";

/* 1. Create connection (without database first) */
$conn = new mysqli($servername, $username, $password);

if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

/* 2. Create database */
$sql = "CREATE DATABASE IF NOT EXISTS $dbname";
if ($conn->query($sql) === TRUE) {
    echo "Database created successfully or already exists<br>";
} else {
    die("Error creating database: " . $conn->error);
}

/* 3. Select the database */
$conn->select_db($dbname);

/* 4. Create table */
$sql = "CREATE TABLE IF NOT EXISTS student (
    ROLLNO INT AUTO_INCREMENT PRIMARY KEY,
    NAMES VARCHAR(255) NOT NULL,
    EMAIL VARCHAR(255) NOT NULL,
    CLASS INT
)";

if ($conn->query($sql) === TRUE) {
    echo "Table created successfully or already exists<br>";
} else {
    die("Error creating table: " . $conn->error);
}

/* 5. Insert data */
$sql = "INSERT INTO student (NAMES, EMAIL, CLASS) VALUES
        ('Hari', 'hari320@gmail.com', 12),
        ('Ram', 'ram23@gmail.com', 11),
        ('Krishna', 'meg5@gmail.com', 12),
        ('Laxman', 'lax222@gmail.com', 12),
        ('Santosh', 'tos345@gmail.com', 9)";

if ($conn->query($sql) === TRUE) {
    echo "Data inserted successfully<br>";
} else {
    echo "Data insertion skipped or failed: " . $conn->error . "<br>";
}

/* 6. Fetch data (CLASS = 12) */
$sql = "SELECT * FROM student WHERE CLASS = 12";
$result = $conn->query($sql);

if ($result->num_rows > 0) {
    echo "<br><b>Students in Class 12:</b><br>";
    while ($row = $result->fetch_assoc()) {
        echo "Roll No: " . $row["ROLLNO"] . "<br>";
        echo "Name: " . $row["NAMES"] . "<br>";
        echo "Email: " . $row["EMAIL"] . "<br>";
        echo "Class: " . $row["CLASS"] . "<br><br>";
    }
} else {
    echo "No students found in Class 10<br>";
}

/* 7. Update data */
$sql = "UPDATE student 
        SET NAMES = 'Komal', EMAIL = 'komal345@gmail.com' 
        WHERE ROLLNO = 4";

if ($conn->query($sql) === TRUE) {
    echo "Record updated successfully<br>";
} else {
    echo "Update failed: " . $conn->error;
}

/* Close connection */
$conn->close();

?>
