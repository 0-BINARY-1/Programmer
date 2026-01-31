<?php

$servername = "localhost"; 
$username = "root";
$password = "";
$dbname = "myschooldb";

$conn = new mysqli($servername, $username, $password, $dbname);

if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

/* UPDATE query */
$sql = "UPDATE students 
        SET NAMES = 'Komal', EMAIL = 'komal345@gmail.com' 
        WHERE ROLLNO = 2";

$results = $conn->query($sql);
if ($results === TRUE) 
    {
    /* SELECT updated record */
    $select = "SELECT * FROM students WHERE ROLLNO = 2";
    $result = $conn->query($select);

    if ($result->num_rows > 0) {
        while ($row = $result->fetch_assoc()) {
            echo "<br>The roll no is: " . $row["ROLLNO"];
            echo "<br>The name is: " . $row["NAMES"];
            echo "<br>The email is: " . $row["EMAIL"];
            echo "<br>The class is: " . $row["CLASS"];
        }
    }

} else {
    echo "Update failed: " . $conn->error;
}
$conn->close();

// BELOW IS THE UPDATE CODE ONLY

/*

$servername = "localhost"; 
$username = "root";
$password = "";
$dbname = "myschooldb";

$conn = new mysqli($servername, $username, $password, $dbname);

if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

$sql = "UPDATE students 
        SET NAMES = 'Rakesh', EMAIL = 'rakesh345@gmail.com' 
        WHERE ROLLNO = 2";

if ($conn->query($sql) === TRUE) {
    echo "Record updated successfully";
} else {
    echo "Update failed: " . $conn->error;
}

$conn->close();
?>*/

?>