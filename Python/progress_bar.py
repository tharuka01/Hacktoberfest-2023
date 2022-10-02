# import time and tqdm
from time import sleep
from tqdm.auto import tqdm

# creating progress bar
for i in tqdm(range(10000)):
    sleep(0.001)
