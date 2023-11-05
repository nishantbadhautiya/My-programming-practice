from django.shortcuts import render
from django.http import HttpResponse

# Create your views here.
def index(request):
    # return HttpResponse("<html><body><div style = 'color: red; text-align : center'> This is a <i> <b> page</b> </i></div></body></html>")

    return render(request, "index.html")

def contact(request):
    return render(request, "contact.html")
    # return HttpResponse("This is a contact Page")

def services(request):
    return render(request, "services.html")
    # return HttpResponse("This is a services Page")

def about(request):
    return render(request, "about.html")
    # return HttpResponse("This is a about page")
