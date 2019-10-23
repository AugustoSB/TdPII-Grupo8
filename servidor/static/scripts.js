function back_call(llamado){
	var node = document.createElement("LI");                 // Create a <li> node
	cadena = llamado.replace("_", " ");
	var d = new Date();
	var time = d.getHours() + ":" + d.getMinutes() + ":" + d.getSeconds();
	cadena = cadena + " ___ " + time;
	var textnode = document.createTextNode(cadena);         // Create a text node
	node.appendChild(textnode);                              // Append the text to <li>
	document.getElementById("lista_historial").appendChild(node);     // Append <li> to <ul> with id="myList" 
	$.ajax({
		url: '/'.concat(llamado)
	});
}