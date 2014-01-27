# Created by: martin.dieringer@gmx.de
# $FreeBSD: textproc/html2tex/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	html2tex
PORTVERSION=	2.7
PORTREVISION=	1
CATEGORIES=	textproc
MASTER_SITES=	http://www.iwriteiam.nl/
DISTNAME=	html2tex_c.txt
EXTRACT_SUFX=	# empty

MAINTAINER=	martin.dieringer@gmx.de
COMMENT=	HTML to LaTeX converter, last modified 2010

PLIST_FILES=	bin/html2tex
NO_WRKSUBDIR=	yes

NO_STAGE=	yes
do-extract:
	${MKDIR} ${WRKSRC}
	${CP} ${DISTDIR}/${DISTNAME} ${WRKSRC}/html2tex.c

do-build:
	cd ${WRKSRC} &&	${CC} -o html2tex html2tex.c

do-install:
	cd ${WRKSRC} && ${CP} html2tex ${PREFIX}/bin

.include <bsd.port.mk>
