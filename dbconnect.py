#connect database
import mysql.connector

try:

    conn = mysql.connector.connect(user='root', password='root',host='localhost', port=3306, database = 'college')

    if(conn.is_connected()):

        print('connected')

except:

    print('unable to connect')

sql = 'create table xyz('

myc = conn.cursor()

myc.execute(sql)

for d in myc:

    print(d)

myc.close()

conn.close()