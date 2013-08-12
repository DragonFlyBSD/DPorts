# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: x11-toolkits/pure-tk/Makefile 322734 2013-07-10 21:28:56Z bapt $

PORTNAME=	pure-tk
PORTVERSION=	0.3
CATEGORIES=	x11-toolkits

MAINTAINER=	lichray@gmail.com
COMMENT=	Basic interface between Pure and Tcl/Tk

USE_PURE=	yes
USE_TK=		yes
SHORT_TCL_VER=	${TCL_VER:S/8./8/}

MAKE_ARGS+=	tclvers=${TCL_VER}

PLIST_FILES=	lib/pure/gnocl.pure \
		lib/pure/tk.so \
		lib/pure/tk.pure

post-patch:
	${REINPLACE_CMD} \
 		-e "s|/usr/include|${LOCALBASE}/include|g" \
 		-e "s|-ltcl\$$(tclvers)|-ltcl${SHORT_TCL_VER}|" \
 		-e "s|-ltk\$$(tclvers)|-ltk${SHORT_TCL_VER}|" \
		${WRKSRC}/Makefile

.include "${.CURDIR}/../../lang/pure/bsd.pure.mk"
.include <bsd.port.mk>
