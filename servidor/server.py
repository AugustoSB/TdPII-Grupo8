from flask import Flask, render_template
import requests

app = Flask(__name__)





@app.route('/')
def principal():
	return render_template('pag.html')

@app.route('/walk_forward')
def rutina_walk_forward():
	try:
		requests.get('192.168.4.1/walk_forward', timeout=0.1)
	except:
		pass
	return render_template('pag.html')

@app.route('/walk_backward')
def rutina_walk_backward():
	try:
		requests.get('192.168.4.1/walk_backward', timeout=0.1)
	except:
		pass
	return render_template('pag.html')

@app.route('/turn_left')
def rutina_turn_left():
	try:
		requests.get('192.168.4.1/turn_left', timeout=0.1)
	except:
		pass
	return render_template('pag.html')

@app.route('/turn_right')
def rutina_turn_right():
	try:
		requests.get('192.168.4.1/turn_right', timeout=0.1)
	except:
		pass
	return render_template('pag.html')

@app.route('/moonwalk')
def rutina_moonwalk():
	r = requests.get('http://192.168.4.1/moonwalk', timeout=1)
	return render_template('pag.html')

@app.route('/bend')
def rutina_bend():
	r = requests.get('http://192.168.4.1/bend', timeout=1)
	return render_template('pag.html')

@app.route('/shake_leg')
def rutina_shake_leg():
	try:
		requests.get('192.168.4.1/shake_leg', timeout=0.1)
	except:
		pass
	return render_template('pag.html')

@app.route('/crusaito')
def rutina_crusaito():
	try:
		requests.get('192.168.4.1/crusaito', timeout=0.1)
	except:
		pass
	return render_template('pag.html')

@app.route('/flapping')
def rutina_flapping():
	r = requests.get('http://192.168.4.1/flapping', timeout=1)
	return render_template('pag.html')

@app.route('/swing')
def rutina_swing():
	try:
		requests.get('192.168.4.1/swing', timeout=0.1)
	except:
		pass
	return render_template('pag.html')

@app.route('/tiptoe_swing')
def rutina_tiptoe_swing():
	try:
		requests.get('192.168.4.1/tiptoe_swing', timeout=0.1)
	except:
		pass
	return render_template('pag.html')

@app.route('/jitter')
def rutina_jitter():
	r = requests.get('http://192.168.4.1/jitter', timeout=1)
	return render_template('pag.html')





if __name__ == '__main__':
	app.run(host='0.0.0.0')
