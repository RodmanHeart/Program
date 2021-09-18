import turtle as t
import os
def penmove(a,b):
    t.penup()
    t.goto(a, b)
    t.pendown()
os.system('博洋行书二.ttf')
os.system('博洋行书二.ttf')
os.system('中山行书百年纪念版.ttf')
os.system('叶根友行书.ttf')
os.system('PassionsConflictROB.ttf')
os.system('LoveLightROB.ttf')
t.bgcolor("#d3dae8")
t.setup(1000, 800)
t.pencolor("#DDA0DD")
penmove(-350,0)
t.write("如何在别人电脑自动安装这个字体", font=("博洋行书二", 30))
t.done()
