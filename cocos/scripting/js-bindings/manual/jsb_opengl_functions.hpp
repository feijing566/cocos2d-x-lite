/****************************************************************************
 Copyright (c) 2017-2018 Xiamen Yaji Software Co., Ltd.

 http://www.cocos.com

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated engine source code (the "Software"), a limited,
 worldwide, royalty-free, non-assignable, revocable and non-exclusive license
 to use Cocos Creator solely to develop games on your target platforms. You shall
 not use Cocos Creator software for developing other software or tools that's
 used for developing games. You are not granted to publish, distribute,
 sublicense, and/or sell copies of Cocos Creator.

 The software or tools in this License Agreement are licensed, not sold.
 Xiamen Yaji Software Co., Ltd. reserves all rights not expressly granted to you.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

#pragma once

#include "cocos/scripting/js-bindings/jswrapper/SeApi.h"

SE_DECLARE_FUNC(JSB_glActiveTexture);
SE_DECLARE_FUNC(JSB_glAttachShader);
SE_DECLARE_FUNC(JSB_glBindAttribLocation);
SE_DECLARE_FUNC(JSB_glBindBuffer);
SE_DECLARE_FUNC(JSB_glBindFramebuffer);
SE_DECLARE_FUNC(JSB_glBindRenderbuffer);
SE_DECLARE_FUNC(JSB_glBindTexture);
SE_DECLARE_FUNC(JSB_glBlendColor);
SE_DECLARE_FUNC(JSB_glBlendEquation);
SE_DECLARE_FUNC(JSB_glBlendEquationSeparate);
SE_DECLARE_FUNC(JSB_glBlendFunc);
SE_DECLARE_FUNC(JSB_glBlendFuncSeparate);
SE_DECLARE_FUNC(JSB_glBufferData);
SE_DECLARE_FUNC(JSB_glBufferSubData);
SE_DECLARE_FUNC(JSB_glCheckFramebufferStatus);
SE_DECLARE_FUNC(JSB_glClear);
SE_DECLARE_FUNC(JSB_glClearColor);
SE_DECLARE_FUNC(JSB_glClearDepthf);
SE_DECLARE_FUNC(JSB_glClearStencil);
SE_DECLARE_FUNC(JSB_glColorMask);
SE_DECLARE_FUNC(JSB_glCompileShader);
SE_DECLARE_FUNC(JSB_glCompressedTexImage2D);
SE_DECLARE_FUNC(JSB_glCompressedTexSubImage2D);
SE_DECLARE_FUNC(JSB_glCopyTexImage2D);
SE_DECLARE_FUNC(JSB_glCopyTexSubImage2D);
SE_DECLARE_FUNC(JSB_glCreateProgram);
SE_DECLARE_FUNC(JSB_glCreateShader);
SE_DECLARE_FUNC(JSB_glCullFace);
SE_DECLARE_FUNC(JSB_glDeleteBuffers);
SE_DECLARE_FUNC(JSB_glDeleteFramebuffers);
SE_DECLARE_FUNC(JSB_glDeleteProgram);
SE_DECLARE_FUNC(JSB_glDeleteRenderbuffers);
SE_DECLARE_FUNC(JSB_glDeleteShader);
SE_DECLARE_FUNC(JSB_glDeleteTextures);
SE_DECLARE_FUNC(JSB_glDepthFunc);
SE_DECLARE_FUNC(JSB_glDepthMask);
SE_DECLARE_FUNC(JSB_glDepthRangef);
SE_DECLARE_FUNC(JSB_glDetachShader);
SE_DECLARE_FUNC(JSB_glDisable);
SE_DECLARE_FUNC(JSB_glDisableVertexAttribArray);
SE_DECLARE_FUNC(JSB_glDrawArrays);
SE_DECLARE_FUNC(JSB_glDrawElements);
SE_DECLARE_FUNC(JSB_glEnable);
SE_DECLARE_FUNC(JSB_glEnableVertexAttribArray);
SE_DECLARE_FUNC(JSB_glFinish);
SE_DECLARE_FUNC(JSB_glFlush);
SE_DECLARE_FUNC(JSB_glFramebufferRenderbuffer);
SE_DECLARE_FUNC(JSB_glFramebufferTexture2D);
SE_DECLARE_FUNC(JSB_glFrontFace);
SE_DECLARE_FUNC(JSB_glGenBuffers);
SE_DECLARE_FUNC(JSB_glGenFramebuffers);
SE_DECLARE_FUNC(JSB_glGenRenderbuffers);
SE_DECLARE_FUNC(JSB_glGenTextures);
SE_DECLARE_FUNC(JSB_glGenerateMipmap);
SE_DECLARE_FUNC(JSB_glGetActiveAttrib);
SE_DECLARE_FUNC(JSB_glGetActiveUniform);
SE_DECLARE_FUNC(JSB_glGetAttachedShaders);
SE_DECLARE_FUNC(JSB_glGetAttribLocation);
SE_DECLARE_FUNC(JSB_glGetError);
SE_DECLARE_FUNC(JSB_glGetProgramInfoLog);
SE_DECLARE_FUNC(JSB_glGetProgramiv);
SE_DECLARE_FUNC(JSB_glGetShaderInfoLog);
SE_DECLARE_FUNC(JSB_glGetShaderSource);
SE_DECLARE_FUNC(JSB_glGetShaderiv);
SE_DECLARE_FUNC(JSB_glGetTexParameterfv);
SE_DECLARE_FUNC(JSB_glGetUniformLocation);
SE_DECLARE_FUNC(JSB_glGetUniformfv);
SE_DECLARE_FUNC(JSB_glHint);
SE_DECLARE_FUNC(JSB_glIsBuffer);
SE_DECLARE_FUNC(JSB_glIsEnabled);
SE_DECLARE_FUNC(JSB_glIsFramebuffer);
SE_DECLARE_FUNC(JSB_glIsProgram);
SE_DECLARE_FUNC(JSB_glIsRenderbuffer);
SE_DECLARE_FUNC(JSB_glIsShader);
SE_DECLARE_FUNC(JSB_glIsTexture);
SE_DECLARE_FUNC(JSB_glLineWidth);
SE_DECLARE_FUNC(JSB_glLinkProgram);
SE_DECLARE_FUNC(JSB_glPixelStorei);
SE_DECLARE_FUNC(JSB_glPolygonOffset);
SE_DECLARE_FUNC(JSB_glReadPixels);
SE_DECLARE_FUNC(JSB_glReleaseShaderCompiler);
SE_DECLARE_FUNC(JSB_glRenderbufferStorage);
SE_DECLARE_FUNC(JSB_glSampleCoverage);
SE_DECLARE_FUNC(JSB_glScissor);
SE_DECLARE_FUNC(JSB_glShaderSource);
SE_DECLARE_FUNC(JSB_glStencilFunc);
SE_DECLARE_FUNC(JSB_glStencilFuncSeparate);
SE_DECLARE_FUNC(JSB_glStencilMask);
SE_DECLARE_FUNC(JSB_glStencilMaskSeparate);
SE_DECLARE_FUNC(JSB_glStencilOp);
SE_DECLARE_FUNC(JSB_glStencilOpSeparate);
SE_DECLARE_FUNC(JSB_glTexImage2D);
SE_DECLARE_FUNC(JSB_glTexParameterf);
SE_DECLARE_FUNC(JSB_glTexParameteri);
SE_DECLARE_FUNC(JSB_glTexSubImage2D);
SE_DECLARE_FUNC(JSB_glUniform1f);
SE_DECLARE_FUNC(JSB_glUniform1fv);
SE_DECLARE_FUNC(JSB_glUniform1i);
SE_DECLARE_FUNC(JSB_glUniform1iv);
SE_DECLARE_FUNC(JSB_glUniform2f);
SE_DECLARE_FUNC(JSB_glUniform2fv);
SE_DECLARE_FUNC(JSB_glUniform2i);
SE_DECLARE_FUNC(JSB_glUniform2iv);
SE_DECLARE_FUNC(JSB_glUniform3f);
SE_DECLARE_FUNC(JSB_glUniform3fv);
SE_DECLARE_FUNC(JSB_glUniform3i);
SE_DECLARE_FUNC(JSB_glUniform3iv);
SE_DECLARE_FUNC(JSB_glUniform4f);
SE_DECLARE_FUNC(JSB_glUniform4fv);
SE_DECLARE_FUNC(JSB_glUniform4i);
SE_DECLARE_FUNC(JSB_glUniform4iv);
SE_DECLARE_FUNC(JSB_glUniformMatrix2fv);
SE_DECLARE_FUNC(JSB_glUniformMatrix3fv);
SE_DECLARE_FUNC(JSB_glUniformMatrix4fv);
SE_DECLARE_FUNC(JSB_glUseProgram);
SE_DECLARE_FUNC(JSB_glValidateProgram);
SE_DECLARE_FUNC(JSB_glVertexAttrib1f);
SE_DECLARE_FUNC(JSB_glVertexAttrib1fv);
SE_DECLARE_FUNC(JSB_glVertexAttrib2f);
SE_DECLARE_FUNC(JSB_glVertexAttrib2fv);
SE_DECLARE_FUNC(JSB_glVertexAttrib3f);
SE_DECLARE_FUNC(JSB_glVertexAttrib3fv);
SE_DECLARE_FUNC(JSB_glVertexAttrib4f);
SE_DECLARE_FUNC(JSB_glVertexAttrib4fv);
SE_DECLARE_FUNC(JSB_glVertexAttribPointer);
SE_DECLARE_FUNC(JSB_glViewport);
