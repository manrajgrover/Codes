function r() { 
    var temp=document.getElementById("btn1").innerHTML;
    var working = document.getElementById("btn4").innerHTML;
    document.getElementById("btn1").innerHTML=working;
    working = document.getElementById("btn7").innerHTML;
    document.getElementById("btn4").innerHTML=working;
    working = document.getElementById("btn8").innerHTML;
    document.getElementById("btn7").innerHTML=working;
    working = document.getElementById("btn9").innerHTML;
    document.getElementById("btn8").innerHTML=working;
    working = document.getElementById("btn6").innerHTML;
    document.getElementById("btn9").innerHTML=working;
    working = document.getElementById("btn3").innerHTML;
    document.getElementById("btn6").innerHTML=working;
    working = document.getElementById("btn2").innerHTML;
    document.getElementById("btn3").innerHTML=working;
    document.getElementById("btn2").innerHTML=temp;
}