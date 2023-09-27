import mysql.connector

try:

    conn = mysql.connector.connect(user='root', password='root',host='localhost', database ='college',port=3306)

    if(conn.is_connected()):

        print('connected')

except:

    print('unable to connect')