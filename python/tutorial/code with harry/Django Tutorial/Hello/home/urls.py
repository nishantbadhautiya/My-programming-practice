from django.contrib import admin
from django.urls import path
from . import views
urlpatterns = [
    path("", views.index, name = 'home'), # name to the URL Pattern. This name can be used in your templates or views to create links or references to this URL pattern.
    path("about", views.about, name = 'about'),
    path("services", views.services, name = 'services'),
    path("contact", views.contact, name = 'contact')
]
