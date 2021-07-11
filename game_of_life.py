import numpy as np
import matplotlib.pyplot as plt
np.random.seed(42)

def generate_world(m, n):
    data = np.random.randint(0, 2, size=(m, n), dtype=np.uint8)
    return data
def _make_neighbor_indices():
    d = [slice(None), slice(1, None), slice(0, -1)]
    d2 = [
        (0, 1), (1, 1), (1, 0), (1, -1)
    ]
    out = [None for i in range(8)]
    for i, idx in enumerate(d2):
        x, y = idx
        out[i] = [d[x], d[y]]
        out[7 - i] = [d[-x], d[-y]]
    return out

def _count_neighbors(world, neighbor, neighbor_id):

    neighbor[:, :] = 0
    w = world
    n_id = neighbor_id
    n = neighbor
    for i in range(8):
        n[n_id[i]] += w[n_id[7 - i]]
    return neighbor


def iterate_numpy(world, neighbor):
    w = world
    n = neighbor
    w &= (n == 2)  # alive if it was alive and has 2 neighbors
    w |= (n == 3)  # alive if it has 3 neighbors
    return w
print(_make_neighbor_indices())

world = generate_world(512, 256)
neighbor = np.zeros(world.shape, dtype=np.uint8)
neighbor_id = _make_neighbor_indices()
k = int(input("Введите количество итераций "))

neighbor = _count_neighbors(world, neighbor, neighbor_id)
world = iterate_numpy(world, neighbor)
plt.imshow(world, vmin=0, vmax=2, cmap=plt.cm.gray)
im = None
for i in range(k):
        if i == 0:
            plt.ion()
            im = plt.imshow(world,vmin=0,vmax=2,
                                 cmap=plt.cm.gray)
        else:
            im.set_data(world)

        neighbor = _count_neighbors(world, neighbor, neighbor_id)
        world = iterate_numpy(world, neighbor)
        plt.pause(0.001)
        if i == 1:
            plt.savefig("1st iterattion.png", dpi=500)
        if i == 10:
            plt.savefig("10th iterattion.png", dpi=500)
        if i == 100:
            plt.savefig("100th iterattion.png", dpi=500)

plt.pause(10000)
