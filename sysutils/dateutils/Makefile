PORTNAME=	dateutils
PORTVERSION=	0.4.1
PORTREVISION=	2
CATEGORIES=	sysutils
MASTER_SITES=	https://bitbucket.org/hroptatyr/dateutils/downloads/

MAINTAINER=	jessefrgsmith@yahoo.ca
COMMENT=	Command line utilities for working with dates
WWW=		https://www.fresse.org/dateutils/

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	help2man:misc/help2man

USES=		tar:xz
GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=${PREFIX}/share

CONFLICTS_INSTALL=	py*-dateutils

INFO=		dateutils

OPTIONS_DEFINE=	DOCS

CFLAGS= -D__BSD_VISIBLE
dfly-patch:
	${REINPLACE_CMD} -e "s@\(D_XOPEN_SOURCE\)=700@\1=600@g"	\
		${WRKSRC}/build-aux/Makefile.in	\
		${WRKSRC}/build-aux/yuck.am	# for vfork visibility

.include <bsd.port.mk>
