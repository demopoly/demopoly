<?
  if($_POST["value"]==1){
?>
    <option value="1">Deutschland</option>
    <option value="2">Italien</option>
    <option value="3">Irland</option>
<?  }
elseif($_POST["value"]==2){
?>
    <option value="1">Dehli</option>
    <option value="2">Munich</option>
    <option value="3">New York</option>
<?
}else {
  ?>
    <option value="1">Green</option>
    <option value="2">Yellow</option>
    <option value="3">Red</option>
<?
}
?>