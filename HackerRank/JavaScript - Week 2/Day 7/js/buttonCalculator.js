var a="";

function binOp(){
    if(a.indexOf("+")!= -1){
        var numbers = a.split("+");
        var x = parseInt(numbers[0],2);
        var y = parseInt(numbers[1],2);
        var sum = x+y;
        var ans = sum.toString(2);
    }
    else if(a.indexOf("-")!= -1){
        var numbers = a.split("-");
        var x = parseInt(numbers[0],2);
        var y = parseInt(numbers[1],2);
        var sub = x-y;
        var ans = sub.toString(2);
    }
    else if(a.indexOf("*")!= -1){
        var numbers = a.split("*");
        var x = parseInt(numbers[0],2);
        var y = parseInt(numbers[1],2);
        var mul = x*y;
        var ans = mul.toString(2);
    }
    else if(a.indexOf("/")!= -1){
        var numbers = a.split("/");
        var x = parseInt(numbers[0],2);
        var y = parseInt(numbers[1],2);
        var div = x/y;
        var ans = div.toString(2);
    }
    a = ans;
    document.getElementById("res").innerHTML=a;
}

function resApp(c){
    console.log(a);
    a = a+c;
    document.getElementById("res").innerHTML=a;
}

function cl(){
    a="";
    document.getElementById("res").innerHTML=a;
}