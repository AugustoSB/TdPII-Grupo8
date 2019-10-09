from flask import Flask, render_template
import requests

app = Flask(__name__)





@app.route('/')
def principal():
	return render_template('pag.html')

@app.route('/walk_forward')
def rutina_bend():
	try:
		requests.get('192.168.4.1/walk_forward', timeout=0.1)
	except:
		pass
	return render_template('pag.html')

@app.route('/walk_backward')
def rutina_bend():
	try:
		requests.get('192.168.4.1/walk_backward', timeout=0.1)
	except:
		pass
	return render_template('pag.html')

@app.route('/turn_left')
def rutina_bend():
	try:
		requests.get('192.168.4.1/turn_left', timeout=0.1)
	except:
		pass
	return render_template('pag.html')

@app.route('/turn_right')
def rutina_moonwalk():
	try:
		requests.get('192.168.4.1/turn_right', timeout=0.1)
	except:
		pass
	return render_template('pag.html')

@app.route('/moonwalk')
def rutina_bend():
	try:
		requests.get('192.168.4.1/moonwalk', timeout=0.1)
	except:
		pass
	return render_template('pag.html')

@app.route('/bend')
def rutina_bend():
	try:
		requests.get('192.168.4.1/bend', timeout=0.1)
	except:
		pass
	return render_template('pag.html')

@app.route('/shake_leg')
def rutina_bend():
	try:
		requests.get('192.168.4.1/shake_leg', timeout=0.1)
	except:
		pass
	return render_template('pag.html')

@app.route('/crusaito')
def rutina_bend():
	try:
		requests.get('192.168.4.1/crusaito', timeout=0.1)
	except:
		pass
	return render_template('pag.html')

@app.route('/flapping')
def rutina_bend():
	try:
		requests.get('192.168.4.1/flapping', timeout=0.1)
	except:
		pass
	return render_template('pag.html')

@app.route('/swing')
def rutina_bend():
	try:
		requests.get('192.168.4.1/swing', timeout=0.1)
	except:
		pass
	return render_template('pag.html')

@app.route('/tiptoe_swing')
def rutina_bend():
	try:
		requests.get('192.168.4.1/tiptoe_swing', timeout=0.1)
	except:
		pass
	return render_template('pag.html')

@app.route('/jitter')
def rutina_bend():
	try:
		requests.get('192.168.4.1/jitter', timeout=0.1)
	except:
		pass
	return render_template('pag.html')





if __name__ == '__main__':
	app.run(host='0.0.0.0')
