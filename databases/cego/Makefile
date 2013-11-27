# Created by: Kurt Jaeger <fbsd-ports@opsec.eu>
# $FreeBSD: databases/cego/Makefile 334910 2013-11-26 00:30:44Z wg $

PORTNAME=	cego
PORTVERSION=	2.19.13
CATEGORIES=	databases
MASTER_SITES=	http://www.lemke-it.com/

MAINTAINER=	fbsd-ports@opsec.eu
COMMENT=	Relational and transactional database system

LICENSE=	GPLv3

LIB_DEPENDS=	liblfcbase.so:${PORTSDIR}/devel/lfcbase \
		liblfcxml.so:${PORTSDIR}/devel/lfcxml

GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include

USE_LDCONFIG=	yes
USE_RC_SUBR=	cego

USES=		ncurses readline

USERS=	cego
GROUPS=	cego

PLIST_SUB+=	USER=${USERS}

post-patch:
	@${REINPLACE_CMD} -e 's,-O3,,g' \
		${WRKSRC}/src/Makefile.in \
		${WRKSRC}/samples/cgplustest/Makefile.in \
		${WRKSRC}/samples/cgwraptest/Makefile.in

post-install:
	@${MKDIR} ${STAGEDIR}${DATADIR}
	@${CP} ${WRKSRC}/tools/* ${STAGEDIR}${DATADIR}

.include <bsd.port.mk>
