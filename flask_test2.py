from flask import Flask, render_template, request

app = Flask(__name__)

@app.route("/form")
def form():
	return render_template('form.html')

@app.route("/form_result", methods=["post"])
def form_result():
	return "こんにちわ、 " + request.form["name"] + " さん。あなたの年齢は " + request.form["age"] + " 歳です。"

if __name__ == "__main__":
	app.run(debug=True, host="127.0.0.1", port=8000)