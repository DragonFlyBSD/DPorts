# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: sysutils/agedu/Makefile 325776 2013-08-31 07:47:41Z sunpoet $

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

MAN1=		${PORTNAME}.1
PLIST_FILES=	bin/${PORTNAME}

post-patch:
	@${REINPLACE_CMD} -e 's|HOST_NAME_MAX|_POSIX_&|' ${WRKSRC}/httpd.c

.include <bsd.port.mk>
