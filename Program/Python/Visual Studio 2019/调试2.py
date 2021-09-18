import turtle as t
import math as m
import random as r
import time
def drawX(a, i):          #x=a*cos(t),a长轴，b短轴，i为参数t
    angle = m.radians(i)  #radians 弧度
    return a * m.cos(angle)
def drawY(b, i):          #y=b*sint(t).
    angle = m.radians(i)
    return b * m.sin(angle)
def ellipse(a,b,c,d,e,f,g): #a长轴，b短轴，c-d为旋转角度,e正反方向：1正2负,f为y轴高度
   
    if e<2:
        for i in range(c,d):
            x = drawX(a, i)+f
            y = drawY(b, i)+g
            t.goto(x, y)
    elif e>1:
        for i in range(c,d):
            x = drawX(a, -i)
            y = drawY(b, -i)+f
            t.goto(x, y)
def penmove(a,b):#画笔移动到坐标a,b
    t.penup()
    t.goto(a, b)
    t.pendown()
def canle(x,y):#蜡烛
    penmove(x,y)
    t.pencolor("#b1c9e9")
    t.begin_fill()
    t.goto(x-8,y)
    t.goto(x-8,y+50)
    t.goto(x,y+50)
    t.goto(x,y)
    t.goto(x-8, y)
    t.fillcolor("#b1c9e9")
    t.end_fill()
    t.pencolor("white")#斜白线
    t.pensize(2)
    for i in range(1, 6):
        t.goto(x, y + 10 * i)
        t.pu()
        t.goto(x-8, y + 10 * i)
        t.pd()
    t.pu()#灯芯
    t.goto(x-4, y+50)
    t.pd()
    t.goto(x-4, y+60)
    t.pensize(1)
    t.pu()
    t.goto(x, y+70)
    t.pd()
    t.pencolor("#f1add1")
    t.begin_fill()#火苗
    ellipse(4,10,0,360,1,x-4,y+70)
    t.fillcolor("#f1add1")
    t.end_fill()
def random(n,x1,x2,y1,y2):#点数，x范围，y范围
    for i in range(n):
        t.pu()
        x = r.randint(x1, x2)
        y = r.randint(y1, y2)
        t.goto(x, y)
        t.pd()
        t.dot(r.randint(3, 5), color[r.randint(0, 7)])
t.bgcolor("#d3dae8")
#t.bgcolor("#d3dae8")
#t.setup(1000, 800)
#t.pencolor("#DDA0DD")
#penmove(-132,-100)
#t.write("生日快乐", font=("中山行书百年纪念版", 50))
#penmove(-135,100)
#t.write("生日快乐", font=("叶根友行书繁", 50))
#penmove(-234,200)
#t.write("Happy Birthday", font=("PassionsConflictROB", 50))
#penmove(-175,0)
#t.write("Happy Birthday", font=("Love", 50))
#penmove(-210,-200)
#t.write("世界上美好的东西不太多", font=("博洋行书二", 30))
#penmove(-230,-250)
#t.write("立秋傍晚从河对岸吹来的风", font=("博洋行书二", 30))
#penmove(-210,-300)
#t.write("和二十岁笑起来要命的你", font=("博洋行书二", 30))

t.done()
