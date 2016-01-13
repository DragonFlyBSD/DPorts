# Created by: cperciva@daemonology.net
# $FreeBSD$

PORTNAME=	portsnap
PORTVERSION=	1.3
CATEGORIES=	ports-mgmt
MASTER_SITES=	https://leaf.dragonflybsd.org/~marino/dports-src/

MAINTAINER=	cperciva@daemonology.net
COMMENT=	Provides secure snapshots of the ports directory

USES=		tar:bzip2
SUB_FILES=	pkg-message
PKGMESSAGE=	${WRKDIR}/pkg-message

post-patch:
	${REINPLACE_CMD} -e "s,%%PREFIX%%,${PREFIX},g" \
		${WRKSRC}/portsnap ${WRKSRC}/portsnap.8 \
		${WRKSRC}/portsnap.conf.sample

.include <bsd.port.mk>
