import pygeometry as pyg

t1 = pyg.vector2(1, 2)
t2 = pyg.vector2(1, 3)

print (t1 + t2).x, (t1 + t2).y


print pyg.dot_in_line(t1, t2, pyg.vector2(2, 3))