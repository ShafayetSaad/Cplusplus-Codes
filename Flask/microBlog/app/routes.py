from flask import render_template
from app import app

@app.route("/")
@app.route("/index")
def index():
	username = "Shafayet"
	user = {"username": "Shafayet Sadi"}
	# return f"Hello, {user['username']}"
	# return user["username"]

	posts = [
		{
			"author": {"username": "John"},
			"body": "The Avengers movie was so cool!"
		},
		{
			"author": {"username": "Susan"},
			"body": "The Batman movie was so dark!"
		}
	]
	# return render_template("index.html", user=user)
	return render_template("index.html", title="Home", user=user, posts=posts)
