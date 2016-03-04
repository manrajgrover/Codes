function increase(){
    var b = document.getElementById("btn");
    var number = b.innerHTML;
    number = parseInt(number);
    number=number+1;
    b.innerHTML = number;
}