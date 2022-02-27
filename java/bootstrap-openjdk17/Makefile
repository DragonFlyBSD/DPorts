PORTNAME=	openjdk17
PORTVERSION=	17.0.1.12.1
CATEGORIES=	java devel
MASTER_SITES=	https://avalon.dragonflybsd.org/misc/distfiles/
PKGNAMEPREFIX=	bootstrap-
DISTNAME=	${JDK_PORT}-${JDK_ARCH}-${PORTVERSION}

MAINTAINER=	zrj@ef.irc
COMMENT=	Java Development Kit 17 (bootstrap)

LICENSE=	GPLv2

USES=		tar:xz

NO_BUILD=	yes
PLIST_SUB=	JDK_ROOT=${JDK_ROOT}
WRKSRC=		${WRKDIR}/${JDK_ROOT}

JDK_PORT=	${PKGNAMEPREFIX}${PORTNAME}
JDK_ROOT=	${PKGNAMEPREFIX}${PORTNAME}
JDK_ARCH=	${ARCH}

INSTALLDIR=	${STAGEDIR}${PREFIX}/${JDK_ROOT}

do-install:
	@cd ${WRKSRC} && ${COPYTREE_SHARE} . ${INSTALLDIR}
	@cd ${WRKSRC} && ${COPYTREE_BIN} bin ${INSTALLDIR}
	@${CHMOD} a+x ${INSTALLDIR}/lib/jspawnhelper

.include <bsd.port.mk>
