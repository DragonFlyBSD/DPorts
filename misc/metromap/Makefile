# Created by: Vsevolod Stakhov <vsevolod@highsecure.ru>
# $FreeBSD: misc/metromap/Makefile 330562 2013-10-16 23:45:18Z amdmi3 $

PORTNAME=	metromap
PORTVERSION=	0.1.4
PORTREVISION=	1
CATEGORIES=	misc
MASTER_SITES=	http://metromap.antex.ru/ \
		http://mirror.amdmi3.ru/distfiles/

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	A simple application for finding paths in different subways maps

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/doc/COPYING

USE_PYTHON=	yes
USE_GNOME=	pygtk2
USE_BZIP2=	yes
USES=		gettext gmake

PORTDOCS=	AUTHORS NEWS README README.data TODO

OPTIONS_DEFINE=	DOCS
OPTIONS_DEFAULT=DOCS

post-patch:
	@${REINPLACE_CMD} -e 's,/usr/bin/python,${SETENV} python,' ${WRKSRC}/metromap.py
	@${RM} -f ${WRKSRC}/modules/ReadMap.py.orig

post-install:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
.for f in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/doc/${f} ${STAGEDIR}${DOCSDIR}/
.endfor

.include <bsd.port.mk>
