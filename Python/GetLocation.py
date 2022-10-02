from geopy.extra.rate_limiter import RateLimiter
from geopy.geocoders import Nominatim
import pandas as pd

def get_location(coordinates):
    geolocator = Nominatim(user_agent="user_agent")
    # add rate limit
    reverse = RateLimiter(geolocator.reverse, min_delay_seconds=1)
    state_list = [] # Initialize empty dict
    # create dataframe
    df = pd.DataFrame({"geo_loc"  : coordinates})
    # get location coordinates
    geo_loc  = df.geo_loc.values
    for cord in geo_loc:
        # send request
        location = reverse(cord, addressdetails=True)
        # get state value
        state = location.raw["address"].get("state")
        # store state value
        state_list.append(state)
    # assign back states
    df['states'] = state_list
    return df

user_coordinates = [(19.4, 17.93), (55.54, 93.93),(52.45, 78.93),  (65.54, 67.93),  (47.74, 99.93) ]
print(get_location(user_coordinates))
