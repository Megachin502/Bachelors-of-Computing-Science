function updateTime() {
	document.getElementById("time").innerHTML = Date();
}

document.getElementById("time").innerHTML = Date();
setInterval(updateTime,1000);