from django.db import models
from django.contrib import admin

class player(models.Model):
	name = models.CharField(max_length = 50)
	number = models.IntegerField()
	
class playerPostAdmin(admin.ModelAdmin):
	list_display = ('name', 'number')

admin.site.register(player)