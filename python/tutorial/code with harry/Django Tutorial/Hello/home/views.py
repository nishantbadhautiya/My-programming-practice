from django.shortcuts import render, HttpResponse
from datetime import datetime
from home.models import Contact
from django.contrib import messages

# Create your views here.
def index(request):
    context = {
        "variable1" : "Harry is Great",
        "variable2" : "Rohan is Great"
    }
    messages.success(request, "this is a text message")

    return render(request, 'index.html', context)
    # return HttpResponse("This is a homepage")

def about(request):
    return render(request, 'about.html')
    # return HttpResponse("This is a about page")

def services(request):
    return render(request, 'service.html')
    # return HttpResponse("This is a services page")

def contact(request):
    if(request.method == 'POST'):
        name = request.POST.get('name') # request.POST is a dictionary, .get is method and i picked up 'name' from here
        email = request.POST.get('email')
        phone = request.POST.get('phone')
        desc = request.POST.get('desc')
        contact = Contact(name=name, email=email, phone=phone, desc=desc, date= datetime.today())
        contact.save()
        messages.success(request, "Your message has been sent.")  # The messages framework

    return render(request, 'contact.html')
    # return HttpResponse("This is a contact page")
