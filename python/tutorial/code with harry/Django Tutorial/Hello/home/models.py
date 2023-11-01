from django.db import models

# Create your models here.
class Contact(models.Model): #Contact is a table
    name = models.CharField(max_length=122)  # name is a column
    email = models.CharField(max_length=122)
    phone = models.CharField(max_length=12)
    desc = models.TextField()
    date = models.DateField()

    def __str__(self):
        return self.name
    
    

#1.  python manage.py makemigrations  # i did change in models.py so create a file of those changes (create change and store in a file)
#    output will after run this command will be ---->  No changes detected
#2.  Register your models in home/admin.py
#3.  INSTALLED_APPS = ['home']  # make the change in setting.py and home is the name of my app 
#4.  run this command on terminal ---- > python manage.py makemigrations
#5.  make the table using this command --->  python manage.py migrate  (apply the pending changes created by makemigrations)
