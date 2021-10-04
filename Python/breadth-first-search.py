#$ Breadth first search 
def bfs(graph, start):
    visited, queue = set(), [start]
    while queue:
        vertex = queue.pop(0)
        if vertex not in visited:
            visited.add(vertex)
            queue.extend(graph[vertex] - visited)
    return visited

#$ Test it out
graph = {'A': set(['B', 'C']),
            'B': set(['A', 'D', 'E']),  # A, D, E
            'C': set(['A', 'F']),  # A, F
            'D': set(['B']),
            'E': set(['B', 'F']),  # B, F
            'F': set(['C', 'E'])}
print(bfs(graph, 'A'))