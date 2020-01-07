void Accum(GLenum op, GLfloat value);	
void AlphaFunc(GLenum func, GLfloat ref);	
void Begin(GLenum mode);	
void Bitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap);	
void BlendFunc(GLenum sfactor, GLenum dfactor);	
void CallList(GLuint list);	
void CallLists(GLsizei n, GLenum type, const void * lists);	
void Clear(GLbitfield mask);	
void ClearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);	
void ClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);	
void ClearDepth(GLdouble depth);	
void ClearIndex(GLfloat c);	
void ClearStencil(GLint s);	
void ClipPlane(GLenum plane, const GLdouble * equation);	
void Color3b(GLbyte red, GLbyte green, GLbyte blue);	
void Color3bv(const GLbyte * v);	
void Color3d(GLdouble red, GLdouble green, GLdouble blue);	
void Color3dv(const GLdouble * v);	
void Color3f(GLfloat red, GLfloat green, GLfloat blue);	
void Color3fv(const GLfloat * v);	
void Color3i(GLint red, GLint green, GLint blue);	
void Color3iv(const GLint * v);	
void Color3s(GLshort red, GLshort green, GLshort blue);	
void Color3sv(const GLshort * v);	
void Color3ub(GLubyte red, GLubyte green, GLubyte blue);	
void Color3ubv(const GLubyte * v);	
void Color3ui(GLuint red, GLuint green, GLuint blue);	
void Color3uiv(const GLuint * v);	
void Color3us(GLushort red, GLushort green, GLushort blue);	
void Color3usv(const GLushort * v);	
void Color4b(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha);	
void Color4bv(const GLbyte * v);	
void Color4d(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha);	
void Color4dv(const GLdouble * v);	
void Color4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);	
void Color4fv(const GLfloat * v);	
void Color4i(GLint red, GLint green, GLint blue, GLint alpha);	
void Color4iv(const GLint * v);	
void Color4s(GLshort red, GLshort green, GLshort blue, GLshort alpha);	
void Color4sv(const GLshort * v);	
void Color4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);	
void Color4ubv(const GLubyte * v);	
void Color4ui(GLuint red, GLuint green, GLuint blue, GLuint alpha);	
void Color4uiv(const GLuint * v);	
void Color4us(GLushort red, GLushort green, GLushort blue, GLushort alpha);	
void Color4usv(const GLushort * v);	
void ColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);	
void ColorMaterial(GLenum face, GLenum mode);	
void CopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type);	
void CullFace(GLenum mode);	
void DeleteLists(GLuint list, GLsizei range);	
void DepthFunc(GLenum func);	
void DepthMask(GLboolean flag);	
void DepthRange(GLdouble ren_near, GLdouble ren_far);	
void Disable(GLenum cap);	
void DrawBuffer(GLenum buf);	
void DrawPixels(GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels);	
void EdgeFlag(GLboolean flag);	
void EdgeFlagv(const GLboolean * flag);	
void Enable(GLenum cap);	
void End(void);	
void EndList(void);	
void EvalCoord1d(GLdouble u);	
void EvalCoord1dv(const GLdouble * u);	
void EvalCoord1f(GLfloat u);	
void EvalCoord1fv(const GLfloat * u);	
void EvalCoord2d(GLdouble u, GLdouble v);	
void EvalCoord2dv(const GLdouble * u);	
void EvalCoord2f(GLfloat u, GLfloat v);	
void EvalCoord2fv(const GLfloat * u);	
void EvalMesh1(GLenum mode, GLint i1, GLint i2);	
void EvalMesh2(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2);	
void EvalPoint1(GLint i);	
void EvalPoint2(GLint i, GLint j);	
void FeedbackBuffer(GLsizei size, GLenum type, GLfloat * buffer);	
void Finish(void);	
void Flush(void);	
void Fogf(GLenum pname, GLfloat param);	
void Fogfv(GLenum pname, const GLfloat * params);	
void Fogi(GLenum pname, GLint param);	
void Fogiv(GLenum pname, const GLint * params);	
void FrontFace(GLenum mode);	
void Frustum(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);	
GLuint GenLists(GLsizei range);	
void GetBooleanv(GLenum pname, GLboolean * data);	
void GetClipPlane(GLenum plane, GLdouble * equation);	
void GetDoublev(GLenum pname, GLdouble * data);	
GLenum GetError(void);	
void GetFloatv(GLenum pname, GLfloat * data);	
void GetIntegerv(GLenum pname, GLint * data);	
void GetLightfv(GLenum light, GLenum pname, GLfloat * params);	
void GetLightiv(GLenum light, GLenum pname, GLint * params);	
void GetMapdv(GLenum target, GLenum query, GLdouble * v);	
void GetMapfv(GLenum target, GLenum query, GLfloat * v);	
void GetMapiv(GLenum target, GLenum query, GLint * v);	
void GetMaterialfv(GLenum face, GLenum pname, GLfloat * params);	
void GetMaterialiv(GLenum face, GLenum pname, GLint * params);	
void GetPixelMapfv(GLenum map, GLfloat * values);	
void GetPixelMapuiv(GLenum map, GLuint * values);	
void GetPixelMapusv(GLenum map, GLushort * values);	
void GetPolygonStipple(GLubyte * mask);	
const GLubyte * GetString(GLenum name);	
void GetTexEnvfv(GLenum target, GLenum pname, GLfloat * params);	
void GetTexEnviv(GLenum target, GLenum pname, GLint * params);	
void GetTexGendv(GLenum coord, GLenum pname, GLdouble * params);	
void GetTexGenfv(GLenum coord, GLenum pname, GLfloat * params);	
void GetTexGeniv(GLenum coord, GLenum pname, GLint * params);	
void GetTexImage(GLenum target, GLint level, GLenum format, GLenum type, void * pixels);	
void GetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat * params);	
void GetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint * params);	
void GetTexParameterfv(GLenum target, GLenum pname, GLfloat * params);	
void GetTexParameteriv(GLenum target, GLenum pname, GLint * params);	
void Hint(GLenum target, GLenum mode);	
void IndexMask(GLuint mask);	
void Indexd(GLdouble c);	
void Indexdv(const GLdouble * c);	
void Indexf(GLfloat c);	
void Indexfv(const GLfloat * c);	
void Indexi(GLint c);	
void Indexiv(const GLint * c);	
void Indexs(GLshort c);	
void Indexsv(const GLshort * c);	
void InitNames(void);	
GLboolean IsEnabled(GLenum cap);	
GLboolean IsList(GLuint list);	
void LightModelf(GLenum pname, GLfloat param);	
void LightModelfv(GLenum pname, const GLfloat * params);	
void LightModeli(GLenum pname, GLint param);	
void LightModeliv(GLenum pname, const GLint * params);	
void Lightf(GLenum light, GLenum pname, GLfloat param);	
void Lightfv(GLenum light, GLenum pname, const GLfloat * params);	
void Lighti(GLenum light, GLenum pname, GLint param);	
void Lightiv(GLenum light, GLenum pname, const GLint * params);	
void LineStipple(GLint factor, GLushort pattern);	
void LineWidth(GLfloat width);	
void ListBase(GLuint base);	
void LoadIdentity(void);	
void LoadMatrixd(const GLdouble * m);	
void LoadMatrixf(const GLfloat * m);	
void LoadName(GLuint name);	
void LogicOp(GLenum opcode);	
void Map1d(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points);	
void Map1f(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points);	
void Map2d(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points);	
void Map2f(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points);	
void MapGrid1d(GLint un, GLdouble u1, GLdouble u2);	
void MapGrid1f(GLint un, GLfloat u1, GLfloat u2);	
void MapGrid2d(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2);	
void MapGrid2f(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2);	
void Materialf(GLenum face, GLenum pname, GLfloat param);	
void Materialfv(GLenum face, GLenum pname, const GLfloat * params);	
void Materiali(GLenum face, GLenum pname, GLint param);	
void Materialiv(GLenum face, GLenum pname, const GLint * params);	
void MatrixMode(GLenum mode);	
void MultMatrixd(const GLdouble * m);	
void MultMatrixf(const GLfloat * m);	
void NewList(GLuint list, GLenum mode);	
void Normal3b(GLbyte nx, GLbyte ny, GLbyte nz);	
void Normal3bv(const GLbyte * v);	
void Normal3d(GLdouble nx, GLdouble ny, GLdouble nz);	
void Normal3dv(const GLdouble * v);	
void Normal3f(GLfloat nx, GLfloat ny, GLfloat nz);	
void Normal3fv(const GLfloat * v);	
void Normal3i(GLint nx, GLint ny, GLint nz);	
void Normal3iv(const GLint * v);	
void Normal3s(GLshort nx, GLshort ny, GLshort nz);	
void Normal3sv(const GLshort * v);	
void Ortho(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);	
void PassThrough(GLfloat token);	
void PixelMapfv(GLenum map, GLsizei mapsize, const GLfloat * values);	
void PixelMapuiv(GLenum map, GLsizei mapsize, const GLuint * values);	
void PixelMapusv(GLenum map, GLsizei mapsize, const GLushort * values);	
void PixelStoref(GLenum pname, GLfloat param);	
void PixelStorei(GLenum pname, GLint param);	
void PixelTransferf(GLenum pname, GLfloat param);	
void PixelTransferi(GLenum pname, GLint param);	
void PixelZoom(GLfloat xfactor, GLfloat yfactor);	
void PointSize(GLfloat size);	
void PolygonMode(GLenum face, GLenum mode);	
void PolygonStipple(const GLubyte * mask);	
void PopAttrib(void);	
void PopMatrix(void);	
void PopName(void);	
void PushAttrib(GLbitfield mask);	
void PushMatrix(void);	
void PushName(GLuint name);	
void RasterPos2d(GLdouble x, GLdouble y);	
void RasterPos2dv(const GLdouble * v);	
void RasterPos2f(GLfloat x, GLfloat y);	
void RasterPos2fv(const GLfloat * v);	
void RasterPos2i(GLint x, GLint y);	
void RasterPos2iv(const GLint * v);	
void RasterPos2s(GLshort x, GLshort y);	
void RasterPos2sv(const GLshort * v);	
void RasterPos3d(GLdouble x, GLdouble y, GLdouble z);	
void RasterPos3dv(const GLdouble * v);	
void RasterPos3f(GLfloat x, GLfloat y, GLfloat z);	
void RasterPos3fv(const GLfloat * v);	
void RasterPos3i(GLint x, GLint y, GLint z);	
void RasterPos3iv(const GLint * v);	
void RasterPos3s(GLshort x, GLshort y, GLshort z);	
void RasterPos3sv(const GLshort * v);	
void RasterPos4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w);	
void RasterPos4dv(const GLdouble * v);	
void RasterPos4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w);	
void RasterPos4fv(const GLfloat * v);	
void RasterPos4i(GLint x, GLint y, GLint z, GLint w);	
void RasterPos4iv(const GLint * v);	
void RasterPos4s(GLshort x, GLshort y, GLshort z, GLshort w);	
void RasterPos4sv(const GLshort * v);	
void ReadBuffer(GLenum src);	
void ReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels);	
void Rectd(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2);	
void Rectdv(const GLdouble * v1, const GLdouble * v2);	
void Rectf(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2);	
void Rectfv(const GLfloat * v1, const GLfloat * v2);	
void Recti(GLint x1, GLint y1, GLint x2, GLint y2);	
void Rectiv(const GLint * v1, const GLint * v2);	
void Rects(GLshort x1, GLshort y1, GLshort x2, GLshort y2);	
void Rectsv(const GLshort * v1, const GLshort * v2);	
GLint RenderMode(GLenum mode);	
void Rotated(GLdouble angle, GLdouble x, GLdouble y, GLdouble z);	
void Rotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z);	
void Scaled(GLdouble x, GLdouble y, GLdouble z);	
void Scalef(GLfloat x, GLfloat y, GLfloat z);	
void Scissor(GLint x, GLint y, GLsizei width, GLsizei height);	
void SelectBuffer(GLsizei size, GLuint * buffer);	
void ShadeModel(GLenum mode);	
void StencilFunc(GLenum func, GLint ref, GLuint mask);	
void StencilMask(GLuint mask);	
void StencilOp(GLenum fail, GLenum zfail, GLenum zpass);	
void TexCoord1d(GLdouble s);	
void TexCoord1dv(const GLdouble * v);	
void TexCoord1f(GLfloat s);	
void TexCoord1fv(const GLfloat * v);	
void TexCoord1i(GLint s);	
void TexCoord1iv(const GLint * v);	
void TexCoord1s(GLshort s);	
void TexCoord1sv(const GLshort * v);	
void TexCoord2d(GLdouble s, GLdouble t);	
void TexCoord2dv(const GLdouble * v);	
void TexCoord2f(GLfloat s, GLfloat t);	
void TexCoord2fv(const GLfloat * v);	
void TexCoord2i(GLint s, GLint t);	
void TexCoord2iv(const GLint * v);	
void TexCoord2s(GLshort s, GLshort t);	
void TexCoord2sv(const GLshort * v);	
void TexCoord3d(GLdouble s, GLdouble t, GLdouble r);	
void TexCoord3dv(const GLdouble * v);	
void TexCoord3f(GLfloat s, GLfloat t, GLfloat r);	
void TexCoord3fv(const GLfloat * v);	
void TexCoord3i(GLint s, GLint t, GLint r);	
void TexCoord3iv(const GLint * v);	
void TexCoord3s(GLshort s, GLshort t, GLshort r);	
void TexCoord3sv(const GLshort * v);	
void TexCoord4d(GLdouble s, GLdouble t, GLdouble r, GLdouble q);	
void TexCoord4dv(const GLdouble * v);	
void TexCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q);	
void TexCoord4fv(const GLfloat * v);	
void TexCoord4i(GLint s, GLint t, GLint r, GLint q);	
void TexCoord4iv(const GLint * v);	
void TexCoord4s(GLshort s, GLshort t, GLshort r, GLshort q);	
void TexCoord4sv(const GLshort * v);	
void TexEnvf(GLenum target, GLenum pname, GLfloat param);	
void TexEnvfv(GLenum target, GLenum pname, const GLfloat * params);	
void TexEnvi(GLenum target, GLenum pname, GLint param);	
void TexEnviv(GLenum target, GLenum pname, const GLint * params);	
void TexGend(GLenum coord, GLenum pname, GLdouble param);	
void TexGendv(GLenum coord, GLenum pname, const GLdouble * params);	
void TexGenf(GLenum coord, GLenum pname, GLfloat param);	
void TexGenfv(GLenum coord, GLenum pname, const GLfloat * params);	
void TexGeni(GLenum coord, GLenum pname, GLint param);	
void TexGeniv(GLenum coord, GLenum pname, const GLint * params);	
void TexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels);	
void TexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels);	
void TexParameterf(GLenum target, GLenum pname, GLfloat param);	
void TexParameterfv(GLenum target, GLenum pname, const GLfloat * params);	
void TexParameteri(GLenum target, GLenum pname, GLint param);	
void TexParameteriv(GLenum target, GLenum pname, const GLint * params);	
void Translated(GLdouble x, GLdouble y, GLdouble z);	
void Translatef(GLfloat x, GLfloat y, GLfloat z);	
void Vertex2d(GLdouble x, GLdouble y);	
void Vertex2dv(const GLdouble * v);	
void Vertex2f(GLfloat x, GLfloat y);	
void Vertex2fv(const GLfloat * v);	
void Vertex2i(GLint x, GLint y);	
void Vertex2iv(const GLint * v);	
void Vertex2s(GLshort x, GLshort y);	
void Vertex2sv(const GLshort * v);	
void Vertex3d(GLdouble x, GLdouble y, GLdouble z);	
void Vertex3dv(const GLdouble * v);	
void Vertex3f(GLfloat x, GLfloat y, GLfloat z);	
void Vertex3fv(const GLfloat * v);	
void Vertex3i(GLint x, GLint y, GLint z);	
void Vertex3iv(const GLint * v);	
void Vertex3s(GLshort x, GLshort y, GLshort z);	
void Vertex3sv(const GLshort * v);	
void Vertex4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w);	
void Vertex4dv(const GLdouble * v);	
void Vertex4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w);	
void Vertex4fv(const GLfloat * v);	
void Vertex4i(GLint x, GLint y, GLint z, GLint w);	
void Vertex4iv(const GLint * v);	
void Vertex4s(GLshort x, GLshort y, GLshort z, GLshort w);	
void Vertex4sv(const GLshort * v);	
void Viewport(GLint x, GLint y, GLsizei width, GLsizei height);	
GLboolean AreTexturesResident(GLsizei n, const GLuint * textures, GLboolean * residences);	
void ArrayElement(GLint i);	
void BindTexture(GLenum target, GLuint texture);	
void ColorPointer(GLint size, GLenum type, GLsizei stride, const void * pointer);	
void CopyTexImage1D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);	
void CopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);	
void CopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);	
void CopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);	
void DeleteTextures(GLsizei n, const GLuint * textures);	
void DisableClientState(GLenum ren_array);	
void DrawArrays(GLenum mode, GLint first, GLsizei count);	
void DrawElements(GLenum mode, GLsizei count, GLenum type, const void * indices);	
void EdgeFlagPointer(GLsizei stride, const void * pointer);	
void EnableClientState(GLenum ren_array);	
void GenTextures(GLsizei n, GLuint * textures);	
void GetPointerv(GLenum pname, void ** params);	
void IndexPointer(GLenum type, GLsizei stride, const void * pointer);	
void Indexub(GLubyte c);	
void Indexubv(const GLubyte * c);	
void InterleavedArrays(GLenum format, GLsizei stride, const void * pointer);	
GLboolean IsTexture(GLuint texture);	
void NormalPointer(GLenum type, GLsizei stride, const void * pointer);	
void PolygonOffset(GLfloat factor, GLfloat units);	
void PopClientAttrib(void);	
void PrioritizeTextures(GLsizei n, const GLuint * textures, const GLfloat * priorities);	
void PushClientAttrib(GLbitfield mask);
void TexCoordPointer(GLint size, GLenum type, GLsizei stride, const void * pointer);	
void TexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels);	
void TexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels);	
void VertexPointer(GLint size, GLenum type, GLsizei stride, const void * pointer);