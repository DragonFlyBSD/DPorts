# zrj

PORTNAME=	gtk
PORTVERSION=	2.24.0
PORTREVISION=	5
CATEGORIES=	x11-toolkits python
MASTER_SITES=	GNOME/sources/pygtk/${PORTVERSION:C/^([0-9]+\.[0-9]+).*/\1/}
PKGNAMEPREFIX=	pyl-
PKGNAMESUFFIX=	2
DISTNAME=	pygtk-${PORTVERSION}
DIST_SUBDIR=	gnome2

MAINTAINER=	zrj@ef.irc
COMMENT=	Set of Python-legacy bindings for GTK+

USES=		gettext gmake gnome libtool pathfix pkgconfig tar:bzip2
USE_GNOME=	libglade2 #pygobject

BUILD_DEPENDS=  ${LOCALBASE}/bin/python-legacy:lang/python-legacy
RUN_DEPENDS=    ${LOCALBASE}/bin/python-legacy:lang/python-legacy

BUILD_DEPENDS+=	pylgobject-codegen-2.0:devel/pyl-gobject

GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS=	--disable-docs

EG_SRC_DIR=	${WRKSRC}/examples
EXAMPLESDIR=	${PREFIX}/share/examples/py-gtk

PLIST_SUB=	PYTHONL_SITELIBDIR=${PYTHONL_SITELIBDIR}

CFLAGS+=	-Wno-deprecated-declarations

CONFIGURE_ARGS+= --disable-numpy --disable-docs
CONFIGURE_ARGS+= PYTHON=python-legacy am_cv_python_version=-legacy

#.if !defined(WITHOUT_THREADS)
#CONFIGURE_ARGS+=	--enable-thread
#LDFLAGS+=		-lpthread
#.else
#CONFIGURE_ARGS+=	--disable-thread
#.endif

PYTHONL_SITELIBDIR= lib/python-legacy/site-packages

post-patch:
	${REINPLACE_CMD} -e "s@/usr/bin/env python@${LOCALBASE}/bin/python-legacy@g" \
			 -e "s,@PYTHON@,${LOCALBASE}/bin/python-legacy,g" \
		${WRKSRC}/examples/pygtk-demo/pygtk-demo.py \
		${WRKSRC}/examples/pygtk-demo/pygtk-demo.in
	${REINPLACE_CMD} -e 's@pygobject@pylgobject@g' -e 's@pycairo@pylcairo@g' \
		${WRKSRC}/configure
	${REINPLACE_CMD} -e 's@<pycairo\.h>@<pylcairo.h>@g' \
		${WRKSRC}/pangocairomodule.c ${WRKSRC}/pangocairo.override \
		${WRKSRC}/gtk/gtkunixprintmodule.c ${WRKSRC}/gtk/gtkmodule.c \
		${WRKSRC}/gtk/gdk.override ${WRKSRC}/gtk/gtk.override \
		${WRKSRC}/gtk/gtkunixprint.override
	${MV} ${WRKSRC}/pygtk.spec.in ${WRKSRC}/pylgtk.spec.in
	${MV} ${WRKSRC}/pygtk-2.0.pc.in ${WRKSRC}/pylgtk-2.0.pc.in
	${MV} ${WRKSRC}/pygtk-codegen-2.0.in ${WRKSRC}/pylgtk-codegen-2.0.in
	${MV} ${WRKSRC}/examples/pygtk-demo/pygtk-demo.in ${WRKSRC}/examples/pygtk-demo/pylgtk-demo.in
	${MV} ${WRKSRC}/examples/pygtk-demo/pygtk-demo.py ${WRKSRC}/examples/pygtk-demo/pylgtk-demo.py
	${MV} ${WRKSRC}/examples/pygtk-demo ${WRKSRC}/examples/pylgtk-demo
	${REINPLACE_CMD} -e 's@pygtk@pylgtk@g' -e 's@python\?\.\\?@python-legacy@g'\
		${WRKSRC}/Makefile.in ${WRKSRC}/Makefile.am ${WRKSRC}/pylgtk.spec.in \
		${WRKSRC}/examples/Makefile.in ${WRKSRC}/examples/Makefile.am \
		${WRKSRC}/configure
	${REINPLACE_CMD} -e 's@pygobject@pylgobject@g' \
		${WRKSRC}/pylgtk-2.0.pc.in

post-install:
	${RM} -rf ${STAGEDIR}${LOCALBASE}/share/doc
	${MV} ${STAGEDIR}${LOCALBASE}/include/pygtk-2.0 ${STAGEDIR}${LOCALBASE}/include/pylgtk-2.0
	${STRIP_CMD} ${STAGEDIR}${LOCALBASE}/${PYTHONL_SITELIBDIR}/gtk-2.0/gtk/*.so
	${STRIP_CMD} ${STAGEDIR}${LOCALBASE}/${PYTHONL_SITELIBDIR}/gtk-2.0/*.so

.include <bsd.port.mk>
