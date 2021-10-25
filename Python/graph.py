class Graph:
    def __init__(self,edges):
        self.edges=edges
        self.dict_graph={}
        for start,end in edges:
            if start in self.dict_graph:
                self.dict_graph[start].append(end)
            else:
                self.dict_graph[start]=[end]
        print(self.dict_graph)

    def possible_path(self,start,end,path=[]):
        path=path+[start]
        if start==end:
            return [path]
        if start not in self.dict_graph:
            return []
        paths=[]
        for node in self.dict_graph[start]:
            if node not in path:
                new_path=self.possible_path(node,end,path)
                # print(new_path)
                for p in new_path:
                    paths.append(p)
        return paths

    def shortest_path(self,start,end,path=[]):
        path=path+[start]
        if start==end:
            return path
        if start not in self.dict_graph:
            return None
        shortestpath=None
        
        for node in self.dict_graph[start]:
            if node not in path:
                sp=self.shortest_path(node,end,path)
                print('sp',sp)
                if sp:
                    if shortestpath is None or len(sp)<len(shortestpath):
                        shortestpath=sp
        return shortestpath



if __name__=='__main__':
    routes = [
        ("Mumbai", "Paris"),
        ("Mumbai", "Dubai"),
        ("Paris", "Dubai"),
        ("Paris", "New York"),
        ("Dubai", "New York"),
        ("New York", "Toronto"),
    ]
    route_graph = Graph(routes)
    
    print('All possible paths',route_graph.possible_path('Mumbai','New York'))
    print('Shortest paths',route_graph.shortest_path('Mumbai','New York'))
    
