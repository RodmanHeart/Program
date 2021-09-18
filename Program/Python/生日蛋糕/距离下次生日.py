import turtle,datetime
def drawGap():
    turtle.penup()
    turtle.fd(5)
def drawLine(draw):
    drawGap()
    turtle.pendown() if draw else turtle.penup()
    turtle.fd(40)
    drawGap()
    turtle.right(90)
def drawDigit(d):  #绘制晶体管
    drawLine(True) if d in [2,3,4,5,6,8,9] else drawLine(False)
    drawLine(True) if d in [0,1,3,4,5,6,7,8,9] else drawLine(False)
    drawLine(True) if d in [0,2,3,5,6,8,9] else drawLine(False)
    drawLine(True) if d in [0,2,6,8] else drawLine(False)
    turtle.left(90)
    drawLine(True) if d in [0,4,5,6,8,9] else drawLine(False)
    drawLine(True) if d in [0,2,3,5,6,7,8,9] else drawLine(False)
    drawLine(True) if d in [0,1,2,3,4,7,8,9] else drawLine(False)
    turtle.left(180)
    turtle.penup()
    turtle.fd(20)
def drawDate(date):
    turtle.setup(800, 350, 200, 200)
    turtle.penup()
    turtle.fd(-300)
    turtle.pensize(5)
    ff="".join(date)
    for i in range(len(ff)):
        turtle.pencolor("red")
        if(ff[i]=='-'):
            turtle.write('年',font=("Arial",18,"normal"))
            turtle.pencolor("green")
            turtle.fd(40)
        elif(ff[i]=='='):
            turtle.write('月',font=("Arial",18,"normal"))
            turtle.pencolor("blue")
            turtle.fd(40)
        elif(ff[i]=='+'):
            turtle.write('日',font=("Arial",18,"normal"))
        else:
            drawDigit(eval(ff[i]))
    turtle.done()
LeapYear=[31,29,31,30,31,30,31,31,30,31,30,31]
NoLeapYear=[30,28,31,30,31,30,31,31,30,31,30,31]
def judgeIsLeap(year):       #判断为闰年还是普通年
    return (( LeapYear) if year % 400 == 0 else ( NoLeapYear)) if ("世纪年" if year % 100 == 0 else "普通年") == "世纪年" else (( LeapYear) if year % 4 == 0 else ( NoLeapYear))
def lateDatetime(birthdayYear,birthdayMonth,birthdayDate):  #自定义算法计算现在距离下一次生日还有多少天，充分考虑闰年及普通年的情况
    nowYear=int(datetime.datetime.now().strftime('%Y'))
    nowMonth=int(datetime.datetime.now().strftime('%m'))
    nowDate=int(datetime.datetime.now().strftime('%d'))
    if (nowYear == birthdayYear and nowMonth <= birthdayMonth):
        yearDifferenceValue = 0
        monthDifferenceValue = birthdayMonth - nowMonth
        dateDifferenceValue = birthdayDate - nowDate
        if(dateDifferenceValue<0):
            monthDifferenceValue-=1
            dateDifferenceValue=birthdayDate+30 - nowDate
    else:
        x=0
        for i in range(nowMonth-1, 12):
            if (nowMonth-1 == i):
                x = judgeIsLeap(nowYear)[i] - nowDate
            x += judgeIsLeap(birthdayYear)[i]
        for j in range(birthdayMonth-1):
            x += judgeIsLeap(birthdayYear)[j]
        x+=birthdayDate
        yearDifferenceValue = 0
        monthDifferenceValue = int(x / 30)
        dateDifferenceValue = x % 30
    if(len(str(yearDifferenceValue))==1):
        yearDifferenceValue="0"+str(yearDifferenceValue)
    if(len(str(monthDifferenceValue))==1):
        monthDifferenceValue="0"+str(monthDifferenceValue)
    if(len(str(dateDifferenceValue))==1):
        dateDifferenceValue="0"+str(dateDifferenceValue)
    return str(yearDifferenceValue)+"-",str(monthDifferenceValue)+"=",str(dateDifferenceValue)+"+"
def main(): #定义主方法
    birthdayYear,birthdayMonth,birthdayDate = eval(input("请依次输入你的生日，年，月，日，用逗号隔开，不要加0"))
    drawDate(list(lateDatetime(birthdayYear,birthdayMonth,birthdayDate)))
if __name__ == '__main__': 
    main()
