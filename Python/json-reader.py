import json


#$ Read a json file and return its contents
def read_json(file_name):
    with open(file_name) as json_file:
        data = json.load(json_file)
        return data

#$ Test it out
if __name__ == "__main__":
    data = read_json("example.json")
    print(data)