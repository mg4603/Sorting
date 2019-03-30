import requests;
import json;

client_id = "Gd7ywRKaLHj3VZtFMuWlJBNkSnmO1D6xIFpAVPJq";
client_secret = "h3UKZSTKzMoRpEEIBDmEGqilwOZEIACvKnY0otaw7gQYiipLzpYkTSRQxrIANl6JKo59SW01wSdhYWI1tvY5G2gU7PUCTG4CASvmdBtVnRR76TOsl3A2ucBWdBrxo5tP";
env = "production";

if (client_id.startswith("test")):
    url = "https://test.instamojo.com/oauth2/token/";
    env = "test";

payload = "grant_type=client_credentials&client_id=" + client_id + "&client_secret=" + client_secret;
headers = {
    'content-type': "application/x-www-form-urlencoded",
    'cache-control': "no-cache"
    }

response = requests.request("POST", url, data=payload, headers=headers);
token = env + json.loads(response.text)["access_token"];
print(token);