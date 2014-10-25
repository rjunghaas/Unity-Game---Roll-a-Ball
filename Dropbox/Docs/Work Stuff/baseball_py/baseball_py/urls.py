from django.conf.urls import patterns, include, url
from django.contrib import admin
admin.autodiscover()

urlpatterns = patterns('',
    # Examples:
    # url(r'^$', 'baseball_py.views.home', name='home'),
    url(r'^players/', include('baseball_py.scrape.urls')),
    url(r'^admin/', include(admin.site.urls)),
)
