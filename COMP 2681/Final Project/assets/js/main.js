function copy() {
  var copyText = document.getElementById("address");
  copyText.select();  
  document.execCommand("copy");
  alert("Address Copied to Clipboard");
}
function copy2() {
  var copyText = document.getElementById("number");
  copyText.select();  
  document.execCommand("copy");
  alert("Phone Number Copied to Clipboard");
}
