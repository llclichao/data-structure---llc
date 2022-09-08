gzbz=eval(input("工资标准"))
gzr=eval(input("工作日工作时间"))
xxr=eval(input("休息日工作时间"))
if(gzr<=40):
    dollar_gzr=gzr*gzbz
elif(gzr>40):
    dollar_gzr=40*gzbz+(gzr-40)*gzbz*1.5
if(xxr<=4):
    dollar_xxr=gzbz*2*xxr
elif(xxr>4):
    dollar_xxr=gzbz*4*2+(xxr-4)*3*gzbz
gz=dollar_gzr+dollar_xxr
print("工资{:.2f}".format(gz))



#某公司按小时计费工资。规定每周5个工作日，每天工作8小时。工作日超时工作工资为正常工资的1.5倍。休息日工资，4小时内为正常工资的2倍，超过4小时的部分为正常工资的3倍。
#输入每小时工资，员工每周的工作日工作小时数和休息日工作小时数，计算其该周工资
#例如每小时工资30元。工作日50小时，休息日8小时，其工资为2250.00元