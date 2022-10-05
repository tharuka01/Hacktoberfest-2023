from datetime import datetime
from dateutil import relativedelta
# pip install python-dateutil

print('Example of input: 5/10/2022')
start_date = input('Please enter first date in format %d/%m/%Y: ')
end_date = input('Please enter second date in format %d/%m/%Y: ')

# convert string to date object
d1 = datetime.strptime(start_date, "%d/%m/%Y")
d2 = datetime.strptime(end_date, "%d/%m/%Y")

# find delta as total amount of days
delta = d2 - d1
print(f'The difference is {delta.days} days')

# find delta in years + months + days
deltaRelative = relativedelta.relativedelta(d2, d1)
print(f'The difference is {deltaRelative.years} years, {deltaRelative.months} months, {deltaRelative.days} days.')