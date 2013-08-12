# Created by: ijliao
# $FreeBSD: misc/cpuid/Makefile 323129 2013-07-16 21:59:48Z eadler $

PORTNAME=	cpuid
PORTVERSION=	3.3
PORTREVISION=	6
CATEGORIES=	misc
MASTER_SITES=	http://www.ka9q.net/code/cpuid/

MAINTAINER=	eadler@FreeBSD.org
COMMENT=	CPU identification utility

PLIST_FILES=	bin/cpuid
ONLY_FOR_ARCHS=	i386 amd64

post-patch:
	${MV} ${WRKSRC}/Makefile ${WRKSRC}/Makefile.bak && \
	    ${CP} ${FILESDIR}/Makefile.bsd ${WRKSRC}/Makefile

.include <bsd.port.mk>
