#coding=utf-8
#!/usr/bin/env python
import datetime,time,os
import turtle as t
t.bgcolor("#d3dae8")
t.setup(1000, 800)
def penmove(a,b):#画笔移动到坐标a,b
    t.penup()
    t.goto(a, b)
    t.pendown()
penmove(-450,300)
t.write("离今年四级考试还有：", font=("博洋行书二", 30))
while 1:
    spring=datetime.datetime(2020,12,12,9,0,0)   #春节日期
    today=datetime.datetime.now()       #今天是几月几号
    day=(spring-today).days         #得到还有几天
    second=(spring-today).seconds       #得到还有几秒
    sec=second%60               #根据秒数得到还有几秒
    minute=second/60%60     #根据秒得到分钟数
    hour=second/60/60            #根据秒数得到小时
    if hour>24:
        hour=hour-24    #如果超过24小时，就要算超过1天，所以要减去24
    penmove(-396,-38)
    t.write("%d天%d小时%d分钟%d秒"  %(day,hour,minute,sec), font=("博洋行书二", 60))
    time.sleep(1)
    t.undo()
