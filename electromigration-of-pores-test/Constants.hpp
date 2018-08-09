#ifndef CONSTANTS_HPP
#define CONSTANTS_HPP

// Structure dimensions
#define  NX         30
#define  NY         30
#define  NZ         30

#define  SIZEX      5
#define  SIZEY      5
#define  SIZEZ      5

#define  Z          12                    // The number of coordination sphere

#define  E_V        1.60217656535e-19     // Electronvolt constant (eV->J)
#define  K_B        8.617e-5              // Boltzmann constant (eV/K)
#define  NYU_0      1.0e+13               // Debye frequency
#define  E_SADDLE   0                     // The saddle point energy
#define  A_0        0.01                  // The initial artificial noise
#define  DT         1.0e-15               // Time step
#define  C_INIT     0.85                  // Initial distribution

#define  Z_A       -15                    // The effective charge (from -10 to -30)
#define  E_X        1.0e+2                // Projection of field strength on the axis X

#define  E_CHARGE   1.60217656535e-19     // The electron charge
#define  A_SPACING  2.5e-10               // The lattice (atomic) spacing (A----B)

#define  U          1.0e+8*A_SPACING*NX   // U ~ E*d ~ 1e+8 * NX * a ~ 2.5e-2 * NX
#define  C_SIGMA    1.0e+7                // Electrical conductivity (c - constant)
#define  PHI_LEFT  -U/2.0
#define  PHI_RIGHT  U/2.0
#define  EPS        1.0e-3

#define  T          650                   // The temperature

#define  V_AA      -0.32e-20              // The interaction energy

#define  STEPS      200                   // Steps for writing a file

#endif
