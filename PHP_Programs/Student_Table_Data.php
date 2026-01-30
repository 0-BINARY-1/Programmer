<?php

$servername = "localhost";
$username = "root";
$password = "";
$dbname = "myschooldb";

$conn = new mysqli($servername, $username, $password, $dbname);

if ($conn->connect_error) 
    {
        die("Connection Failed and Program Terminated". $conn->connect_error);
    }

    //Entering the values after defining the columans name. We can choose not to insert in any column but we can include imaginary column or data.

    //$sql = "INSERT INTO students (ROLLNO,NAMES,EMAIL,CLASS,Phone)"; -> This is not valid because in our table we haven't defined any such column.

$sql = "INSERT INTO students (ROLLNO,NAMES,EMAIL,CLASS)
        VALUES

        (1, 'Hari', 'hari320@gmail.com',12),
        (2,'Ram', 'ram23@gmail.com', 11),
        (3,'Krishna', 'meg5@gmail.com', 12),
        (4,'Laxman', 'Lax222@gmail.com', 10),
        (5,'Santosh', 'tos345@gmail.com', 9)
        
        ";
// Checking if the query runs or not
if($conn->query($sql) === TRUE)
    {
        echo"Data inserted successfully in the table.";
    }
else
    {
        echo "Error in inserting data:" . $conn->connect_error;
    }
$conn->close();
?>