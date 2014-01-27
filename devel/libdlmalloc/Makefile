# Created by: roberto
# $FreeBSD: devel/libdlmalloc/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	dlmalloc
PORTVERSION=	2.8.6
CATEGORIES=	devel
MASTER_SITES=	ftp://gee.cs.oswego.edu/pub/misc/ 
DISTFILES=	malloc-${PORTVERSION}.c malloc-${PORTVERSION}.h

MAINTAINER=	roberto@FreeBSD.org
COMMENT=	Small, fast malloc library by Doug Lea

NO_WRKSUBDIR=	yes
USE_LDCONFIG=	yes

NO_STAGE=	yes
do-extract:
	@${MKDIR} ${WRKDIR}
.for f in ${DISTFILES}
	${CP} -p ${DISTDIR}/${f} ${WRKDIR}
.endfor
	${CP} -p ${FILESDIR}/Makefile ${WRKDIR}

.include <bsd.port.mk>
