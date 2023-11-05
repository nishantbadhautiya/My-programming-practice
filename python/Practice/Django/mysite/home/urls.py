from django.contrib import admin
from django.urls import path, include
from . import views


urlpatterns = [
    path("", views.index, name = "index"),
    path("contact", views.contact, name = "contact"),
    path("services", views.services, name = "services"),
    path("about", views.about, name = "about")
]
