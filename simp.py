from sympy import symbols, exp, diff, solve
# Definir las variables y constantes
T, C0, C1, M, b0, b1, E = symbols('T C0 C1 M b0 b1 E')
# Definir la ecuación original
eq = (C0 * M**b0 * exp(-E / T) * C1 * M**b1) / (C0 * M**b0 * exp(-E / T) + C1 * M**b1)
# Calcular la derivada parcial con respecto a T
dT_eq = diff(eq, T)
# Intentar resolver la ecuación dT_eq = 0 para T
solutions = solve(dT_eq, T)
# Imprimir las soluciones
print("Las soluciones son:", solutions)
