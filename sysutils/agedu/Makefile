# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: ports/sysutils/agedu/Makefile,v 1.9 2012/12/12 03:26:59 svnexp Exp $

PORTNAME=	agedu
PORTVERSION=	9723
CATEGORIES=	sysutils
MASTER_SITES=	http://www.chiark.greenend.org.uk/~sgtatham/${PORTNAME}/ \
		LOCAL/sunpoet
DISTNAME=	${PORTNAME}-r${PORTVERSION}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	A Unix utility for tracking down wasted disk space

GNU_CONFIGURE=	yes

MAN1=		${PORTNAME}.1
PLIST_FILES=	bin/${PORTNAME}

post-patch:
	@${REINPLACE_CMD} -e 's|HOST_NAME_MAX|_POSIX_&|' ${WRKSRC}/httpd.c

.include <bsd.port.mk>
