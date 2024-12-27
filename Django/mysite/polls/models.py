from django.db import models
import datetime
from django.utils import timezone

class Questions(models.Model):
    question_text = models.CharField(max_length=100)
    pub_date = models.DateTimeField("date published")
    def __str__(self):
        return self.question_text
    
    def WAS_PUBLISHED_RECENTRY(self):
        return self.pub_date >= timezone.now() - datetime.timedelta(days=1)


class Choices(models.Model):
    question = models.ForeignKey(Questions,on_delete=models.CASCADE)
    choice_text = models.CharField(max_length=100)
    vote = models.IntegerField(default=0)

    def __str__(self):
        return self.choice_text
    



