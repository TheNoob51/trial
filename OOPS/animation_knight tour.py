import matplotlib.pyplot as plt
import matplotlib.animation as animation
import numpy as np

# Chessboard dimensions
N = 8

# Moves for the knight
xMoves = [2, 1, -1, -2, -2, -1, 1, 2]
yMoves = [1, 2, 2, 1, -1, -2, -2, -1]

# Check if a move is valid
def is_valid_move(x, y, board):
    return 0 <= x < N and 0 <= y < N and board[x][y] == -1

# Count the degree of a square (number of onward moves)
def count_degree(x, y, board):
    count = 0
    for i in range(8):
        nx, ny = x + xMoves[i], y + yMoves[i]
        if is_valid_move(nx, ny, board):
            count += 1
    return count

# Find the next move using Warnsdorff's heuristic
def next_move(x, y, board):
    min_degree = 9
    next_x, next_y = -1, -1

    for i in range(8):
        nx, ny = x + xMoves[i], y + yMoves[i]
        if is_valid_move(nx, ny, board):
            degree = count_degree(nx, ny, board)
            if degree < min_degree:
                min_degree = degree
                next_x, next_y = nx, ny
    return next_x, next_y

# Solve the Knight's Tour using Warnsdorff's Algorithm
def knight_tour_warnsdorff():
    board = [[-1 for _ in range(N)] for _ in range(N)]
    board[0][0] = 0  # Starting position
    x, y = 0, 0
    path = [(x, y)]

    for move_count in range(1, N * N):
        nx, ny = next_move(x, y, board)
        if nx == -1 or ny == -1:
            return None, None  # No solution found
        board[nx][ny] = move_count
        x, y = nx, ny
        path.append((x, y))

    return board, path

# Visualize the Knight's Tour
def visualize_tour(path):
    fig, ax = plt.subplots()
    ax.set_xlim(-0.5, N - 0.5)
    ax.set_ylim(-0.5, N - 0.5)
    ax.set_xticks(range(N))
    ax.set_yticks(range(N))
    ax.grid(True)
    ax.set_aspect('equal')

    knight, = ax.plot([], [], 'o', color='brown', markersize=15, label="Knight")
    trail, = ax.plot([], [], color='blue', linewidth=2, label="Trail")
    crosses = []
    step_text = ax.text(0.02, 1.02, '', transform=ax.transAxes, fontsize=12, color='black', va='bottom')

    # Legend placement at the top
    ax.legend(loc="lower center", bbox_to_anchor=(0.5, 1.05), ncol=3)

    # Animation controls
    play = True
    speed = 500  # Initial speed in milliseconds

    def init():
        knight.set_data([], [])
        trail.set_data([], [])
        for cross in crosses:
            cross.remove()
        crosses.clear()
        step_text.set_text('')
        return knight, trail, step_text

    def update(frame):
        nonlocal crosses
        if frame > 0:
            prev_x, prev_y = path[frame - 1]
            cross, = ax.plot(prev_y, N - 1 - prev_x, 'x', color='red', markersize=10)
            crosses.append(cross)

        x, y = path[frame]
        knight.set_data(y, N - 1 - x)  # Flip y-axis for board representation

        trail_x = [p[1] for p in path[:frame + 1]]
        trail_y = [N - 1 - p[0] for p in path[:frame + 1]]
        trail.set_data(trail_x, trail_y)

        step_text.set_text(f'Steps: {frame + 1}')
        return knight, trail, step_text, *crosses

    ani = animation.FuncAnimation(fig, update, frames=len(path), init_func=init, blit=True, interval=speed, repeat=False)

    # Custom toolbar
    def on_pause(event):
        nonlocal play
        play = False
        ani.event_source.stop()

    def on_play(event):
        nonlocal play
        if not play:
            play = True
            ani.event_source.start()

    def on_speed(event):
        nonlocal speed
        speed = int(event)
        ani.event_source.interval = speed

    from matplotlib.widgets import Button, Slider

    ax_pause = plt.axes([0.1, 0.01, 0.1, 0.04])
    ax_play = plt.axes([0.25, 0.01, 0.1, 0.04])
    ax_speed = plt.axes([0.4, 0.01, 0.3, 0.04])

    btn_pause = Button(ax_pause, 'Pause')
    btn_pause.on_clicked(on_pause)

    btn_play = Button(ax_play, 'Play')
    btn_play.on_clicked(on_play)

    slider_speed = Slider(ax_speed, 'Speed', 100, 2000, valinit=speed)
    slider_speed.on_changed(on_speed)

    plt.show()

# Run the Knight's Tour and visualize
board, path = knight_tour_warnsdorff()
if path:
    visualize_tour(path)
else:
    print("No solution found!")
