import turtle as t
import math as m
import random as r
import os
os.system('博洋行书二.ttf')
os.system('PassionsConflictROB.ttf')
def drawX(a, i):          #x=a*cos(t),a长轴，b短轴，i为参数t
    angle = m.radians(i)  #radians 弧度
    return a * m.cos(angle)
def drawY(b, i):          #y=b*sint(t).
    angle = m.radians(i)
    return b * m.sin(angle)
def ellipse(a,b,c,d,e,f,g): #a长轴，b短轴，c-d为旋转角度,e正反方向：1正2负,f为x轴平移,g为轴平移
   
    if e<2:
        for i in range(c,d):
            x = drawX(a, i)+f
            y = drawY(b, i)+g
            t.goto(x, y)
    elif e>1:
        for i in range(c,d):
            x = drawX(a, -i)+f
            y = drawY(b, -i)+g
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
#设置背景，窗口位置，大小
t.bgcolor("#d3dae8")
#t.speed(10)
t.setup(1000, 800)
#画笔移动到150.0，白色
penmove(150,0)
t.pencolor("white")
#填充椭圆1
t.begin_fill()
ellipse(150,60,0,360,1,0,0)
t.fillcolor("#fef5f7")
t.end_fill()
#填充2
t.begin_fill()
ellipse(150,70,0,180,2,0,0)
ellipse(150,60,180,360,1,0,0)
t.fillcolor("#d3d3d3")#f2d7dd
t.end_fill()
#第一层蛋糕,蓝色底座
penmove(120,0)
t.begin_fill()
t.goto(120,70)
ellipse(120,48,0,180,1,0,70)
t.goto(-120,0)
ellipse(120,48,180,360,1,0,0)
t.fillcolor("#cbd9f9")
t.end_fill()
#第一层蛋糕，红色底，白色奶油
t.begin_fill()
ellipse(120,48,0,360,1,0,70)
t.fillcolor("#fff0f3") #奶油色
t.end_fill()
penmove(110,70)
t.pencolor("#fff9fb") #第一层奶油上面的白色
t.begin_fill()
ellipse(110,44,0,360,1,0,70)
t.fillcolor("#fff9fb")
t.end_fill()
penmove(120,0)
t.begin_fill()
t.pencolor("#ffa79d")#底边红色
ellipse(120,48,0,180,2,0,10)
ellipse(120,48,180,360,1,0,0)
t.fillcolor("#ffa79d")
t.end_fill()
penmove(120,70)#奶油
t.begin_fill()
t.pensize(4)
t.pencolor("#fff0f3")
for i in range(1800):
    x = drawX(120, 0.1 * i)
    y = drawY(-18, i) + 10
    t.goto(x, y)
t.goto(-120,70)
t.pensize(1)
ellipse(120,48,180,360,1,0,70)
t.fillcolor("#fff0f3")
t.end_fill()
#第二层蛋糕，褐色底座
penmove(80,70)
t.begin_fill()
t.pencolor("#6f3732")
t.goto(80,120)
ellipse(80,32,0,180,1,0,120)
t.goto(-80,70)
ellipse(80,32,180,360,1,0,70)
t.fillcolor("#6f3732")
t.end_fill()
#第二蛋糕，奶油
penmove(80,120)
t.pencolor("#ffaaa0")
t.begin_fill()
ellipse(80,32,0,360,1,0,120)
t.fillcolor("#ffaaa0")
t.end_fill()
penmove(70,120)
t.pencolor("#ffc3be")
t.begin_fill()
ellipse(70,28,0,360,1,0,120)
t.fillcolor("#ffc2be")
t.end_fill()
penmove(80,120)
t.begin_fill()
t.pensize(3)
t.pencolor("#ffaaa0")
for i in range(1800):
    x = drawX(80, 0.1 * i)
    y = drawY(-12, i) + 80
    t.goto(x, y)
t.goto(-80, 120)
t.pensize(1)
ellipse(80,32,180,360,1,0,120)
t.fillcolor("#ffaaa0")
t.end_fill()
##5根蜡烛
canle(64,120)
canle(-56,120)
canle(34,108)
canle(-26,108)
canle(4,130)
#随机点
color = ["#e28cb9", "#805a8c", "#eaa989", "#6e90b7", "#b8b68f", "#e174b5", "#cf737c", "#7c8782"]
random(20,-120,-60,-25,30)
random(20,  -60, 60,-25,30)
random(20,  60,120,-25,30)
random(20, -90,0, -35,10)
random(20,  0,90, -35,10)
random(20, -80, 0,  60,90)
random(20,   0,80,  60,90)
random(15, -50, 0,  45,70)
random(15,   0,50,  45,70)
random(15,-500,-250,120,300)
random(30, -250,250,120,300)
random(15, 250,500,120,300)
penmove(-185,230)
t.pencolor("#fd85c1")
t.write("Happy Birthday", font=("PassionsConflictROB", 45))
penmove(-370,-250)
t.pencolor("#e14949")
t.write("祝", font=("博洋行书二", 70))
penmove(-285,-250)
t.write("你", font=("博洋行书二", 70))
penmove(-201,-250)
t.write("快", font=("博洋行书二", 70))
penmove(-116,-250)
t.write("乐", font=("博洋行书二", 70))
penmove(-12,-250)
t.write(",", font=("博洋行书二", 70))
penmove(42,-250)
t.write("不", font=("博洋行书二", 70))
penmove(126,-250)
t.write("止", font=("博洋行书二", 70))
penmove(201,-250)
t.write("生", font=("博洋行书二", 70))
penmove(276,-250)
t.write("日", font=("博洋行书二", 70))
penmove(390,-395)
t.pencolor("#c3a7e2")
t.write("王心瑞", font=("博洋行书二", 20))

t.done()
