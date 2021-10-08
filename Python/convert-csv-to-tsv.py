import pandas as pd


#$ Read a csv file and return
def read_csv(file_name):
    return pd.read_csv(file_name)

#$ Take in contents of csv file and return a tsv file
def convert_csv_to_tsv(csv_file):
    return csv_file.to_csv(sep='\t', index=False)

#$ Test the code
if __name__ == '__main__':
    csv_file = read_csv('test.csv')
    tsv_file = convert_csv_to_tsv(csv_file)
    print(tsv_file)