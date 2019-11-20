function back_call(llamado){

if(llamado == 'ultrasonido_on'){
	document.getElementById("ul_on").style.display = 'none';
	document.getElementById("ul_off").style.display = 'inline-block';
}else{
	document.getElementById("ul_on").style.display = 'inline-block';
	document.getElementById("ul_off").style.display = 'none';
}

var d = new Date();
	var time = d.getHours() + ":" + d.getMinutes() + ":" + d.getSeconds();

var table = document.getElementById("lista_historial");

// Create an empty <tr> element and add it to the 1st position of the table:
var row = table.insertRow(0);

// Insert new cells (<td> elements) at the 1st and 2nd position of the "new" <tr> element:
var cell1 = row.insertCell(0);
var cell2 = row.insertCell(1);

// Add some text to the new cells:
cell1.innerHTML = llamado;
cell2.innerHTML = time; 


	$.ajax({
		url: '/'.concat(llamado)
	});
}