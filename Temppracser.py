import pandas as pd
import json

rawDF=pd.read_csv('C:\\Users\\tusha\\OneDrive\\Desktop\\Pattern Recognition (Time Series)\\TempData.csv')

dates=[]
values=[]

for i in rawDF.created_at:
    dates.append(i)

for i in rawDF.vital_values:
    rawJson=json.loads(i)
    values.append(rawJson['value'])

mapping=list(zip(dates,values))
processed_df = pd.DataFrame(mapping,columns =['timestamp', 'value'])

processed_df.to_csv("D:\Work\Pattern Recognition (Time Series)\processed_temp.csv", mode = 'w', index=False)

processed_df=pd.read_csv("D:\Work\Pattern Recognition (Time Series)\processed_temp.csv")
processed_df['timestamp']=pd.to_datetime(processed_df['timestamp'])

'''from pycaret.anomaly import *
s = setup(processed_df, session_id = 123)

clusterModel = create_model('mcd')
cluster_results = assign_model(clusterModel)
cluster_results.to_csv('D:\Work\Pattern Recognition (Time Series)\output_temp.csv', encoding='utf-8', index=False)

print(cluster_results[cluster_results['Anomaly'] == 1].head())'''
