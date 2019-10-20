from flask import Flask, render_template
import requests

app = Flask(__name__)





@app.route('/')
def principal():
	return render_template('pag.html')

@app.route('/walk_forward')
def rutina_walk_forward():
	try:
		requests.get('http://192.168.4.1/walk_forward', timeout=0.1)
	except:
		pass
	return render_template('pag.html')

@app.route('/walk_backward')
def rutina_walk_backward():
	try:
		requests.get('http://192.168.4.1/walk_backward', timeout=0.1)
	except:
		pass
	return render_template('pag.html')

@app.route('/turn_left')
def rutina_turn_left():
	try:
		requests.get('http://192.168.4.1/turn_left', timeout=0.1)
	except:
		pass
	return render_template('pag.html')

@app.route('/turn_right')
def rutina_turn_right():
	try:
		requests.get('http://192.168.4.1/turn_right', timeout=0.1)
	except:
		pass
	return render_template('pag.html')

@app.route('/moonwalk')
def rutina_moonwalk():
	try:
		r = requests.get('http://192.168.4.1/moonwalk', timeout=1)
	except:
		pass
	return render_template('pag.html')

@app.route('/bend')
def rutina_bend():
	try:
		r = requests.get('http://192.168.4.1/bend', timeout=1)
	except:
		pass
	return render_template('pag.html')

@app.route('/shake_leg')
def rutina_shake_leg():
	try:
		requests.get('http://192.168.4.1/shake_leg', timeout=0.1)
	except:
		pass
	return render_template('pag.html')

@app.route('/crusaito')
def rutina_crusaito():
	try:
		requests.get('http://192.168.4.1/crusaito', timeout=0.1)
	except:
		pass
	return render_template('pag.html')

@app.route('/flapping')
def rutina_flapping():
	try:
		r = requests.get('http://192.168.4.1/flapping', timeout=1)
	except:
		pass
	return render_template('pag.html')

@app.route('/swing')
def rutina_swing():
	try:
		requests.get('http://192.168.4.1/swing', timeout=0.1)
	except:
		pass
	return render_template('pag.html')

@app.route('/tiptoe_swing')
def rutina_tiptoe_swing():
	try:
		requests.get('http://192.168.4.1/tiptoe_swing', timeout=0.1)
	except:
		pass
	return render_template('pag.html')

@app.route('/jitter')
def rutina_jitter():
	try:
		r = requests.get('http://192.168.4.1/jitter', timeout=1)
	except:
		pass
	return render_template('pag.html')

@app.route('/up_down')
def rutina_up_down():
	try:
		r = requests.get('http://192.168.4.1/up_down', timeout=1)
	except:
		pass
	return render_template('pag.html')

@app.route('/happy')
def rutina_happy():
	try:
		r = requests.get('http://192.168.4.1/happy', timeout=1)
	except:
		pass
	return render_template('pag.html')

@app.route('/super_happy')
def rutina_super_happy():
	try:
		r = requests.get('http://192.168.4.1/super_happy', timeout=1)
	except:
		pass
	return render_template('pag.html')

@app.route('/sad')
def rutina_sad():
	try:
		r = requests.get('http://192.168.4.1/sad', timeout=1)
	except:
		pass
	return render_template('pag.html')

@app.route('/victory')
def rutina_victory():
	try:
		r = requests.get('http://192.168.4.1/victory', timeout=1)
	except:
		pass
	return render_template('pag.html')

@app.route('/angry')
def rutina_angry():
	try:
		r = requests.get('http://192.168.4.1/angry', timeout=1)
	except:
		pass
	return render_template('pag.html')

@app.route('/sleeping')
def rutina_sleeping():
	try:
		r = requests.get('http://192.168.4.1/sleeping', timeout=1)
	except:
		pass
	return render_template('pag.html')

@app.route('/fretful')
def rutina_fretful():
	try:
		r = requests.get('http://192.168.4.1/fretful', timeout=1)
	except:
		pass
	return render_template('pag.html')

@app.route('/love')
def rutina_love():
	try:
		r = requests.get('http://192.168.4.1/love', timeout=1)
	except:
		pass
	return render_template('pag.html')

@app.route('/confused')
def rutina_confused():
	try:
		r = requests.get('http://192.168.4.1/confused', timeout=1)
	except:
		pass
	return render_template('pag.html')

@app.route('/fart')
def rutina_fart():
	try:
		r = requests.get('http://192.168.4.1/fart', timeout=1)
	except:
		pass
	return render_template('pag.html')

@app.route('/fail')
def rutina_fail():
	try:
		r = requests.get('http://192.168.4.1/fail', timeout=1)
	except:
		pass
	return render_template('pag.html')





if __name__ == '__main__':
	app.run(host='0.0.0.0')
