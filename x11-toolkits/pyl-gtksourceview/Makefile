# zrj

PORTNAME=	gtksourceview
PORTVERSION=	2.10.1
PORTREVISION=	2
CATEGORIES=	x11-toolkits gnome python
MASTER_SITES=	GNOME/sources/pygtksourceview/${PORTVERSION:C/^([0-9]+\.[0-9]+).*/\1/}
PKGNAMEPREFIX=	pyl-
DISTNAME=	pygtksourceview-${PORTVERSION}

MAINTAINER=	zrj@ef.irc
COMMENT=	Python legacy bindings for GtkSourceView 2

USES=		gmake gnome libtool:keepla pathfix pkgconfig tar:bzip2
USE_GNOME=	gnomeprefix gtksourceview2 libglade2
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-docs
CONFIGURE_ARGS+= PYTHON=python-legacy am_cv_python_version=-legacy
INSTALL_TARGET=	install-strip

BUILD_DEPENDS+=	${LOCALBASE}/bin/python-legacy:lang/python-legacy
RUN_DEPENDS+=	${LOCALBASE}/bin/python-legacy:lang/python-legacy

BUILD_DEPENDS+=	pylgobject-codegen-2.0:devel/pyl-gobject

BUILD_DEPENDS+=	${LOCALBASE}/libdata/pkgconfig/pylgtk-2.0.pc:x11-toolkits/pyl-gtk2
RUN_DEPENDS+=	${LOCALBASE}/libdata/pkgconfig/pylgtk-2.0.pc:x11-toolkits/pyl-gtk2

PYTHONL_SITELIBDIR= lib/python-legacy/site-packages

PLIST_SUB=	PYTHONL_SITELIBDIR=${PYTHONL_SITELIBDIR}

CFLAGS+=	-Wno-deprecated-declarations

dfly-patch:
	${MV} ${WRKSRC}/pygtksourceview-2.0.pc.in ${WRKSRC}/pylgtksourceview-2.0.pc.in
	${REINPLACE_CMD} -e 's@pygobject@pylgobject@g' -e 's@pygtk@pylgtk@g' \
		${WRKSRC}/configure
	${REINPLACE_CMD} -e 's@pygtk@pylgtk@g' -e 's@python\?\.\\?@python-legacy@g'\
                ${WRKSRC}/Makefile.in ${WRKSRC}/Makefile.am \
		${WRKSRC}/pylgtksourceview-2.0.pc.in

.include <bsd.port.mk>
