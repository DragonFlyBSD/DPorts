# Created by: andrew@scoop.co.nz
# $FreeBSD: security/l5/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	l5
PORTVERSION=	1.2
CATEGORIES=	security sysutils
MASTER_SITES=	http://ftp.cerias.purdue.edu/pub/tools/unix/sysutils/l5/
DISTNAME=	L5
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	File Integrity Assessment Tool

NO_WRKSUBDIR=	true
ALL_TARGET=	freebsd

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin
	${MKDIR} ${PREFIX}/share/doc/${PORTNAME}
	${INSTALL_DATA} ${WRKSRC}/README ${PREFIX}/share/doc/${PORTNAME}

.include <bsd.port.pre.mk>
.if ${ARCH} == 'x86_64'
BROKEN=	incorrect runtime output
.endif
.include <bsd.port.post.mk>
