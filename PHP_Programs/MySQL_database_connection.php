<?php

$servername = "localhost"; // MySQL server name
$username = "root";    // MySQL username
$password = ""; // MySQL password

// Create connection using oop concept
$conn = new mysqli($servername, $username, $password);

// Check connection
if ($conn->connect_error) 
    {
    // If connection fails, display the error message and terminate the script
    die("Connection failed: " . $conn->connect_error);
    }
else
    {
    echo "Connected successfully to MySQL server\n";
    }
?>