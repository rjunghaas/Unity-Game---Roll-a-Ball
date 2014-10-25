from django.conf.urls import patterns, url, include
from baseball_py.scrape import views

urlpatterns = patterns('',
	url(r'^index$', views.search, name='search'),
	url(r'^scrape$', views.scrape, name='scrape'),
)
