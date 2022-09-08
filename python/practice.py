ll = eval(input("流量"))
thsj = eval(input("通话时间"))
start_ll = 30
start_thsj = 500
dollar_ll = 0
dollar_thsj = 0
if (ll <= start_ll):
    dollar_ll = 0
elif(ll <= (start_ll+3)):
    dollar_ll=(ll-30)*5
else:
    dollar_ll=15+(ll-33)*3
if(thsj<=start_thsj):
    dollar_thsj=0
if(thsj>start_thsj):
    dollar_thsj=0.15*(thsj-500)
all_sum=dollar_thsj+dollar_ll+128
print("费用{:.2f}".format(all_sum))
#通话超出时间，按0.15元每分钟计算。
#流量超出后，5元1GB.满15元后，按照3元1G进行计费。
