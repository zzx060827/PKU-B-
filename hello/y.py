import pandas as pd
import matplotlib.pyplot as plt

# 读取CSV文件
data = pd.read_csv('D:\code\StudentsPerformance.csv')

# 显示数据框架的前几行以检查数据
print(data.head())

# 性别分布图
plt.figure(figsize=(8, 6))
data['gender'].value_counts().plot(kind='bar')
plt.title('Gender Distribution')
plt.xlabel('Gender')
plt.ylabel('Count')
plt.show()

# 种族/民族分布图
plt.figure(figsize=(12, 8))
data['race/ethnicity'].value_counts().plot(kind='pie', autopct='%1.1f%%')
plt.title('Race/Ethnicity Distribution')
plt.ylabel('')
plt.show()

# 数学成绩分布图
plt.figure(figsize=(8, 6))
data['math score'].hist(bins=20)
plt.title('Math Score Distribution')
plt.xlabel('Math Score')
plt.ylabel('Frequency')
plt.show()

# 阅读成绩分布图
plt.figure(figsize=(8, 6))
data['reading score'].hist(bins=20)
plt.title('Reading Score Distribution')
plt.xlabel('Reading Score')
plt.ylabel('Frequency')
plt.show()

# 写作成绩分布图
plt.figure(figsize=(8, 6))
data['writing score'].hist(bins=20)
plt.title('Writing Score Distribution')
plt.xlabel('Writing Score')
plt.ylabel('Frequency')
plt.show()