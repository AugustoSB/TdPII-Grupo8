from flask import Flask, render_template
import requests



app = Flask(__name__)



@app.route('/')
def principal():
	try:
		requests.get('http://github.com', timeout=0.1)
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



if __name__ == '__main__':
	app.run(host='0.0.0.0')
