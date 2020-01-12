
PORTNAME=	openjdk11
PORTVERSION=	11.0.5.10.1
CATEGORIES=	java devel
PKGNAMEPREFIX=	bootstrap-
DISTNAME=	${JDK_PORT}-${JDK_ARCH}-${PORTVERSION}

MASTER_SITES=	https://avalon.dragonflybsd.org/misc/distfiles/
MAINTAINER=	zrj@ef.irc
COMMENT=	Java Development Kit 11 (bootstrap)

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
