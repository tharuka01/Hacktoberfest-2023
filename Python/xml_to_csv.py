# Import libraries
import xml.etree.ElementTree as Xet
import pandas as pd

cols = []
rows = []

# Parsing the XML file
xmlparse = Xet.parse("sample.xml")
root = xmlparse.getroot()

for i in root:
    data = {}
    for col in cols:
        data[col] = i.find(col).text
        rows.append(data)

df = pd.DataFrame(rows, columns=cols)

# Writing dataframe to csv
df.to_csv("output.csv")
