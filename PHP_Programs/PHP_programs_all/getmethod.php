<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>GET Method</title>
</head>
<body>
    <h2>GET Method Example</h2>

    <form action="getmethod.php" method="get">
        <label for="name">Name:</label>
        <input type="text" id="name" name="name" required>
        <br><br>
        <input type="submit" value="Submit" name="submit">

    </form>

    <?php

    // Database connection code
    $servername = "localhost";
    $username = "root";
    $password = "";
    $dbname = "student"; // Change this to your actual database name
    $conn = new mysqli($servername, $username, $password, $dbname);
    if ($conn->connect_error) 
        {
        die("Connection failed: " . $conn->connect_error);
    }

    // Code to handle form submission
    if (isset($_GET['submit'])) 
    {
        $name = $_GET['name'];

        $ins = "INSERT INTO info (name) VALUES ('$name')"; // Change 'info' to your actual table name and 'name' to your actual column name

        if ($conn->query($ins) === TRUE) 
        {
            echo "<br>New record created successfully";
        } 
        else 
        {
            echo "Error: " . $ins . "<br>" . $conn->error;
        }
        
    } 
    $conn->close();
    ?>
</body>
</html>