<?php

$servername = "localhost";
$username = "root";
$password = "";

// Create connection
$conn = new mysqli($servername, $username, $password);

// Check connection
if ($conn->connect_error)

    {
    die("Connection failed: " . $conn->connect_error);
    }
/*Skipping the else block because it's not necessary
  to print a success message. */

// Creating database and checking if exists before creation.
$sql = "CREATE DATABASE IF NOT EXISTS MySchoolDB";

// Check for successful execution of the query.
if ($conn->query($sql) === TRUE)
    {
    echo "Database created successfully or already exists";
    }
else
    {
    echo "Error creating database: " . $conn->error;
    }
$conn->close();
?>