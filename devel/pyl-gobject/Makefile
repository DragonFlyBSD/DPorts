# zrj

PORTNAME=	gobject
PORTVERSION=	2.28.6
PORTREVISION=	9
CATEGORIES=	devel python
MASTER_SITES=	GNOME/sources/pygobject/${PORTVERSION:C/^([0-9]+\.[0-9]+).*/\1/}
PKGNAMEPREFIX=	pyl-
DISTNAME=	pygobject-${PORTVERSION}
DIST_SUBDIR=	gnome2

MAINTAINER=	zrj@ef.irc
COMMENT=	Python legacy bindings for GObject

LICENSE=	LGPL21

BUILD_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/pylcairo.pc:graphics/pyl-cairo
LIB_DEPENDS+=	libffi.so:devel/libffi
RUN_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/pylcairo.pc:graphics/pyl-cairo

BUILD_DEPENDS+=	${LOCALBASE}/bin/python-legacy:lang/python-legacy
RUN_DEPENDS+=	${LOCALBASE}/bin/python-legacy:lang/python-legacy

USES=		gmake gnome libtool pkgconfig tar:xz
USE_GNOME=	glib20 introspection:build,run
GNU_CONFIGURE=	yes
#USE_LDCONFIG=	yes
CONFIGURE_ARGS=	--disable-docs --disable-introspection --with-ffi
CONFIGURE_ARGS+= PYTHON=python-legacy

CFLAGS+=	-Wno-deprecated-declarations

INSTALL_TARGET=	install-strip

PYTHONL_SITELIBDIR= lib/python-legacy/site-packages

PLIST_SUB=	PYTHON_VER="${PYTHON_VER}" PYTHONL_SITELIBDIR=${PYTHONL_SITELIBDIR}

PYSHAREDIR=	${PREFIX}/share/pylgobject/2.0/codegen

post-patch:
	${REINPLACE_CMD} -e "s@/usr/bin/env python@${LOCALBASE}/bin/python-legacy@g" \
		${WRKSRC}/codegen/*.py
	${MV} ${WRKSRC}/codegen/pygobject-codegen-2.0.in ${WRKSRC}/codegen/pylgobject-codegen-2.0.in
	${MV} ${WRKSRC}/pygtk.py ${WRKSRC}/pylgtk.py
	${MV} ${WRKSRC}/pygobject-2.0.pc.in ${WRKSRC}/pylgobject-2.0.pc.in
	${MV} ${WRKSRC}/pygobject-2.0-uninstalled.pc.in ${WRKSRC}/pylgobject-2.0-uninstalled.pc.in
	${REINPLACE_CMD} -e "s@pygobject@pylgobject@g" -e "s@pygtk@pylgtk@g" -e "s@libpyglib@libpylglib@g" \
			 -e "s@pylgobject\.c@pygobject.c@g" -e "s@pylgobject\.h@pygobject.h@g" \
			 -e "s@SUBDIRS = docs@SUBDIRS = @g" \
		${WRKSRC}/codegen/Makefile.in ${WRKSRC}/codegen/Makefile.am \
		${WRKSRC}/pylgobject-2.0.pc.in ${WRKSRC}/pylgobject-2.0-uninstalled.pc.in \
		${WRKSRC}/gi/Makefile.in ${WRKSRC}/gi/Makefile.am \
		${WRKSRC}/gobject/Makefile.in ${WRKSRC}/gobject/Makefile.am \
		${WRKSRC}/glib/Makefile.in ${WRKSRC}/glib/Makefile.am \
		${WRKSRC}/gio/Makefile.in ${WRKSRC}/gio/Makefile.am \
		${WRKSRC}/Makefile.in ${WRKSRC}/Makefile.am \
		${WRKSRC}/configure

post-install:
	${RM} -rf ${STAGEDIR}${LOCALBASE}/share/doc
	cd ${STAGEDIR}${PREFIX} && python-legacy ${LOCALBASE}/lib/python-legacy/compileall.py \
		-d ${LOCALBASE}/${PYTHONL_SITELIBDIR} -f ${PYTHONL_SITELIBDIR}
	cd ${STAGEDIR}${PREFIX} && python-legacy -O ${LOCALBASE}/lib/python-legacy/compileall.py \
		-d ${LOCALBASE}/${PYTHONL_SITELIBDIR} -f ${PYTHONL_SITELIBDIR}
	cd ${STAGEDIR}${PREFIX} && python-legacy ${LOCALBASE}/lib/python-legacy/compileall.py \
		-d ${PYSHAREDIR} -f ${PYSHAREDIR:S;${PREFIX}/;;}
	cd ${STAGEDIR}${PREFIX} && python-legacy -O ${LOCALBASE}/lib/python-legacy/compileall.py \
		-d ${PYSHAREDIR} -f ${PYSHAREDIR:S;${PREFIX}/;;}

.include <bsd.port.mk>
