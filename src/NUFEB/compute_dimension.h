/* ----------------------------------------------------------------------
   NUFEB package - A LAMMPS user package for Individual-based Modelling of Microbial Communities
   Contributing authors: Bowen Li & Denis Taniguchi (Newcastle University, UK)
   Email: bowen.li2@newcastle.ac.uk & denis.taniguchi@newcastle.ac.uk

   Copyright (2003) Sandia Corporation.  Under the terms of Contract
   DE-AC04-94AL85000 with Sandia Corporation, the U.S. Government retains
   certain rights in this software.  This software is distributed under
   the GNU General Public License.
------------------------------------------------------------------------- */

#ifdef COMPUTE_CLASS

ComputeStyle(nufeb/dimension,ComputeNufebDimension)

#else

#ifndef LMP_COMPUTE_DIMENSION_H
#define LMP_COMPUTE_DIMENSION_H

#include "compute.h"

namespace LAMMPS_NS {

class ComputeNufebDimension : public Compute {
 public:
  ComputeNufebDimension(class LAMMPS *, int, char **);
  virtual ~ComputeNufebDimension();
  void init(){};
  virtual double compute_scalar();

 private:
  int nx, ny, nxy;
};

}

#endif
#endif

/* ERROR/WARNING messages:

E: Illegal ... command

Self-explanatory.  Check the input script syntax and compare to the
documentation for the command.  You can use -echo screen as a
command-line option when running LAMMPS to see the offending line.

E: Temperature compute degrees of freedom < 0

This should not happen if you are calculating the temperature
on a valid set of atoms.

*/
