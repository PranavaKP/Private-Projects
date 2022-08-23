
function displayResult() {
    document.getElementById("YEET").innerHTML ="Please Retry!";
    document.getElementById("YEET").style.color ="maroon";
 }

 function validateUser() {
  var username = document.getElementById("Users").value;
  var password = document.getElementById("Password").value;
  
  
  if(username=="PranavaKP9960" && password=="Muruga123*100$"){
    window.alert('Welcome Pranava!')
    window.location = 'file:///C:/Users/Prana/OneDrive/Documents/Github/Private-Projects/web-apps/pranava-home/html-projects/PranavaHome-pg.html';
  }
  
  else{
    window.alert("You have entered invalid Username and Password.")
    document.getElementById("YEET").innerHTML ="Please Retry!";
    document.getElementById("YEET").style.color ="maroon";
  }
  
 }