# Created by: cperciva@daemonology.net
# $FreeBSD: ports/ports-mgmt/portsnap/Makefile,v 1.18 2007/02/05 01:08:31 pav Exp $

PORTNAME=	portsnap
PORTVERSION=	1.2
CATEGORIES=	ports-mgmt
MASTER_SITES=	http://leaf.dragonflybsd.org/~marino/dports-src/

MAINTAINER=	cperciva@daemonology.net
COMMENT=	Provides secure snapshots of the ports directory

NO_STAGE=	yes
USE_BZIP2=	yes
MAN5=		portsnap.conf.5
MAN8=		portsnap.8
SUB_FILES=	pkg-message
PKGMESSAGE=	${WRKDIR}/pkg-message

post-patch:
	${REINPLACE_CMD} -e "s,%%PREFIX%%,${PREFIX},g" \
		${WRKSRC}/portsnap ${WRKSRC}/portsnap.8

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
