function back_call(llamado){
	//console.log("asdasdadasd");
	var node = document.createElement("LI");                 // Create a <li> node
	//var textnode = document.createTextNode("walk_forward");         // Create a text node
	var textnode = document.createTextNode(llamado);         // Create a text node
	node.appendChild(textnode);                              // Append the text to <li>
	document.getElementById("lista_historial").appendChild(node);     // Append <li> to <ul> with id="myList" 
	$.ajax({
		url: '/'.concat(llamado)
	});
}