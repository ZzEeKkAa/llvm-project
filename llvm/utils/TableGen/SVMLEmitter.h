//===------ SVMLEmitter.cpp - Generate SVML function variants -------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This tablegen backend emits the scalar to svml function map for TLI.
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_UTIL_TABLEGEN_SVMLEMITTER_H
#define LLVM_UTIL_TABLEGEN_SVMLEMITTER_H

#include "llvm/TableGen/Main.h"
#include "llvm/Support/raw_ostream.h"

using namespace llvm;

void EmitSVMLVariants(RecordKeeper &RK, raw_ostream &OS);

#endif // LLVM_UTIL_TABLEGEN_SVMLEMITTER_H
