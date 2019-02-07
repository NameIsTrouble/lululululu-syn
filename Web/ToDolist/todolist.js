function del(temp) {
    var div = temp.parentElement;
    var p = div.parentElement;
    p.removeChild(div);
}

function add() {
    var temp = document.getElementById("intext").value;
    if (temp === '') {
        alert("请输入待办事项");
    } else {
        var newev = document.createTextNode(temp);
        var newpic = document.createElement("img");
        newpic.className = "im";
        newpic.src = "trash-2.png";

        var newbtn = document.createElement("button");
        newbtn.appendChild(newpic);
        newbtn.setAttribute('onclick', 'del(this)');
        newbtn.className = "del";

        var newli = document.createElement("li");
        newli.appendChild(newev);
        newli.appendChild(newbtn);
        newli.setAttribute("onclick", "fin(this)");

        document.getElementById("list").appendChild(newli);
    }
    document.getElementById("intext").value = "";
}

document.onkeypress = function (event) {
    var code = event.keyCode;
    if (code == 13) {
        var temp = add();
    }
}

function fin(temp) {
    if (temp.className === "fin") {
        temp.className = "";
    } else {
        temp.className = "fin";
    }
}