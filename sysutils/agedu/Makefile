# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: sysutils/agedu/Makefile 329909 2013-10-09 16:16:48Z sunpoet $

PORTNAME=	agedu
PORTVERSION=	9723
CATEGORIES=	sysutils
MASTER_SITES=	LOCAL/sunpoet \
		http://www.chiark.greenend.org.uk/~sgtatham/${PORTNAME}/
DISTNAME=	${PORTNAME}-r${PORTVERSION}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Unix utility for tracking down wasted disk space

LICENSE=	MIT

GNU_CONFIGURE=	yes

PLIST_FILES=	bin/${PORTNAME} \
		man/man1/${PORTNAME}.1.gz

post-patch:
	@${REINPLACE_CMD} -e 's|HOST_NAME_MAX|_POSIX_&|' ${WRKSRC}/httpd.c

.include <bsd.port.mk>
