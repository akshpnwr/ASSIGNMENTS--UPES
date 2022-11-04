<?php 
$username = $_POST['username'];
$password = $_POST['password'];


if($username == '' && $password == '')
{
    echo "Please enter your credentials!";
}
else if($username=='admin' && $password == '1234') {
    echo "You are logged in!";
}

else {
    echo "Incorrect username or password.";
}
?>