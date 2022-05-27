/*
 * Copyright (c) 2021, Jelle Raaijmakers <jelle@gmta.nl>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#ifndef GLAPI
#    define GLAPI extern
#endif
#define GLAPIENTRY
#define APIENTRY GLAPIENTRY
#ifndef APIENTRYP
#    define APIENTRYP APIENTRY*
#endif

//
// OpenGL typedefs
//
// Defines types used by all OpenGL applications
// https://www.khronos.org/opengl/wiki/OpenGL_Type
typedef char GLchar;
typedef char GLcharARB;
typedef char GLbyte;
typedef unsigned char GLuchar;
typedef unsigned char GLubyte;
typedef unsigned char GLboolean;
typedef short GLshort;
typedef unsigned short GLushort;
typedef int GLint;
typedef unsigned int GLuint;
typedef int GLfixed;
typedef long long GLint64;
typedef unsigned long long GLuint64;
typedef int GLsizei;
typedef unsigned int GLsizeiptr;
typedef unsigned int GLsizeiptrARB;
typedef unsigned int GLintptr;
typedef unsigned int GLintptrARB;
typedef void GLvoid;
typedef float GLfloat;
typedef double GLclampd;
typedef float GLclampf;
typedef double GLdouble;
typedef unsigned int GLbitfield;
typedef unsigned int GLenum;
typedef unsigned int GLhandleARB;
typedef struct __GLsync *GLsync;
typedef unsigned long long int GLuint64EXT;
