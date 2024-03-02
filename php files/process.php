<?php


$name = $_POST['name'];
$email = $_POST['email'];
$website = $_POST['website'];
$comment = $_POST['comment'];
$gender = $_POST['gender'];


$servername = "localhost";
$username = "your_username";
$password = "your_password";
$dbname = "your_database_name";


$conn = new mysqli($servername, $username, $password, $dbname);


if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}


$sql = "INSERT INTO feedback (name, email, website, comment, gender)
        VALUES ('$name', '$email', '$website', '$comment', '$gender')";


if ($conn->query($sql) === TRUE) {
   
    echo "Thank you for your feedback, $name!";
} else {
    echo "Error: " . $sql . "<br>" . $conn->error;
}


$conn->close();
?>