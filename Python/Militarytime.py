s=input("Input time in the format 09:09:9PM : ")
s_new=s.split(":")
if "PM" in s_new[2]:
  if s_new[0]=="12":
    s_time=s_new[0]+":"+s_new[1]+":"+s_new[2][0:2]
    print(s_time)
  else :
    s_time=str(int(s_new[0])+12)+":"+s_new[1]+":"+s_new[2][0:2]
    print(s_time)

else :
  if (s_new[0])=="12":
    s_time="00:"+s_new[1]+":"+s_new[2][0:2]
    print(s_time)
  else :
    s_time=s_new[0]+":"+s_new[1]+":"+s_new[2][0:2]
    print(s_time) 
