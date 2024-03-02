function validateForm() {
    var name = document.getElementById("name").value;
    var email = document.getElementById("email").value;
    var website = document.getElementById("website").value;
    var comment = document.getElementById("comment").value;


    if (name == "" || email == "" || website == "" || comment == "") {
        alert("Please fill in all fields");
        return false;
    }
    
  return true;
}