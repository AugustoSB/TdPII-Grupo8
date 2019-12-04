function back_call(llamado){

	//modificar indicadores de estado si corresponde
	switch (llamado) {

		case 'ultrasonido_on':
			//document.getElementById("span_ultrasonido").className = 'badge badge-warning';
			document.getElementById("span_ultrasonido").innerHTML = 'ON';
			break;

		case 'ultrasonido_off':
			//document.getElementById("span_ultrasonido").className = 'badge badge-danger';
			document.getElementById("span_ultrasonido").innerHTML = 'OFF';
			break;

		case 'velocidad_normal':
			//document.getElementById("span_velocidad").className = 'badge badge-warning';
			document.getElementById("span_velocidad").innerHTML = 'NORMAL';
			break;

		case 'velocidad_rapido':
			//document.getElementById("span_velocidad").className = 'badge badge-danger';
			document.getElementById("span_velocidad").innerHTML = 'RAPIDO';
			break;

		default:
			break;

	}

	//armar string de tiempo
	var d = new Date();
	var time = d.getHours() + ":" + d.getMinutes() + ":" + d.getSeconds();

	//obtener referencia a la tabla
	var table = document.getElementById("lista_historial");

	//crear fila para la tabla
	var row = table.insertRow(0);

	//crear celdas para la fila
	var cell1 = row.insertCell(0);
	var cell2 = row.insertCell(1);
	var cell3 = row.insertCell(2);

	//insertar texto a las celdas
	cell1.innerHTML = llamado;
	cell2.innerHTML = document.getElementById("span_velocidad").innerHTML.toLowerCase();
	cell3.innerHTML = time;

	//llamado por ajax a flask
	$.ajax({
		url: '/'.concat(llamado)
	});

}
