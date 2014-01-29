# Created by: James Flemer <jflemer@alum.rpi.edu>
# $FreeBSD: textproc/l2a/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	l2a
PORTVERSION=	1.2
CATEGORIES=	textproc
MASTER_SITES=	http://heim.ifi.uio.no/~gisle/enjoy/
DISTNAME=	l2a

MAINTAINER=	jflemer@alum.rpi.edu
COMMENT=	L2a - LaTeX to ASCII converter

USE_ZIP=	yes

WRKSRC=		${WRKDIR}
MAKE_ENV=	INSTALL_PROGRAM="${INSTALL_PROGRAM}" INSTALL_MAN="${INSTALL_MAN}"

MAN1=		l2a.1
PLIST_FILES=	bin/l2a

NO_STAGE=	yes
.include <bsd.port.mk>
