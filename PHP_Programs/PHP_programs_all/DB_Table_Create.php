<?php
// Creating the table in the database created in the file DB_create.php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "MySchoolDB";

$conn = new mysqli(hostname: $servername, username: $username, password: $password, database: $dbname);

if ($conn->connect_error)
    {
        die("Connection Failed" . $conn->connect_error);
    }

$sql = "CREATE TABLE students 
(
ROLLNO INT AUTO_INCREMENT PRIMARY KEY, 
NAMES VARCHAR(255) NOT NULL, 
EMAIL VARCHAR (255) NOT NULL, 
CLASS INT(5)
)";
// NOT NULL implies that the field can't be empty.

//Checking and providing the message if the connection was successful.
if($conn->query($sql)=== TRUE) 
    {
        echo "Table named students created successfully.";
    }
else
    {
        echo "Error in creating table:" . $conn->error;
    }
$conn->close();
?>