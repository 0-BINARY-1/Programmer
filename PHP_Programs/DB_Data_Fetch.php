<?php

// Create connection

$servername = "localhost";
$username = "root";
$password = "";
$dbname = "MyschoolDB";

$conn = new mysqli($username, $password, $dbname);

if ($conn->connect_error) 
    {
        die("Connection failed". $conn->connect_error);
    }


// For fetching the data I will use SELECT command

//$sql = "SELECT * FROM students"; //This will list all data present in the students table. 

// To fetch the required data only based on the condition. More real world scenerio.

// $sql = "SELECT ROLLNO, EMAIL FROM students WHERE CLASS = 10"; // This will select columns as specified and display data when the condition matches. But the column name should be remembered.

$sql = "SELECT * FROM students WHERE CLASS = 10"; // This will select all the columns and display data when the condition matches.

$result = $conn->query($sql);

if ($result->num_rows > 0)
    {
        while ($row = $result->fetch_assoc()) // fetches one row at a time from result set.
            {
                echo "<br> The roll no is: ". $row["ROLLNO"] ."<br> The name is: ". $row["NAMES"] . "<br> The email is: ". $row["EMAIL"] ."<br>The class is: ". $row["CLASS"]. "<br>";
            }
    }
else
    {
        echo "No data found in the table". $conn->error;
    }

$conn->close();
?>