import tkinter as tk


class EquilateralTriangle:
    def __init__(self, a):
        self.a = a

    def perimeter(self):
        return 3 * self.a

    def area(self):
        return (3 ** 0.5 / 4) * self.a ** 2


def calculate_triangle():
    try:
        side = float(side_entry.get())
        triangle = EquilateralTriangle(side)
        perimeter_label.config(text="Perimeter: {:.2f}".format(triangle.perimeter()))
        area_label.config(text="Area: {:.2f}".format(triangle.area()))
        canvas.delete("all")
        canvas.create_polygon(50, 110, 100, 10, 150, 110, outline="blue", fill="red", width=1)
    except ValueError:
        pass


root = tk.Tk()
root.title("Equilateral Triangle Calculator")

side_label = tk.Label(root, text="Enter side length:")
side_label.pack()
side_entry = tk.Entry(root)
side_entry.pack()

calculate_button = tk.Button(root, text="Calculate", command=calculate_triangle)
calculate_button.pack()

perimeter_label = tk.Label(root, text="")
perimeter_label.pack()
area_label = tk.Label(root, text="")
area_label.pack()

canvas = tk.Canvas(root, width=200, height=150)
canvas.pack()

root.mainloop()
