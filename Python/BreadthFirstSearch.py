graph = {
  'A' : ['B', 'C'],
  'B' : ['D', 'E'],
  'C' : ['F'],
  'D' : [],
  'E' : ['F', 'G'],
  'F' : ['H'],
  'G' : ['H'],
  'H' : ['G']
}

#list to keep track of visited nodes.
visited = []
#initialize a queue
queue = []

def bfs(visited, graph, node):
  visited.append(node)
  queue.append(node)

  while queue:
    s = queue.pop(0)
    print(s, end= " ")

    for neighbour in graph[s]:
      if neighbour not in visited:
        visited.append(neighbour)
        queue.append(neighbour)

print("hasil penelusuran graf menggunakan BFS: ")
bfs(visited, graph, 'A')
